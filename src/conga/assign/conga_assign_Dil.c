	
#include "conga_assign_Dil.h"

	
void conga_assign_31_1(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_4(double * a, double * b) 
{			
a[1] = b[0];

}
void conga_assign_31_8(double * a, double * b) 
{			
a[1] = b[9];

}
void conga_assign_31_20(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_31_29(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_30(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_31(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[1];

}
void conga_assign_31_32(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_33(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_34(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[7];

}
void conga_assign_31_35(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[4];

}
void conga_assign_31_36(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_37(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[4];

}
void conga_assign_31_38(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[10];

}
void conga_assign_31_39(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[4];

}
void conga_assign_31_40(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[10];

}
void conga_assign_31_43(double * a, double * b) 
{			
a[1] = b[0];

}
void conga_assign_31_48(double * a, double * b) 
{			
a[1] = b[6];

}
void conga_assign_31_49(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_53(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_31_61(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[10];

}
void conga_assign_31_64(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[7];

}
void conga_assign_31_85(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[7];

}
void conga_assign_31_86(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_31_89(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[10];

}
void conga_assign_31_92(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[7];

}
void conga_assign_31_104(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_117(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[7];

}
void conga_assign_31_127(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[10];

}
void conga_assign_31_129(double * a, double * b) 
{			
a[1] = b[9];

}
void conga_assign_31_131(double * a, double * b) 
{			
a[1] = b[9];

}
void conga_assign_31_133(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_136(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_139(double * a, double * b) 
{			
a[1] = b[6];

}
void conga_assign_31_140(double * a, double * b) 
{			
a[1] = b[9];

}
void conga_assign_31_143(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_145(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_31_147(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_151(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_31_157(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[7];

}
void conga_assign_31_159(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_162(double * a, double * b) 
{			
a[0] = b[0];

}
void conga_assign_31_163(double * a, double * b) 
{			
a[1] = b[3];

}
void conga_assign_31_166(double * a, double * b) 
{			
a[1] = b[6];

}
void conga_assign_31_167(double * a, double * b) 
{			
a[0] = b[0];
a[1] = b[15];

}


void conga_direct_assign_31(double* a, double* b)
{
a[0] = b[0];
a[1] = b[1];

}

		
double * conga_reverse_Dil(double * a, double *r)
{
r[0] = a[0];r[1] = a[1] * -1;
return r;
}

double * conga_involute_Dil(double * a, double * r)
{
r[0] = a[0];r[1] = a[1];
return r;
}

double * conga_conjugate_Dil(double * a, double * r)
{
r[0] = a[0];r[1] = a[1] * -1;
return r;
}
	

	