	#include "CongaBasicTypes.h"
	double * conga_reverse_fn(int i, double* a, double* r){
		return conga_reverse[i](a,r);
	}
	double * conga_involute_fn(int i, double* a, double* r){
		return conga_involute[i](a,r);
	}
	double * conga_conjugate_fn(int i, double* a, double* r){
		return conga_conjugate[i](a,r);
	}
	