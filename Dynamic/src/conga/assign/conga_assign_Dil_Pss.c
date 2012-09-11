	
#include "conga_assign_Dil_Pss.h"

	
void conga_assign_73_6(double * a, double * b) 
{			
a[1] = b[0];

}
void conga_assign_73_9(double * a, double * b) 
{			
a[0] = b[9];

}
void conga_assign_73_25(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_73_28(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_73_45(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_73_46(double * a, double * b) 
{			
a[0] = b[11];

}
void conga_assign_73_47(double * a, double * b) 
{			
a[0] = b[14];
a[1] = b[15];

}
void conga_assign_73_52(double * a, double * b) 
{			
a[1] = b[7];

}
void conga_assign_73_54(double * a, double * b) 
{			
a[0] = b[7];

}
void conga_assign_73_55(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_73_56(double * a, double * b) 
{			
a[0] = b[7];

}
void conga_assign_73_59(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_73_62(double * a, double * b) 
{			
a[0] = b[13];
a[1] = b[14];

}
void conga_assign_73_65(double * a, double * b) 
{			
a[0] = b[9];
a[1] = b[10];

}
void conga_assign_73_71(double * a, double * b) 
{			
a[0] = b[3];

}
void conga_assign_73_72(double * a, double * b) 
{			
a[0] = b[12];
a[1] = b[13];

}
void conga_assign_73_73(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[1];

}
void conga_assign_73_83(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_73_84(double * a, double * b) 
{			
a[0] = b[10];
a[1] = b[11];

}
void conga_assign_73_87(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_73_90(double * a, double * b) 
{			
a[0] = b[13];
a[1] = b[14];

}
void conga_assign_73_93(double * a, double * b) 
{			
a[0] = b[9];
a[1] = b[10];

}
void conga_assign_73_96(double * a, double * b) 
{			
a[0] = b[10];
a[1] = b[11];

}
void conga_assign_73_102(double * a, double * b) 
{			
a[0] = b[3];
a[1] = b[4];

}
void conga_assign_73_105(double * a, double * b) 
{			
a[1] = b[9];

}
void conga_assign_73_120(double * a, double * b) 
{			
a[0] = b[6];
a[1] = b[7];

}
void conga_assign_73_128(double * a, double * b) 
{			
a[0] = b[14];

}
void conga_assign_73_130(double * a, double * b) 
{			
a[0] = b[9];
a[1] = b[10];

}
void conga_assign_73_132(double * a, double * b) 
{			
a[0] = b[13];

}
void conga_assign_73_134(double * a, double * b) 
{			
a[0] = b[9];

}
void conga_assign_73_135(double * a, double * b) 
{			
a[0] = b[13];

}
void conga_assign_73_137(double * a, double * b) 
{			
a[1] = b[14];

}
void conga_assign_73_138(double * a, double * b) 
{			
a[1] = b[9];

}
void conga_assign_73_142(double * a, double * b) 
{			
a[0] = b[6];
a[1] = b[7];

}
void conga_assign_73_144(double * a, double * b) 
{			
a[1] = b[6];

}
void conga_assign_73_146(double * a, double * b) 
{			
a[0] = b[6];

}
void conga_assign_73_148(double * a, double * b) 
{			
a[0] = b[6];

}
void conga_assign_73_152(double * a, double * b) 
{			
a[1] = b[7];

}
void conga_assign_73_153(double * a, double * b) 
{			
a[1] = b[11];

}
void conga_assign_73_158(double * a, double * b) 
{			
a[0] = b[9];
a[1] = b[10];

}
void conga_assign_73_160(double * a, double * b) 
{			
a[1] = b[13];

}
void conga_assign_73_161(double * a, double * b) 
{			
a[1] = b[13];

}
void conga_assign_73_164(double * a, double * b) 
{			
a[1] = b[6];

}
void conga_assign_73_165(double * a, double * b) 
{			
a[0] = b[6];

}
void conga_assign_73_167(double * a, double * b) 
{			
a[0] = b[25];
a[1] = b[31];

}


void conga_direct_assign_73(double* a, double* b)
{
a[0] = b[0];
a[1] = b[1];

}

		
double * conga_reverse_Dil_Pss(double * a, double *r)
{
r[0] = a[0] * -1;r[1] = a[1];
return r;
}

double * conga_involute_Dil_Pss(double * a, double * r)
{
r[0] = a[0] * -1;r[1] = a[1] * -1;
return r;
}

double * conga_conjugate_Dil_Pss(double * a, double * r)
{
r[0] = a[0];r[1] = a[1] * -1;
return r;
}
	

	