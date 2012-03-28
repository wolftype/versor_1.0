
#include "conga_ip_Dil_Sph.h"


double * conga_ip_74_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_6(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[0] ;
	
	
	//_ni
	r[4] = a[7] * b[0]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[0]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[0] ;
	
	
	//_e3noni
	r[7] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_9(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_10(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[6] * b[4]  * -1  + a[7] * b[3]  * -1 ;
	
	
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

double * conga_ip_74_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_13(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_14(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[0] ;
	
	
	//_e3ni
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_16(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_17(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[0]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[0] ;
	
	
	//_e3no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_18(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_19(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
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

double * conga_ip_74_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_24(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_25(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_28(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_29(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1  + a[6] * b[11]  * -1 ;
	
	
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

double * conga_ip_74_35(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[7] ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1  + a[6] * b[15]  * -1  + a[7] * b[14]  * -1 ;
	
	
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

double * conga_ip_74_41(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_42(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_43(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_44(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_45(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[3] ;
	
	
	//_ni
	r[4] = a[7] * b[3]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[3] ;
	
	
	//_e3noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_46(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[15]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[15] ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[15]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[6] * b[15] ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[7] * b[15]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[15]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[15] ;
	
	
	//_e3noni
	r[7] = a[0] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1  + a[6] * b[11]  * -1  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_74_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[11]  * -1  + a[7] * b[10]  * -1 ;
	
	
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

double * conga_ip_74_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[7] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[7] ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1  + a[6] * b[7]  * -1 ;
	
	
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

double * conga_ip_74_54(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_55(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_56(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_57(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_58(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[3] ;
	
	
	//_e3noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_60(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1  + a[6] * b[14]  * -1 ;
	
	
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

double * conga_ip_74_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[7] * b[14]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[14] ;
	
	
	//_e3noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[10]  * -1  + a[7] * b[9]  * -1 ;
	
	
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

double * conga_ip_74_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[7] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_66(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
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

double * conga_ip_74_67(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
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

double * conga_ip_74_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[6] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_70(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_71(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[12]  + a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[12]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[13] ;
	
	
	//_e3noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_73(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1  + a[5] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0]  + a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[1] ;
	
	
	//_ni
	r[4] = a[7] * b[1]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[1] ;
	
	
	//_e3noni
	r[7] = a[0] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_74(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[7]  * -1  + a[7] * b[6]  * -1 ;
	
	
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

double * conga_ip_74_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_76(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_77(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[6] * b[6]  * -1 ;
	
	
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

double * conga_ip_74_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_79(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_80(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_81(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[4] ;
	
	
	//_ni
	r[4] = a[7] * b[4]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[4] ;
	
	
	//_e3noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[11] ;
	
	
	//_ni
	r[4] = a[7] * b[11]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[11] ;
	
	
	//_e3noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1  + a[7] * b[11]  * -1 ;
	
	
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

double * conga_ip_74_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3] ;
	
	
	//_ni
	r[4] = a[7] * b[3]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[3]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[3] ;
	
	
	//_e3noni
	r[7] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_88(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1  + a[7] * b[14]  * -1 ;
	
	
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

double * conga_ip_74_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[7] * b[14]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[14] ;
	
	
	//_e3noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[10]  * -1  + a[7] * b[9]  * -1 ;
	
	
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

double * conga_ip_74_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_94(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[6] ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[11] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[7] * b[11]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[11] ;
	
	
	//_e3noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_97(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[7] * b[9]  * -1 ;
	
	
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

double * conga_ip_74_99(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_100(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1  + a[6] * b[9]  * -1 ;
	
	
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

double * conga_ip_74_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[4] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[4]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[4] ;
	
	
	//_e3noni
	r[7] = a[0] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_103(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[7] * b[9]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[9] ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_106(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[4]  * -1  + a[7] * b[3]  * -1 ;
	
	
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

double * conga_ip_74_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_108(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_109(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2ni
	r[2] = a[1] * b[3] ;
	
	
	//_e3ni
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_111(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_113(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_114(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_116(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  * -1  + a[7] * b[0]  * -1 ;
	
	
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

double * conga_ip_74_117(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_118(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1  + a[6] * b[13]  * -1  + a[7] * b[12]  * -1 ;
	
	
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

double * conga_ip_74_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[7] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[7] ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_121(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_122(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_123(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_124(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_125(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1  + a[7] * b[3]  * -1 ;
	
	
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

double * conga_ip_74_126(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_128(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[14]  * -1  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_74_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
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

double * conga_ip_74_132(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_134(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_135(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[14]  * -1  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_74_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[14] ;
	
	
	//_e3
	r[2] = a[3] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[6] * b[14] ;
	
	
	//_ni
	r[4] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[7] * b[14]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[14] ;
	
	
	//_e3noni
	r[7] = a[0] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[9] ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[9] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[7] * b[9]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[9] ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_74_141(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_142(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[7] ;
	
	
	//_ni
	r[4] = a[7] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[7] ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[6] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[6] ;
	
	
	//_e3noni
	r[7] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_146(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_148(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_149(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e1no
	r[1] = a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[1] * b[3] ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_150(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
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

double * conga_ip_74_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[6] * b[7] ;
	
	
	//_ni
	r[4] = a[7] * b[7]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[7] ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[6] * b[11] ;
	
	
	//_ni
	r[4] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[7] * b[11]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[11] ;
	
	
	//_e3noni
	r[7] = a[0] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[7]  * -1  + a[7] * b[6]  * -1 ;
	
	
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

double * conga_ip_74_155(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1  + a[7] * b[6]  * -1 ;
	
	
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

double * conga_ip_74_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[6] * b[10] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[10] ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[6] * b[13]  * -1 ;
	
	
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

double * conga_ip_74_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[13] ;
	
	
	//_e3noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13] ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[6] * b[13] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[13] ;
	
	
	//_e3noni
	r[7] = a[0] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1  + a[7] * b[13]  * -1 ;
	
	
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

double * conga_ip_74_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_noni
	r[1] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[6] * b[6] ;
	
	
	//_ni
	r[4] = a[7] * b[6]  * -1 ;
	
	
	//_e1noni
	r[5] = a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[6] = a[1] * b[6] ;
	
	
	//_e3noni
	r[7] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_74_165(double * a, double * b, double *r) { 
	
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

double * conga_ip_74_166(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_74_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[26]  * -1  + a[4] * b[27]  * -1  + a[5] * b[28]  * -1  + a[6] * b[30]  * -1  + a[7] * b[29]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[25]  * -1  + a[5] * b[31]  * -1 ;
	
	
	//_e2
	r[2] = a[1] * b[25]  + a[4] * b[31] ;
	
	
	//_e3
	r[3] = a[0] * b[25]  * -1  + a[3] * b[31]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[16]  * -1  + a[1] * b[17]  * -1  + a[2] * b[18]  * -1  + a[6] * b[31] ;
	
	
	//_ni
	r[5] = a[0] * b[19]  * -1  + a[1] * b[20]  * -1  + a[2] * b[21]  * -1  + a[7] * b[31]  * -1 ;
	
	
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


