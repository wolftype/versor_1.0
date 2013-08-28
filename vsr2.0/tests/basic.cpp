#define __EUC__
#include "products_all.h"

using namespace vsr;   

typedef Blade1<4>::VEC Vec4;

int main(){
	
	Vec4 v(1,2,3,4);
	Vec4 v2(1,2.5,3.5,4.5);
	(v*v2).vprint();  
	(!v2).vprint();
	
	return 0;
}