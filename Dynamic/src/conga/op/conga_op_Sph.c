
#include "conga_op_Sph.h"


double * conga_op_10_1(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_2(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_10_3(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_10_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_5(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_10_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_7(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_8(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_9(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_10(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_11(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_12(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_13(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_15(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_16(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_18(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_19(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_20(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_21(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_22(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_10_23(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_26(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_27(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_28(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_29(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_30(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_31(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_32(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_33(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_34(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_35(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_36(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_37(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_38(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_39(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_40(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_41(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_10_42(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_10_43(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_44(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_10_45(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_46(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_47(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_48(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_49(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_50(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_51(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_52(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_10_53(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_54(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_10_55(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_56(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_57(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_58(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_59(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_60(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_61(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_62(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_10_63(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_64(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_65(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_66(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_67(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_10_68(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_69(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_70(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_10_71(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_72(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_73(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_74(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_75(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_76(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_77(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_78(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_79(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_10_80(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_81(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_82(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_83(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_84(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_85(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_86(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_87(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_88(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_89(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_90(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_91(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_92(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_93(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_94(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_95(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_96(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_10_97(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_98(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_99(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_100(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_10_101(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_102(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_103(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_10_104(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_105(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_106(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_107(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_108(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_109(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_110(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_111(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_10_112(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_113(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_114(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_10_115(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_116(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_117(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_118(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_119(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_120(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_121(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_122(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_123(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_124(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_125(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_126(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_127(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_128(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_129(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_130(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_131(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_132(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_10_133(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_134(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_135(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_136(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_137(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_138(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_139(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_140(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_141(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_142(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_143(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_144(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_145(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_146(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_147(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_148(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_149(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_150(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_151(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_152(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_10_153(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[1]  + a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_10_154(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_155(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[4] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_10_156(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_157(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_158(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_10_159(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_160(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_10_161(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_10_162(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	return r;
}

double * conga_op_10_163(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_164(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_165(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_166(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_10_167(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[0] ;
	
	
	//_e13noni
	r[1] = a[1] * b[0] ;
	
	
	//_e23noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[3] * b[0] ;
	
	
	//_e123ni
	r[4] = a[4] * b[0] ;
	
	
	//_e123noni
	r[5] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[3] * b[5]  + a[4] * b[4]  * -1 ;
	
	
	return r;
}


