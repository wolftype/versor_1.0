#include "vsr.h"
#include "vsr_op.h"
#include <iostream>


using namespace vsr;


int main(){
	for (int i = 0; i < 100; ++i){
		Rot rot = Gen::rot( Biv::xy * 1.0 * i/100);
		cout << Vec(1,0,0).sp(rot) << endl; 
	}
}
