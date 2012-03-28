
#include "conga_ip_Pnt_Sph.h"


double * conga_ip_130_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[10] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[0] ;
	
	
	//_e13
	r[2] = a[7] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[0] ;
	
	
	//_e1no
	r[4] = a[2] * b[0] ;
	
	
	//_e2no
	r[5] = a[1] * b[0]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[0] ;
	
	
	//_e1ni
	r[7] = a[5] * b[0]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[0] ;
	
	
	//_e3ni
	r[9] = a[3] * b[0]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_8(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[4] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_11(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_130_14(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_130_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_25(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_30(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_33(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[5]  + a[8] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[6]  + a[7] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_130_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_37(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_130_39(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[15]  * -1  + a[5] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[15]  + a[4] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[15]  * -1  + a[3] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[9] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_130_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_130_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[1]  + a[8] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[2]  + a[7] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_130_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_130_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2]  + a[10] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3] ;
	
	
	//_e2no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[5] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[3] ;
	
	
	//_e3ni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13]  + a[9] * b[14]  * -1  + a[10] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[15] ;
	
	
	//_e13
	r[2] = a[7] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[15] ;
	
	
	//_e1no
	r[4] = a[2] * b[15] ;
	
	
	//_e2no
	r[5] = a[1] * b[15]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[15] ;
	
	
	//_e1ni
	r[7] = a[5] * b[15]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[15] ;
	
	
	//_e3ni
	r[9] = a[3] * b[15]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[15]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[5] * b[10]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[4] * b[10]  + a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[10]  * -1  + a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[9] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[11]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[11]  + a[4] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[11]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[10] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7] ;
	
	
	//_e2no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7] ;
	
	
	//_e1ni
	r[7] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_130_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	return r;
}

double * conga_ip_130_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[10] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3] ;
	
	
	//_e2no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[5] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[3] ;
	
	
	//_e3ni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	return r;
}

double * conga_ip_130_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13]  + a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1  + a[10] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14] ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14] ;
	
	
	//_e1ni
	r[7] = a[5] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[14] ;
	
	
	//_e3ni
	r[9] = a[3] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_130_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10] ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10] ;
	
	
	//_e1ni
	r[7] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_130_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_130_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11]  + a[9] * b[12]  * -1  + a[10] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13] ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13] ;
	
	
	//_e1ni
	r[7] = a[5] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[9] * b[0]  * -1  + a[10] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[1] ;
	
	
	//_e13
	r[2] = a[7] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[1] ;
	
	
	//_e1no
	r[4] = a[2] * b[1] ;
	
	
	//_e2no
	r[5] = a[1] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1] ;
	
	
	//_e1ni
	r[7] = a[5] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[1] ;
	
	
	//_e3ni
	r[9] = a[3] * b[1]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[9]  + a[8] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[10]  + a[7] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_130_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_130_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_130_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_130_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_130_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[4] ;
	
	
	//_e13
	r[2] = a[7] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[4] ;
	
	
	//_e1no
	r[4] = a[2] * b[4] ;
	
	
	//_e2no
	r[5] = a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4] ;
	
	
	//_e1ni
	r[7] = a[5] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[4] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9]  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[11] ;
	
	
	//_e2no
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11] ;
	
	
	//_e1ni
	r[7] = a[5] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11]  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1  + a[9] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_130_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[10] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[2] * b[3] ;
	
	
	//_e2no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3] ;
	
	
	//_e1ni
	r[7] = a[5] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[3] ;
	
	
	//_e3ni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	return r;
}

double * conga_ip_130_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_130_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1  + a[10] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14] ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14] ;
	
	
	//_e1ni
	r[7] = a[5] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[14] ;
	
	
	//_e3ni
	r[9] = a[3] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[10]  * -1  + a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[10]  + a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[10]  * -1  + a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_130_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10] ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10] ;
	
	
	//_e1ni
	r[7] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_130_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9]  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[11] ;
	
	
	//_e2no
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11] ;
	
	
	//_e1ni
	r[7] = a[5] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	return r;
}

double * conga_ip_130_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_130_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_130_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	return r;
}

double * conga_ip_130_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[4] ;
	
	
	//_e13
	r[2] = a[7] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[4] ;
	
	
	//_e1no
	r[4] = a[2] * b[4] ;
	
	
	//_e2no
	r[5] = a[1] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4] ;
	
	
	//_e1ni
	r[7] = a[5] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[4] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	return r;
}

