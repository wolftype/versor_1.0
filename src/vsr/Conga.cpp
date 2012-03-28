/*
 *  Conga.cpp
 *  CONGA
 *
 *  Created by x on 3/15/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "Conga.h"

namespace vsr {

Conga :: Conga() {
	//load dylib
	char *error;
    
    string libpath = "cga.framework/cga";
    cout << "CWD: " << File::cwd << endl;
    cout << "FRAMEWORK: " << libpath << endl; 
	libhandle = dlopen (libpath.c_str(), RTLD_LAZY);
	
	if (!libhandle) {
		fputs (dlerror(), stderr);
		exit(1);
	}	
	
	cout << "conga binding . . . " << endl;
//	bindFunc("conga_gp_fn",  &(gp_ptr.get));

	//Bind to Number of States
	bindInt("conga_gp_numstates", &mNumGP);	
	bindInt("conga_op_numstates", &mNumOP);	
	bindInt("conga_ip_numstates", &mNumIP);
	
	mNum = mNumGP;

	bindString("conga_base_names", &base_name);
//	bindDInt("conga_base_index", &base_index, 32, 32);
//	bindDInt("conga_base_factors", &base_factor, 32, 5);

	bindDInt5("conga_base_factors", &base_fac);
	bindDInt32("conga_base_index", &base_idx);

	bindInt("conga_base_grades", &base_grade);

	bindDouble("conga_gp_fn",  &(gp_ptr.get));
	bindDouble("conga_op_fn",  &(op_ptr.get));
	bindDouble("conga_ip_fn",  &(ip_ptr.get));



	//Bind To Array of state names
	bindString("conga_gp_name", &gp_name.ptr);
	bindString("conga_op_name", &op_name_ptr);
	bindString("conga_ip_name", &ip_name_ptr);
	bindString("conga_gp_bases",&gp_bases.ptr);
	
	//Bind To Array of state sizes (number of doubles to allocate)
	bindInt("conga_gp_size", &gp_num_ptr);	
	bindInt("conga_op_size", &op_num_ptr);
	bindInt("conga_ip_size", &ip_num_ptr);
	
	//Bind to Array of Indices
	bindInt("conga_gp_return_idx", &gp_idx_ptr);
	bindInt("conga_op_return_idx", &op_idx_ptr);
	bindInt("conga_ip_return_idx", &ip_idx_ptr);
	
	//Bind to Reversion etc
	
	bindDouble("conga_reverse_fn",  &revers.ptr.get);
	bindDouble("conga_involute_fn", &involut.ptr.get);
	bindDouble("conga_conjugate_fn", &conjug.ptr.get);

	cout << "conga bound . . . " << endl;
	

}

Conga :: ~Conga() {
	dlclose(libhandle);
}

/* THIS IS WHY HANDLES TO POINTERS (**) ARE IMPORTANT! */
void Conga :: bindFunc(string c, void ** f) { 
	char *error;
	*f = dlsym( libhandle, c.c_str() );
	if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            exit(1);
	}
}

void Conga :: bindString(string c, char *** s ) {
	char *error;
	*s = (char **) dlsym( libhandle, c.c_str() );
	cout << s[0] << endl;
	if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            exit(1);
	}
}

void Conga :: bindInt(string c, int ** d) {
	char *error;
	*d = (int *)dlsym( libhandle, c.c_str() );
	if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            exit(1);
	}
}

void Conga :: bindDInt(string c, int *** d, int num, int stride ) {
	
	//for (int i = 0; i < 32; ++i){
		char *error;
		int * dp[num];	
		for(int i =0; i < num; ++i){
			dp[i] =(int *)dlsym( libhandle, c.c_str() ) + i * stride;
		}
		*d = (int**)dp;		
		if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            exit(1);
		}
	//}
	cout << "DINT: " << c << " " << (*d)[3][0] << " " << dp << " " << endl;
}

void Conga :: bindDInt32(string c, int * (*d)[NUMSTATES] ) {
	char *error;
	for(int i =0; i < num(); ++i){
		(*d)[i] =(int *)dlsym( libhandle, c.c_str() ) + i * NUMBASE;				
	}
	if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            exit(1);
	}	
	cout << "DINT: " << c << " " << (*d)[50][0] << endl;
}

void Conga :: bindDInt5(string c, int * (*d)[NUMBASE] ) {
	char *error;
	for(int i =0; i < NUMBASE; ++i){
		(*d)[i] =(int *)dlsym( libhandle, c.c_str() ) + i * NUMBASE;				
	}
	if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            exit(1);
	}	
	cout << "DINT: " << c << " " << (*d)[3][0] << endl;
}


void Conga :: bindDouble(string c, V_TYPE ** d) {
	char *error;
	*d = (V_TYPE *)dlsym( libhandle, c.c_str() );
	if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            exit(1);
	}
}

int  Conga :: gp_idx(int _tdx)  { return gp_idx_ptr[_tdx]; }
int  Conga :: gp_num(int _idx)  { return gp_num_ptr[_idx]; }

int  Conga :: op_idx(int _tdx)  { return op_idx_ptr[_tdx]; }
int  Conga :: op_num(int _idx)  { return op_num_ptr[_idx]; }

int  Conga :: ip_idx(int _tdx)  { return ip_idx_ptr[_tdx]; }
int  Conga :: ip_num(int _idx)  { return ip_num_ptr[_idx]; }


V_TYPE * Conga :: gp(int _idx, V_TYPE* a, V_TYPE* b, V_TYPE *r){ 
	return gp_ptr.func(_idx,a,b,r);
}	
V_TYPE * Conga :: op(int _idx, V_TYPE* a, V_TYPE* b, V_TYPE *r){ 
	return op_ptr.func(_idx,a,b,r);
}
V_TYPE * Conga :: ip(int _idx, V_TYPE* a, V_TYPE* b, V_TYPE *r){ 
	return ip_ptr.func(_idx,a,b,r);
}

}