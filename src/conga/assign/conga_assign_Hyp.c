	
#include "conga_assign_Hyp.h"

	
void conga_assign_5_2(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_5_3(double * a, double * b) 
{			
a[1] = b[0];

}
void conga_assign_5_5(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[1];

}
void conga_assign_5_7(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_5_22(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_5_26(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_5_41(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_5_42(double * a, double * b) 
{			
a[1] = b[0];

}
void conga_assign_5_44(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[1];

}
void conga_assign_5_46(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_5_47(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_5_52(double * a, double * b) 
{			
a[1] = b[0];

}
void conga_assign_5_54(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_5_56(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_5_57(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_5_58(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_5_60(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_5_62(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_5_67(double * a, double * b) 
{			
a[1] = b[0];

}
void conga_assign_5_70(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_5_79(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_5_84(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_5_88(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_5_90(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_5_94(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_5_96(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_5_97(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_5_100(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_5_103(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[1];

}
void conga_assign_5_111(double * a, double * b) 
{			
a[1] = b[0];

}
void conga_assign_5_114(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_5_118(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_5_128(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_5_132(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_5_135(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_5_137(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_5_152(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_5_153(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[1];

}
void conga_assign_5_155(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_5_160(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_5_161(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_5_167(double * a, double * b) 
{			
a[0] = b[4];
a[1] = b[5];

}


void conga_direct_assign_5(double* a, double* b)
{
a[0] = b[0];
a[1] = b[1];

}

		
double * conga_reverse_Hyp(double * a, double *r)
{
r[0] = a[0];r[1] = a[1];
return r;
}

double * conga_involute_Hyp(double * a, double * r)
{
r[0] = a[0] * -1;r[1] = a[1] * -1;
return r;
}

double * conga_conjugate_Hyp(double * a, double * r)
{
r[0] = a[0] * -1;r[1] = a[1] * -1;
return r;
}
	

	