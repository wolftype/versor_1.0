//
//  vsr_eval.h
//  vsr
//
//  Created by Pablo Colapinto on 4/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
/*!
 
 Vsr Evaluations -- function pointers and Templated Expresions
 
 */



#ifndef vsr_eval_h
#define vsr_eval_h

#include "State.h"

namespace vsr {
/* Operatrions that take function pointers (Time) */
typedef double (*sFunc)(float);
/* Operations that take four States and Spit out a fifth */	
typedef State (*QuadFunc)(const State&, const State&, const State&, const State&);
/* Operations that take three States and Spit out a fourth */	
typedef State (*TriFunc)(const State&, const State&, const State&);
/* Operations that take two States and Spit out a Third */
typedef State (*BiFunc)(const State&, const State&);	
/* Operations that take one State and Spit out one */
typedef State (*MonoFunc)( const State& );
/* Operations that take one State and a Scalar */
typedef State (*MonoScaFunc)( const State&, double );
/* Operations that take just a scalar (e.g Rot::e12(double) ) */
typedef State (*ScaFunc)( double );

}
#endif