double * conga_ip_130_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_130_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[10] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[9] ;
	
	
	//_e13
	r[2] = a[7] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9] ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9] ;
	
	
	//_e1ni
	r[7] = a[5] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[9] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_130_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_130_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	return r;
}

double * conga_ip_130_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_130_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	return r;
}

double * conga_ip_130_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[0]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_117(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	return r;
}

double * conga_ip_130_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[5] * b[12]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[4] * b[12]  + a[6] * b[9]  + a[8] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[3] * b[12]  * -1  + a[6] * b[10]  + a[7] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1  + a[9] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7] ;
	
	
	//_e2no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7] ;
	
	
	//_e1ni
	r[7] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	return r;
}

double * conga_ip_130_122(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_130_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	return r;
}

double * conga_ip_130_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_130_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_127(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13]  + a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10] ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10] ;
	
	
	//_e1ni
	r[7] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_133(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[14]  * -1  + a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[14]  + a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[14]  * -1  + a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13]  + a[10] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[2] * b[14] ;
	
	
	//_e2no
	r[5] = a[1] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[14] ;
	
	
	//_e1ni
	r[7] = a[5] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[14] ;
	
	
	//_e3ni
	r[9] = a[3] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[14]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[10] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[9] ;
	
	
	//_e13
	r[2] = a[7] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[9] ;
	
	
	//_e1no
	r[4] = a[2] * b[9] ;
	
	
	//_e2no
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9] ;
	
	
	//_e1ni
	r[7] = a[5] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[9] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_130_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_130_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7] ;
	
	
	//_e2no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7] ;
	
	
	//_e1ni
	r[7] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_143(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[10] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6] ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[5] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_130_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_147(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7]  + a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[9] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_130_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[10] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[2] * b[7] ;
	
	
	//_e2no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7] ;
	
	
	//_e1ni
	r[7] = a[5] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7]  + a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10]  + a[10] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[2] * b[11] ;
	
	
	//_e2no
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11] ;
	
	
	//_e1ni
	r[7] = a[5] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[7]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[7]  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[9] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	return r;
}

double * conga_ip_130_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_130_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_130_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[2] * b[10] ;
	
	
	//_e2no
	r[5] = a[1] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10] ;
	
	
	//_e1ni
	r[7] = a[5] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[2] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12]  + a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[10] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13] ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13] ;
	
	
	//_e1ni
	r[7] = a[5] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12]  + a[10] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[2] * b[13] ;
	
	
	//_e2no
	r[5] = a[1] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13] ;
	
	
	//_e1ni
	r[7] = a[5] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_130_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_130_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5]  + a[10] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[2] * b[6] ;
	
	
	//_e2no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6] ;
	
	
	//_e1ni
	r[7] = a[5] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[4] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[9] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_130_166(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_130_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[19]  + a[1] * b[20]  + a[2] * b[21]  + a[3] * b[16]  + a[4] * b[17]  + a[5] * b[18]  + a[6] * b[22]  + a[7] * b[23]  + a[8] * b[24]  + a[9] * b[25]  * -1  + a[10] * b[31]  * -1 ;
	
	
	//_e1
	r[1] = a[2] * b[30]  * -1  + a[5] * b[29]  * -1  + a[7] * b[26]  * -1  + a[8] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[1] * b[30]  + a[4] * b[29]  + a[6] * b[26]  + a[8] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[30]  * -1  + a[3] * b[29]  * -1  + a[6] * b[27]  + a[7] * b[28] ;
	
	
	//_no
	r[4] = a[0] * b[26]  * -1  + a[1] * b[27]  * -1  + a[2] * b[28]  * -1  + a[9] * b[29]  * -1 ;
	
	
	//_ni
	r[5] = a[3] * b[26]  + a[4] * b[27]  + a[5] * b[28]  + a[9] * b[30]  * -1 ;
	
	
	//_e12
	r[6] = a[8] * b[31] ;
	
	
	//_e13
	r[7] = a[7] * b[31]  * -1 ;
	
	
	//_e23
	r[8] = a[6] * b[31] ;
	
	
	//_e1no
	r[9] = a[2] * b[31] ;
	
	
	//_e2no
	r[10] = a[1] * b[31]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[31] ;
	
	
	//_e1ni
	r[12] = a[5] * b[31]  * -1 ;
	
	
	//_e2ni
	r[13] = a[4] * b[31] ;
	
	
	//_e3ni
	r[14] = a[3] * b[31]  * -1 ;
	
	
	//_noni
	r[15] = a[9] * b[31]  * -1 ;
	
	
	return r;
}


