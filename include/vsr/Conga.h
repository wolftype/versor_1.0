/*
 *  conga.h
 *  Versor
 *
 *  Created by x on 3/15/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

/*! 
	Loads and binds libconga.dylib.  
	A Singleton Class which binds to "name", and closes the dylib upon quit.
*/

#ifndef CONGA_H_INCLUDED
#define CONGA_H_INCLUDED

#include <string>
#include <iostream>
#include <dlfcn.h>

#include "vsr_file.h"


namespace vsr {

using namespace std;

#define NUMSTATES 167//142
#define NUMBASE 32

extern "C" {
typedef double V_TYPE;
}

struct Assign {
	union{
		void * get;
		void * (*func)(int,V_TYPE*,V_TYPE*);		
	}ptr;
};


struct Revers {	
	union{
		V_TYPE  * get;
		V_TYPE  * (*func)(int,V_TYPE*,V_TYPE*);		
	}ptr;
};

class Conga {
	Conga();
	~Conga();
	
	void * libhandle;
	
	//Basic Number of States
	int * mNum; 
	
	//Extended (some Hidden) States
	int * mNumGP;
	int * mNumOP;
	int * mNumIP;
	
	union {
		V_TYPE  * get;
		V_TYPE  * (*func)(int,V_TYPE*,V_TYPE*,V_TYPE*);
	}gp_ptr;

	union {
		V_TYPE  * get;
		V_TYPE  * (*func)(int,V_TYPE*,V_TYPE*,V_TYPE*);
	}op_ptr;

	union {
		V_TYPE  * get;
		V_TYPE  * (*func)(int,V_TYPE*,V_TYPE*,V_TYPE*);
	}ip_ptr;

	union {
		void **(get);
		char **(ptr); 
	}gp_name;
	
	union {
		void **(get);
		char **(ptr); 
	}gp_bases;
	
	int  ** base_index;
	int  ** base_factor;

	int  * base_idx[NUMSTATES]; //167
	int  * base_fac[NUMBASE];


	int  *   base_grade;
	char **  base_name;
	
	
	int  * gp_num_ptr;
	int  * gp_idx_ptr;
	char ** gp_name_ptr;
	
	int * op_num_ptr;
	int * op_idx_ptr;
	char ** op_name_ptr;

	int * ip_num_ptr;
	int * ip_idx_ptr;
	char ** ip_name_ptr;

	//Flipping Function Ptrs
	Revers revers;
	Revers involut;
	Revers conjug;
	//Assign Function Ptr
//	Assign assign;
	
	public:
		
		static Conga& Line() {
			static Conga theConga;
			return theConga;
		}
		
		char * ba_nm(int _idx) { return base_name[_idx]; }
		int ba_gr(int _idx) { return base_grade[_idx]; }
		
		
		int ba_fa(int _idx, int _sub) { return base_fac[_idx][_sub]; }
		int ba_idx(int _idx,int _sub) { return base_idx[_idx][_sub]; }
		
		int  gp_num(int _idx);
		int  gp_idx(int _tdx);
		char * gp_nm(int _idx) { return gp_name.ptr[_idx]; }
		char * gp_ba(int _idx) { return gp_bases.ptr[_idx]; }

		int  op_num(int _idx);
		int  op_idx(int _tdx);
		char * op_nm(int _idx);

		int  ip_num(int _idx);
		int  ip_idx(int _tdx);
		char * ip_nm(int _idx);


		void bindFunc(string, void**);
		void bindInt(string, int**);
		void bindDInt(string, int***, int, int);
		void bindDInt32(string, int*(*)[NUMSTATES]);
		void bindDInt5(string, int*(*)[NUMBASE]);		
		void bindString(string, char***);
		void bindDouble(string, V_TYPE **);
		
		V_TYPE * gp(int n, V_TYPE* a, V_TYPE* b, V_TYPE *r);
		V_TYPE * op(int n, V_TYPE* a, V_TYPE* b, V_TYPE *r);
		V_TYPE * ip(int n, V_TYPE* a, V_TYPE* b, V_TYPE *r);
		
		int num()   { return *mNumGP;   } //changed
		int numGP() { return *mNumGP; }
		int numOP() { return *mNumOP; }
		int numIP() { return *mNumIP; }
		
		V_TYPE * reversion(int n, V_TYPE * a, V_TYPE * r) { return revers.ptr.func(n,a,r); }
		V_TYPE * involution(int n, V_TYPE * a, V_TYPE * r) { return involut.ptr.func(n,a,r); }
		V_TYPE * conjugation(int n, V_TYPE * a, V_TYPE * r) { return conjug.ptr.func(n,a,r); }
		
//		void assign(int an, int bn, double *a, double *b) { assign.ptr.func(n,a,b); }

};

}

#endif
