//
//  vsr_casts.h
//  vsr_static
//
//  Created by Pablo Colapinto on 9/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_static_vsr_casts_h
#define vsr_static_vsr_casts_h


#include "vsr_typedefs.h"
//#include "MV.h"

namespace vsr{

template<class T, class S>
inline T const cast (const S& s ){
    
    printf("generic cast\n");

    T temp;
    if ( T::size >= S::size ) std::copy( &(s[0]), &(s[0])+S::size, &(temp[0]) );
    else std::copy ( &(s[0]), &(s[0])+T::size, &(temp[0]) );
        
    return temp;
}
 
template<class A>
A reverse (const A& a) { printf("reverse error! undefined for this type \n"); return a; }
template<class A>
A involute (const A& a) { printf("involute error! undefined for this type \n"); return a; }
template<class A>
A conjugate (const A& a) { printf("conjugate error! undefined for this type \n"); return a; }

		
inline Rot involute (const Rot& a) { 
	return Rot (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Rot reverse (const Rot& a) { 
	return Rot (a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Rot conjugate (const Rot& a) { 
	return Rot (a[0],-a[1],-a[2],-a[3]);
}
			
		 
template<> inline const Rot cast<Rot,Mot> (const Mot& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Dil> (const Dil& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Trv> (const Trv& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Mtd> (const Mtd& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Trs> (const Trs& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Mtt> (const Mtt& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Rtt> (const Rtt& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Rtd> (const Rtd& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Tvd> (const Tvd& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Tsd> (const Tsd& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Trt> (const Trt& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Rvd> (const Rvd& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Tst> (const Tst& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Tvt> (const Tvt& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Bst> (const Bst& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Sca> (const Sca& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Par> (const Par& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Sta> (const Sta& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Dll> (const Dll& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Biv> (const Biv& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Afl> (const Afl& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Ori_Cir> (const Ori_Cir& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Ori_Drb> (const Ori_Drb& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Ori_Lin> (const Ori_Lin& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Ori_Dfp> (const Ori_Dfp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Inf_Cir> (const Inf_Cir& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Inf_Afp> (const Inf_Afp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Inf_Dal> (const Inf_Dal& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Mnk_Par> (const Mnk_Par& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Mnk_Sph> (const Mnk_Sph& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Mnk_Pln> (const Mnk_Pln& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Mnk_Daf> (const Mnk_Daf& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Hyp_Cir> (const Hyp_Cir& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Hyp_Lin> (const Hyp_Lin& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Cir> (const Pnt_Cir& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Lin> (const Pnt_Lin& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Vec> (const Pnt_Vec& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Afp> (const Pnt_Afp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Dal> (const Pnt_Dal& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Par_Biv> (const Par_Biv& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Sta_Biv> (const Sta_Biv& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Drv_Dap> (const Drv_Dap& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Tnv_Flp> (const Tnv_Flp& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Pln_Pln> (const Pln_Pln& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Pln_Flp> (const Pln_Flp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Vec_Aff> (const Vec_Aff& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Vec_Afp> (const Vec_Afp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Rot (a[0],0,0,0);
}  
		 
		

		
inline Mot involute (const Mot& a) { 
	return Mot (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}
			
		 
		

		
inline Mot reverse (const Mot& a) { 
	return Mot (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],a[7]);
}
			
		 
		

		
inline Mot conjugate (const Mot& a) { 
	return Mot (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],a[7]);
}
			
		 
template<> inline const Mot cast<Mot,Rot> (const Rot& a) {
		return Mot (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Dil> (const Dil& a) {
		return Mot (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Trv> (const Trv& a) {
		return Mot (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Mtd> (const Mtd& a) {
		return Mot (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[11]);
}  
		 
template<> inline const Mot cast<Mot,Trs> (const Trs& a) {
		return Mot (a[0],0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Mot cast<Mot,Mtt> (const Mtt& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[15]);
}  
		 
template<> inline const Mot cast<Mot,Rtt> (const Rtt& a) {
		return Mot (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Rtd> (const Rtd& a) {
		return Mot (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Tvd> (const Tvd& a) {
		return Mot (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Tsd> (const Tsd& a) {
		return Mot (a[0],0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Mot cast<Mot,Trt> (const Trt& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mot cast<Mot,Rvd> (const Rvd& a) {
		return Mot (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Tst> (const Tst& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mot cast<Mot,Tvt> (const Tvt& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[14]);
}  
		 
template<> inline const Mot cast<Mot,Bst> (const Bst& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mot cast<Mot,Sca> (const Sca& a) {
		return Mot (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Par> (const Par& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],0);
}  
		 
template<> inline const Mot cast<Mot,Sph> (const Sph& a) {
		return Mot (0,0,0,0,0,0,0,a[4]);
}  
		 
template<> inline const Mot cast<Mot,Sta> (const Sta& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],0);
}  
		 
template<> inline const Mot cast<Mot,Drv> (const Drv& a) {
		return Mot (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Mot cast<Mot,Drt> (const Drt& a) {
		return Mot (0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Mot cast<Mot,Pln> (const Pln& a) {
		return Mot (0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Mot cast<Mot,Flp> (const Flp& a) {
		return Mot (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Mot cast<Mot,Dll> (const Dll& a) {
		return Mot (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Mot cast<Mot,Biv> (const Biv& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Afl> (const Afl& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Ori_Cir> (const Ori_Cir& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Ori_Drb> (const Ori_Drb& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Ori_Lin> (const Ori_Lin& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Ori_Dfp> (const Ori_Dfp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Inf_Cir> (const Inf_Cir& a) {
		return Mot (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Mot cast<Mot,Inf_Afp> (const Inf_Afp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,a[6]);
}  
		 
template<> inline const Mot cast<Mot,Inf_Dal> (const Inf_Dal& a) {
		return Mot (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Par> (const Mnk_Par& a) {
		return Mot (a[0],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Sph> (const Mnk_Sph& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,a[4]);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Sta> (const Mnk_Sta& a) {
		return Mot (0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Pln> (const Mnk_Pln& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Dll> (const Mnk_Dll& a) {
		return Mot (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Daf> (const Mnk_Daf& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Hyp_Pss> (const Hyp_Pss& a) {
		return Mot (0,0,0,0,0,0,0,a[1]);
}  
		 
template<> inline const Mot cast<Mot,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Mot (a[0],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Mot cast<Mot,Hyp_Cir> (const Hyp_Cir& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],a[13]);
}  
		 
template<> inline const Mot cast<Mot,Hyp_Lin> (const Hyp_Lin& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],0);
}  
		 
template<> inline const Mot cast<Mot,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,a[7]);
}  
		 
template<> inline const Mot cast<Mot,Hyp_Vec> (const Hyp_Vec& a) {
		return Mot (0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Cir> (const Pnt_Cir& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],a[14]);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Lin> (const Pnt_Lin& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],a[13]);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Mot (0,a[0],a[1],a[2],a[3],a[4],a[5],a[10]);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Vec> (const Pnt_Vec& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Afp> (const Pnt_Afp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,a[10]);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Dal> (const Pnt_Dal& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],0);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Mot (0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mot cast<Mot,Par_Biv> (const Par_Biv& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[14]);
}  
		 
template<> inline const Mot cast<Mot,Sta_Biv> (const Sta_Biv& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[11]);
}  
		 
template<> inline const Mot cast<Mot,Drv_Pln> (const Drv_Pln& a) {
		return Mot (0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Mot cast<Mot,Drv_Dap> (const Drv_Dap& a) {
		return Mot (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mot cast<Mot,Tnv_Flp> (const Tnv_Flp& a) {
		return Mot (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Lin_Dfp> (const Lin_Dfp& a) {
		return Mot (0,0,0,0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Mot cast<Mot,Lin_Dlp> (const Lin_Dlp& a) {
		return Mot (0,0,0,0,a[0],a[1],a[2],a[7]);
}  
		 
template<> inline const Mot cast<Mot,Pln_Pln> (const Pln_Pln& a) {
		return Mot (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mot cast<Mot,Pln_Flp> (const Pln_Flp& a) {
		return Mot (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Mot cast<Mot,Pln_Biv> (const Pln_Biv& a) {
		return Mot (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Mot cast<Mot,Vec_Aff> (const Vec_Aff& a) {
		return Mot (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Vec_Afp> (const Vec_Afp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[13]);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Mot (0,0,0,0,a[3],a[4],a[5],a[11]);
}  
		 
template<> inline const Mot cast<Mot,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Mot (0,0,0,0,a[3],a[4],a[5],a[7]);
}  
		 
template<> inline const Mot cast<Mot,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Mot (a[0],0,0,0,a[4],a[5],a[6],0);
}  
		 
		

		
inline Dil involute (const Dil& a) { 
	return Dil (a[0],a[1]);
}
			
		 
		

		
inline Dil reverse (const Dil& a) { 
	return Dil (a[0],-a[1]);
}
			
		 
		

		
inline Dil conjugate (const Dil& a) { 
	return Dil (a[0],-a[1]);
}
			
		 
template<> inline const Dil cast<Dil,Rot> (const Rot& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Mot> (const Mot& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Trv> (const Trv& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Mtd> (const Mtd& a) {
		return Dil (a[0],a[7]);
}  
		 
template<> inline const Dil cast<Dil,Trs> (const Trs& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Mtt> (const Mtt& a) {
		return Dil (a[0],a[10]);
}  
		 
template<> inline const Dil cast<Dil,Rtt> (const Rtt& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Rtd> (const Rtd& a) {
		return Dil (a[0],a[4]);
}  
		 
template<> inline const Dil cast<Dil,Tvd> (const Tvd& a) {
		return Dil (a[0],a[4]);
}  
		 
template<> inline const Dil cast<Dil,Tsd> (const Tsd& a) {
		return Dil (a[0],a[4]);
}  
		 
template<> inline const Dil cast<Dil,Trt> (const Trt& a) {
		return Dil (a[0],a[10]);
}  
		 
template<> inline const Dil cast<Dil,Rvd> (const Rvd& a) {
		return Dil (a[0],a[7]);
}  
		 
template<> inline const Dil cast<Dil,Tst> (const Tst& a) {
		return Dil (a[0],a[10]);
}  
		 
template<> inline const Dil cast<Dil,Tvt> (const Tvt& a) {
		return Dil (a[0],a[10]);
}  
		 
template<> inline const Dil cast<Dil,Bst> (const Bst& a) {
		return Dil (a[0],a[10]);
}  
		 
template<> inline const Dil cast<Dil,Sca> (const Sca& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Mnk> (const Mnk& a) {
		return Dil (0,a[0]);
}  
		 
template<> inline const Dil cast<Dil,Par> (const Par& a) {
		return Dil (0,a[9]);
}  
		 
template<> inline const Dil cast<Dil,Flp> (const Flp& a) {
		return Dil (0,a[3]);
}  
		 
template<> inline const Dil cast<Dil,Dap> (const Dap& a) {
		return Dil (0,a[3]);
}  
		 
template<> inline const Dil cast<Dil,Mnk_Par> (const Mnk_Par& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Dil (a[0],a[7]);
}  
		 
template<> inline const Dil cast<Dil,Pnt_Cir> (const Pnt_Cir& a) {
		return Dil (0,a[9]);
}  
		 
template<> inline const Dil cast<Dil,Pnt_Lin> (const Pnt_Lin& a) {
		return Dil (0,a[9]);
}  
		 
template<> inline const Dil cast<Dil,Pnt_Vec> (const Pnt_Vec& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Pnt_Dal> (const Pnt_Dal& a) {
		return Dil (0,a[9]);
}  
		 
template<> inline const Dil cast<Dil,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Dil (0,a[6]);
}  
		 
template<> inline const Dil cast<Dil,Par_Biv> (const Par_Biv& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Sta_Biv> (const Sta_Biv& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Drv_Dap> (const Drv_Dap& a) {
		return Dil (a[0],a[7]);
}  
		 
template<> inline const Dil cast<Dil,Tnv_Flp> (const Tnv_Flp& a) {
		return Dil (a[0],a[7]);
}  
		 
template<> inline const Dil cast<Dil,Lin_Dlp> (const Lin_Dlp& a) {
		return Dil (0,a[3]);
}  
		 
template<> inline const Dil cast<Dil,Pln_Pln> (const Pln_Pln& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Pln_Biv> (const Pln_Biv& a) {
		return Dil (0,a[3]);
}  
		 
template<> inline const Dil cast<Dil,Vec_Aff> (const Vec_Aff& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Vec_Dal> (const Vec_Dal& a) {
		return Dil (0,a[3]);
}  
		 
template<> inline const Dil cast<Dil,Vec_Mnv> (const Vec_Mnv& a) {
		return Dil (0,a[0]);
}  
		 
template<> inline const Dil cast<Dil,Biv_Daf> (const Biv_Daf& a) {
		return Dil (0,a[3]);
}  
		 
template<> inline const Dil cast<Dil,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Dil (0,a[6]);
}  
		 
template<> inline const Dil cast<Dil,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Dil (a[0],a[7]);
}  
		 
		

		
inline Trv involute (const Trv& a) { 
	return Trv (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Trv reverse (const Trv& a) { 
	return Trv (a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Trv conjugate (const Trv& a) { 
	return Trv (a[0],-a[1],-a[2],-a[3]);
}
			
		 
template<> inline const Trv cast<Trv,Rot> (const Rot& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Mot> (const Mot& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Dil> (const Dil& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Mtd> (const Mtd& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Trs> (const Trs& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Mtt> (const Mtt& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Rtt> (const Rtt& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Rtd> (const Rtd& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Tvd> (const Tvd& a) {
		return Trv (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Trv cast<Trv,Tsd> (const Tsd& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Trt> (const Trt& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Rvd> (const Rvd& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Tst> (const Tst& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Tvt> (const Tvt& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Bst> (const Bst& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Sca> (const Sca& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Par> (const Par& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Sta> (const Sta& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Tnv> (const Tnv& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Afl> (const Afl& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Dap> (const Dap& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Ori_Cir> (const Ori_Cir& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Ori_Lin> (const Ori_Lin& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Par> (const Mnk_Par& a) {
		return Trv (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Sta> (const Mnk_Sta& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Afl> (const Mnk_Afl& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Trv (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Trv cast<Trv,Hyp_Cir> (const Hyp_Cir& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Hyp_Lin> (const Hyp_Lin& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Hyp_Vec> (const Hyp_Vec& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Pnt_Cir> (const Pnt_Cir& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Pnt_Lin> (const Pnt_Lin& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Pnt_Vec> (const Pnt_Vec& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Pnt_Afp> (const Pnt_Afp& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Pnt_Dal> (const Pnt_Dal& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Par_Biv> (const Par_Biv& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Sta_Biv> (const Sta_Biv& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Drv_Dap> (const Drv_Dap& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Tnv_Flp> (const Tnv_Flp& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Tnv_Biv> (const Tnv_Biv& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Pln_Pln> (const Pln_Pln& a) {
		return Trv (a[0],0,0,0);
}  
		 
template<> inline const Trv cast<Trv,Vec_Aff> (const Vec_Aff& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Vec_Afp> (const Vec_Afp& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Vec_Dal> (const Vec_Dal& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Biv_Dap> (const Biv_Dap& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Biv_Daf> (const Biv_Daf& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Trv (a[0],a[1],a[2],a[3]);
}  
		 
		

		
inline Mtd involute (const Mtd& a) { 
	return Mtd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11]);
}
			
		 
		

		
inline Mtd reverse (const Mtd& a) { 
	return Mtd (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],a[8],a[9],a[10],a[11]);
}
			
		 
		

		
inline Mtd conjugate (const Mtd& a) { 
	return Mtd (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],a[8],a[9],a[10],a[11]);
}
			
		 
template<> inline const Mtd cast<Mtd,Rot> (const Rot& a) {
		return Mtd (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Mot> (const Mot& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,a[7]);
}  
		 
template<> inline const Mtd cast<Mtd,Dil> (const Dil& a) {
		return Mtd (a[0],0,0,0,0,0,0,a[1],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Trv> (const Trv& a) {
		return Mtd (a[0],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Trs> (const Trs& a) {
		return Mtd (a[0],0,0,0,a[1],a[2],a[3],0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Mtt> (const Mtt& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[15]);
}  
		 
template<> inline const Mtd cast<Mtd,Rtt> (const Rtt& a) {
		return Mtd (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Rtd> (const Rtd& a) {
		return Mtd (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],0);
}  
		 
template<> inline const Mtd cast<Mtd,Tvd> (const Tvd& a) {
		return Mtd (a[0],0,0,0,0,0,0,a[4],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Tsd> (const Tsd& a) {
		return Mtd (a[0],0,0,0,a[1],a[2],a[3],a[4],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Trt> (const Trt& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Mtd cast<Mtd,Rvd> (const Rvd& a) {
		return Mtd (a[0],a[1],a[2],a[3],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Mtd cast<Mtd,Tst> (const Tst& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Mtd cast<Mtd,Tvt> (const Tvt& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Mtd cast<Mtd,Bst> (const Bst& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Sca> (const Sca& a) {
		return Mtd (a[0],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk> (const Mnk& a) {
		return Mtd (0,0,0,0,0,0,0,a[0],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Par> (const Par& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Sph> (const Sph& a) {
		return Mtd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Mtd cast<Mtd,Sta> (const Sta& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Drv> (const Drv& a) {
		return Mtd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Drt> (const Drt& a) {
		return Mtd (0,0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Mtd cast<Mtd,Pln> (const Pln& a) {
		return Mtd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Mtd cast<Mtd,Flp> (const Flp& a) {
		return Mtd (0,0,0,0,a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Dll> (const Dll& a) {
		return Mtd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Biv> (const Biv& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Afl> (const Afl& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Dap> (const Dap& a) {
		return Mtd (0,0,0,0,0,0,0,a[3],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Daf> (const Daf& a) {
		return Mtd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Mtd cast<Mtd,Ori_Cir> (const Ori_Cir& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Mtd cast<Mtd,Ori_Drb> (const Ori_Drb& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mtd cast<Mtd,Ori_Lin> (const Ori_Lin& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Mtd cast<Mtd,Ori_Dfp> (const Ori_Dfp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mtd cast<Mtd,Inf_Cir> (const Inf_Cir& a) {
		return Mtd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Mtd cast<Mtd,Inf_Afp> (const Inf_Afp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Mtd cast<Mtd,Inf_Dal> (const Inf_Dal& a) {
		return Mtd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Par> (const Mnk_Par& a) {
		return Mtd (a[0],0,0,0,a[4],a[5],a[6],0,a[7],a[8],a[9],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Sph> (const Mnk_Sph& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[4]);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Sta> (const Mnk_Sta& a) {
		return Mtd (0,0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Pln> (const Mnk_Pln& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Dll> (const Mnk_Dll& a) {
		return Mtd (0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Biv> (const Mnk_Biv& a) {
		return Mtd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Afl> (const Mnk_Afl& a) {
		return Mtd (0,0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Daf> (const Mnk_Daf& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Hyp_Pss> (const Hyp_Pss& a) {
		return Mtd (0,0,0,0,0,0,0,0,0,0,0,a[1]);
}  
		 
template<> inline const Mtd cast<Mtd,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Mtd (a[0],0,0,0,a[4],a[5],a[6],a[7],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Hyp_Cir> (const Hyp_Cir& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],0,a[9],a[10],a[11],a[13]);
}  
		 
template<> inline const Mtd cast<Mtd,Hyp_Lin> (const Hyp_Lin& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],0,a[9],a[10],a[11],0);
}  
		 
template<> inline const Mtd cast<Mtd,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[7]);
}  
		 
template<> inline const Mtd cast<Mtd,Hyp_Vec> (const Hyp_Vec& a) {
		return Mtd (0,0,0,0,a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Cir> (const Pnt_Cir& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Lin> (const Pnt_Lin& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Mtd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Vec> (const Pnt_Vec& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Afp> (const Pnt_Afp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Dal> (const Pnt_Dal& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Mtd (0,0,0,0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mtd cast<Mtd,Par_Biv> (const Par_Biv& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Mtd cast<Mtd,Sta_Biv> (const Sta_Biv& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,0,0,0,a[11]);
}  
		 
template<> inline const Mtd cast<Mtd,Drv_Pln> (const Drv_Pln& a) {
		return Mtd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3]);
}  
		 
template<> inline const Mtd cast<Mtd,Drv_Dap> (const Drv_Dap& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Mtd cast<Mtd,Tnv_Flp> (const Tnv_Flp& a) {
		return Mtd (a[0],a[1],a[2],a[3],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Mtd cast<Mtd,Lin_Dfp> (const Lin_Dfp& a) {
		return Mtd (0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Mtd cast<Mtd,Lin_Dlp> (const Lin_Dlp& a) {
		return Mtd (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Mtd cast<Mtd,Pln_Pln> (const Pln_Pln& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Pln_Flp> (const Pln_Flp& a) {
		return Mtd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6]);
}  
		 
template<> inline const Mtd cast<Mtd,Pln_Biv> (const Pln_Biv& a) {
		return Mtd (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mtd cast<Mtd,Vec_Aff> (const Vec_Aff& a) {
		return Mtd (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Vec_Afp> (const Vec_Afp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Vec_Dal> (const Vec_Dal& a) {
		return Mtd (0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mtd cast<Mtd,Vec_Mnv> (const Vec_Mnv& a) {
		return Mtd (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Mtd cast<Mtd,Biv_Dap> (const Biv_Dap& a) {
		return Mtd (0,0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mtd cast<Mtd,Biv_Daf> (const Biv_Daf& a) {
		return Mtd (0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,a[10],a[11],a[12],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Mtd (0,0,0,0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[11]);
}  
		 
template<> inline const Mtd cast<Mtd,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Mtd (0,0,0,0,a[3],a[4],a[5],0,0,0,0,a[7]);
}  
		 
template<> inline const Mtd cast<Mtd,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Mtd (a[0],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
		

		
inline Trs involute (const Trs& a) { 
	return Trs (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Trs reverse (const Trs& a) { 
	return Trs (a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Trs conjugate (const Trs& a) { 
	return Trs (a[0],-a[1],-a[2],-a[3]);
}
			
		 
template<> inline const Trs cast<Trs,Rot> (const Rot& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Mot> (const Mot& a) {
		return Trs (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trs cast<Trs,Dil> (const Dil& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Trv> (const Trv& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Mtd> (const Mtd& a) {
		return Trs (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trs cast<Trs,Mtt> (const Mtt& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Rtt> (const Rtt& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Rtd> (const Rtd& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Tvd> (const Tvd& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Tsd> (const Tsd& a) {
		return Trs (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Trs cast<Trs,Trt> (const Trt& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Rvd> (const Rvd& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Tst> (const Tst& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Tvt> (const Tvt& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Bst> (const Bst& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Sca> (const Sca& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Par> (const Par& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Sta> (const Sta& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Drv> (const Drv& a) {
		return Trs (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trs cast<Trs,Flp> (const Flp& a) {
		return Trs (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trs cast<Trs,Dll> (const Dll& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Inf_Cir> (const Inf_Cir& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Inf_Dal> (const Inf_Dal& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Par> (const Mnk_Par& a) {
		return Trs (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Sta> (const Mnk_Sta& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Dll> (const Mnk_Dll& a) {
		return Trs (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trs cast<Trs,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Trs (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trs cast<Trs,Hyp_Cir> (const Hyp_Cir& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Hyp_Lin> (const Hyp_Lin& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Hyp_Vec> (const Hyp_Vec& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Pnt_Cir> (const Pnt_Cir& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Pnt_Lin> (const Pnt_Lin& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Pnt_Vec> (const Pnt_Vec& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Pnt_Dal> (const Pnt_Dal& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Par_Biv> (const Par_Biv& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Sta_Biv> (const Sta_Biv& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Drv_Pln> (const Drv_Pln& a) {
		return Trs (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trs cast<Trs,Drv_Dap> (const Drv_Dap& a) {
		return Trs (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trs cast<Trs,Tnv_Flp> (const Tnv_Flp& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Lin_Dfp> (const Lin_Dfp& a) {
		return Trs (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trs cast<Trs,Lin_Dlp> (const Lin_Dlp& a) {
		return Trs (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trs cast<Trs,Pln_Pln> (const Pln_Pln& a) {
		return Trs (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trs cast<Trs,Pln_Flp> (const Pln_Flp& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Pln_Biv> (const Pln_Biv& a) {
		return Trs (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trs cast<Trs,Vec_Aff> (const Vec_Aff& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Trs (a[0],a[4],a[5],a[6]);
}  
		 
		

		
inline Rtc involute (const Rtc& a) { 
	return Rtc (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],-a[11],-a[12],-a[13],-a[14],-a[15]);
}
			
		 
		

		
inline Rtc reverse (const Rtc& a) { 
	return Rtc (a[0],a[1],a[2],a[3],a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],-a[11],-a[12],-a[13],-a[14],a[15]);
}
			
		 
		

		
inline Rtc conjugate (const Rtc& a) { 
	return Rtc (-a[0],-a[1],-a[2],-a[3],-a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14],-a[15]);
}
			
		 
template<> inline const Rtc cast<Rtc,Ori> (const Ori& a) {
		return Rtc (0,0,0,a[0],0,0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Inf> (const Inf& a) {
		return Rtc (0,0,0,0,a[0],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Hyp> (const Hyp& a) {
		return Rtc (0,0,0,a[0],a[1],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Pss> (const Pss& a) {
		return Rtc (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Rtc cast<Rtc,Pnt> (const Pnt& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Cir> (const Cir& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Rtc cast<Rtc,Drb> (const Drb& a) {
		return Rtc (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Tnb> (const Tnb& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Lin> (const Lin& a) {
		return Rtc (0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Dfp> (const Dfp& a) {
		return Rtc (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0);
}  
		 
template<> inline const Rtc cast<Rtc,Dlp> (const Dlp& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Vec> (const Vec& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Tri> (const Tri& a) {
		return Rtc (0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[0],0);
}  
		 
template<> inline const Rtc cast<Rtc,Aff> (const Aff& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Afp> (const Afp& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,a[3],0);
}  
		 
template<> inline const Rtc cast<Rtc,Dal> (const Dal& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnv> (const Mnv& a) {
		return Rtc (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Ori_Par> (const Ori_Par& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Ori_Sph> (const Ori_Sph& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,a[3],a[4]);
}  
		 
template<> inline const Rtc cast<Rtc,Ori_Sta> (const Ori_Sta& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],0,0,0,a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Ori_Drv> (const Ori_Drv& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,0,0,0,a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Ori_Drt> (const Ori_Drt& a) {
		return Rtc (0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[0],a[1]);
}  
		 
template<> inline const Rtc cast<Rtc,Ori_Flp> (const Ori_Flp& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Inf_Par> (const Inf_Par& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Inf_Sph> (const Inf_Sph& a) {
		return Rtc (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4]);
}  
		 
template<> inline const Rtc cast<Rtc,Inf_Sta> (const Inf_Sta& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,a[3],a[4],a[5],a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Inf_Dap> (const Inf_Dap& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],0,0,0,0,0,0,a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Rtc (0,0,0,a[0],a[1],0,0,0,0,0,0,a[2],a[3],a[4],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Cir> (const Mnk_Cir& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0,a[9]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Lin> (const Mnk_Lin& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Dfp> (const Mnk_Dfp& a) {
		return Rtc (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Rtc (0,0,0,0,a[0],0,0,0,0,0,0,a[1],a[2],a[3],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Aff> (const Mnk_Aff& a) {
		return Rtc (0,0,0,a[0],0,0,0,0,0,0,0,a[1],a[2],a[3],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Afp> (const Mnk_Afp& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Dal> (const Mnk_Dal& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Hyp_Par> (const Hyp_Par& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Hyp_Sph> (const Hyp_Sph& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,a[6],a[7]);
}  
		 
template<> inline const Rtc cast<Rtc,Hyp_Sta> (const Hyp_Sta& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Hyp_Flp> (const Hyp_Flp& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],0,0,0,0,0,0,a[5],a[6],a[7],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Hyp_Biv> (const Hyp_Biv& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Pss_Sta> (const Pss_Sta& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Pnt_Par> (const Pnt_Par& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14],0);
}  
		 
template<> inline const Rtc cast<Rtc,Pnt_Sph> (const Pnt_Sph& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtc cast<Rtc,Pnt_Flp> (const Pnt_Flp& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],0,0,0,a[5],a[6],a[7],a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Pnt_Dll> (const Pnt_Dll& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Rtc cast<Rtc,Pnt_Biv> (const Pnt_Biv& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,a[9],0);
}  
		 
template<> inline const Rtc cast<Rtc,Pnt_Afl> (const Pnt_Afl& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Rtc cast<Rtc,Pnt_Dap> (const Pnt_Dap& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],0,0,0,a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Par_Drb> (const Par_Drb& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Rtc cast<Rtc,Par_Tnb> (const Par_Tnb& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Rtc cast<Rtc,Par_Dfp> (const Par_Dfp& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Rtc cast<Rtc,Par_Afp> (const Par_Afp& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Rtc cast<Rtc,Par_Mnv> (const Par_Mnv& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0,a[14]);
}  
		 
template<> inline const Rtc cast<Rtc,Sph_Vec> (const Sph_Vec& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9]);
}  
		 
template<> inline const Rtc cast<Rtc,Sta_Vec> (const Sta_Vec& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,a[11],0);
}  
		 
template<> inline const Rtc cast<Rtc,Sta_Tri> (const Sta_Tri& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Sta_Mnv> (const Sta_Mnv& a) {
		return Rtc (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,a[11]);
}  
		 
template<> inline const Rtc cast<Rtc,Drv_Tnb> (const Drv_Tnb& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Rtc cast<Rtc,Drv_Lin> (const Drv_Lin& a) {
		return Rtc (0,0,0,0,a[0],0,0,0,a[1],a[2],a[3],0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Drv_Afp> (const Drv_Afp& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtc cast<Rtc,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],0,0,0,a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtc cast<Rtc,Tnv_Vec> (const Tnv_Vec& a) {
		return Rtc (0,0,0,a[0],0,a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Lin_Pln> (const Lin_Pln& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],0,0,0,a[4],a[5],a[6],0,0,0,a[7],0);
}  
		 
template<> inline const Rtc cast<Rtc,Lin_Flp> (const Lin_Flp& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],0,0,0,a[4],a[5],a[6],0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Lin_Dll> (const Lin_Dll& a) {
		return Rtc (0,0,0,0,a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0,a[7]);
}  
		 
template<> inline const Rtc cast<Rtc,Pln_Dfp> (const Pln_Dfp& a) {
		return Rtc (0,0,0,0,a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Pln_Dlp> (const Pln_Dlp& a) {
		return Rtc (0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Rtc cast<Rtc,Pln_Mnv> (const Pln_Mnv& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,a[3],a[4],a[5],0,0,0,a[6],0);
}  
		 
template<> inline const Rtc cast<Rtc,Flp_Afp> (const Flp_Afp& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rtc cast<Rtc,Vec_Biv> (const Vec_Biv& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0,a[3],0);
}  
		 
template<> inline const Rtc cast<Rtc,Vec_Afl> (const Vec_Afl& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],0,0,0,0,0,0,a[7],0);
}  
		 
template<> inline const Rtc cast<Rtc,Vec_Dap> (const Vec_Dap& a) {
		return Rtc (0,0,0,a[0],0,a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Vec_Daf> (const Vec_Daf& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Rtc cast<Rtc,Biv_Aff> (const Biv_Aff& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],0,0,0,0,0,0,a[6],0);
}  
		 
template<> inline const Rtc cast<Rtc,Biv_Afp> (const Biv_Afp& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Biv_Dal> (const Biv_Dal& a) {
		return Rtc (0,0,0,a[0],0,a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,a[7]);
}  
		 
template<> inline const Rtc cast<Rtc,Biv_Mnv> (const Biv_Mnv& a) {
		return Rtc (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,a[9],a[10]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Rtc cast<Rtc,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Rtc (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],0,0,0,0,0);
}  
		 
		

		
inline Mtt involute (const Mtt& a) { 
	return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14],a[15]);
}
			
		 
		

		
inline Mtt reverse (const Mtt& a) { 
	return Mtt (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],a[11],a[12],a[13],a[14],a[15]);
}
			
		 
		

		
inline Mtt conjugate (const Mtt& a) { 
	return Mtt (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],a[11],a[12],a[13],a[14],a[15]);
}
			
		 
template<> inline const Mtt cast<Mtt,Rot> (const Rot& a) {
		return Mtt (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mot> (const Mot& a) {
		return Mtt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0,0,0,0,a[7]);
}  
		 
template<> inline const Mtt cast<Mtt,Dil> (const Dil& a) {
		return Mtt (a[0],0,0,0,0,0,0,0,0,0,a[1],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Trv> (const Trv& a) {
		return Mtt (a[0],0,0,0,a[1],a[2],a[3],0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mtd> (const Mtd& a) {
		return Mtt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,a[11]);
}  
		 
template<> inline const Mtt cast<Mtt,Trs> (const Trs& a) {
		return Mtt (a[0],0,0,0,0,0,0,a[1],a[2],a[3],0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Rtt> (const Rtt& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0,a[7],0);
}  
		 
template<> inline const Mtt cast<Mtt,Rtd> (const Rtd& a) {
		return Mtt (a[0],a[1],a[2],a[3],0,0,0,0,0,0,a[4],a[5],a[6],a[7],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Tvd> (const Tvd& a) {
		return Mtt (a[0],0,0,0,a[1],a[2],a[3],0,0,0,a[4],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Tsd> (const Tsd& a) {
		return Mtt (a[0],0,0,0,0,0,0,a[1],a[2],a[3],a[4],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Trt> (const Trt& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Rvd> (const Rvd& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],a[11],0);
}  
		 
template<> inline const Mtt cast<Mtt,Tst> (const Tst& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14],0);
}  
		 
template<> inline const Mtt cast<Mtt,Tvt> (const Tvt& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0,a[14]);
}  
		 
template<> inline const Mtt cast<Mtt,Bst> (const Bst& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Sca> (const Sca& a) {
		return Mtt (a[0],0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk> (const Mnk& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,a[0],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Par> (const Par& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Sph> (const Sph& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Mtt cast<Mtt,Sta> (const Sta& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Drv> (const Drv& a) {
		return Mtt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Drt> (const Drt& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Mtt cast<Mtt,Tnv> (const Tnv& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Tnt> (const Tnt& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[0],0);
}  
		 
template<> inline const Mtt cast<Mtt,Pln> (const Pln& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Mtt cast<Mtt,Flp> (const Flp& a) {
		return Mtt (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Dll> (const Dll& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Biv> (const Biv& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Afl> (const Afl& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Dap> (const Dap& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Daf> (const Daf& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Mtt cast<Mtt,Ori_Cir> (const Ori_Cir& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mtt cast<Mtt,Ori_Drb> (const Ori_Drb& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Ori_Lin> (const Ori_Lin& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Ori_Dfp> (const Ori_Dfp& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mtt cast<Mtt,Inf_Cir> (const Inf_Cir& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0,a[9]);
}  
		 
template<> inline const Mtt cast<Mtt,Inf_Afp> (const Inf_Afp& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Mtt cast<Mtt,Inf_Dal> (const Inf_Dal& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Par> (const Mnk_Par& a) {
		return Mtt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0,a[7],a[8],a[9],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Sph> (const Mnk_Sph& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,a[3],a[4]);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Sta> (const Mnk_Sta& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Pln> (const Mnk_Pln& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Dll> (const Mnk_Dll& a) {
		return Mtt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Biv> (const Mnk_Biv& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Afl> (const Mnk_Afl& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Daf> (const Mnk_Daf& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,a[3],0);
}  
		 
template<> inline const Mtt cast<Mtt,Hyp_Pss> (const Hyp_Pss& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[0],a[1]);
}  
		 
template<> inline const Mtt cast<Mtt,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Mtt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Hyp_Cir> (const Hyp_Cir& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Mtt cast<Mtt,Hyp_Lin> (const Hyp_Lin& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Mtt cast<Mtt,Hyp_Vec> (const Hyp_Vec& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Cir> (const Pnt_Cir& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Lin> (const Pnt_Lin& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Vec> (const Pnt_Vec& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Afp> (const Pnt_Afp& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Dal> (const Pnt_Dal& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Par_Biv> (const Par_Biv& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Mtt cast<Mtt,Sta_Biv> (const Sta_Biv& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,a[10],a[11]);
}  
		 
template<> inline const Mtt cast<Mtt,Drv_Pln> (const Drv_Pln& a) {
		return Mtt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,a[3]);
}  
		 
template<> inline const Mtt cast<Mtt,Drv_Dap> (const Drv_Dap& a) {
		return Mtt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Tnv_Flp> (const Tnv_Flp& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Tnv_Biv> (const Tnv_Biv& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],0);
}  
		 
template<> inline const Mtt cast<Mtt,Lin_Dfp> (const Lin_Dfp& a) {
		return Mtt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Mtt cast<Mtt,Lin_Dlp> (const Lin_Dlp& a) {
		return Mtt (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,a[7]);
}  
		 
template<> inline const Mtt cast<Mtt,Pln_Pln> (const Pln_Pln& a) {
		return Mtt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Pln_Flp> (const Pln_Flp& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0,0,0,0,a[6]);
}  
		 
template<> inline const Mtt cast<Mtt,Pln_Biv> (const Pln_Biv& a) {
		return Mtt (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Vec_Aff> (const Vec_Aff& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Vec_Afp> (const Vec_Afp& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0,a[6],0);
}  
		 
template<> inline const Mtt cast<Mtt,Vec_Dal> (const Vec_Dal& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],a[7],0);
}  
		 
template<> inline const Mtt cast<Mtt,Vec_Mnv> (const Vec_Mnv& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Biv_Dap> (const Biv_Dap& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mtt cast<Mtt,Biv_Daf> (const Biv_Daf& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Mtt cast<Mtt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7]);
}  
		 
template<> inline const Mtt cast<Mtt,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Mtt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0);
}  
		 
		

		
inline Rtt involute (const Rtt& a) { 
	return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}
			
		 
		

		
inline Rtt reverse (const Rtt& a) { 
	return Rtt (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],a[7]);
}
			
		 
		

		
inline Rtt conjugate (const Rtt& a) { 
	return Rtt (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],a[7]);
}
			
		 
template<> inline const Rtt cast<Rtt,Rot> (const Rot& a) {
		return Rtt (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Mot> (const Mot& a) {
		return Rtt (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Dil> (const Dil& a) {
		return Rtt (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Trv> (const Trv& a) {
		return Rtt (a[0],0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Rtt cast<Rtt,Mtd> (const Mtd& a) {
		return Rtt (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Trs> (const Trs& a) {
		return Rtt (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Mtt> (const Mtt& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[14]);
}  
		 
template<> inline const Rtt cast<Rtt,Rtd> (const Rtd& a) {
		return Rtt (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Tvd> (const Tvd& a) {
		return Rtt (a[0],0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Rtt cast<Rtt,Tsd> (const Tsd& a) {
		return Rtt (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Trt> (const Trt& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Rvd> (const Rvd& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[11]);
}  
		 
template<> inline const Rtt cast<Rtt,Tst> (const Tst& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[14]);
}  
		 
template<> inline const Rtt cast<Rtt,Tvt> (const Tvt& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Bst> (const Bst& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Sca> (const Sca& a) {
		return Rtt (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Par> (const Par& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Rtt cast<Rtt,Sph> (const Sph& a) {
		return Rtt (0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Rtt cast<Rtt,Sta> (const Sta& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Rtt cast<Rtt,Tnv> (const Tnv& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Tnt> (const Tnt& a) {
		return Rtt (0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Rtt cast<Rtt,Dll> (const Dll& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Biv> (const Biv& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Afl> (const Afl& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Rtt cast<Rtt,Dap> (const Dap& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Daf> (const Daf& a) {
		return Rtt (0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Rtt cast<Rtt,Ori_Cir> (const Ori_Cir& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Rtt cast<Rtt,Ori_Drb> (const Ori_Drb& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Ori_Lin> (const Ori_Lin& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Rtt cast<Rtt,Ori_Dfp> (const Ori_Dfp& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,a[6]);
}  
		 
template<> inline const Rtt cast<Rtt,Inf_Cir> (const Inf_Cir& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Inf_Afp> (const Inf_Afp& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Inf_Dal> (const Inf_Dal& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Par> (const Mnk_Par& a) {
		return Rtt (a[0],0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Sph> (const Mnk_Sph& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Sta> (const Mnk_Sta& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Pln> (const Mnk_Pln& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Afl> (const Mnk_Afl& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Daf> (const Mnk_Daf& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Rtt cast<Rtt,Hyp_Pss> (const Hyp_Pss& a) {
		return Rtt (0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Rtt cast<Rtt,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Rtt (a[0],0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Rtt cast<Rtt,Hyp_Cir> (const Hyp_Cir& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[12]);
}  
		 
template<> inline const Rtt cast<Rtt,Hyp_Lin> (const Hyp_Lin& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Rtt cast<Rtt,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,a[6]);
}  
		 
template<> inline const Rtt cast<Rtt,Hyp_Vec> (const Hyp_Vec& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Cir> (const Pnt_Cir& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[13]);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Lin> (const Pnt_Lin& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,a[9]);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Vec> (const Pnt_Vec& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Afp> (const Pnt_Afp& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Dal> (const Pnt_Dal& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[13]);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Par_Biv> (const Par_Biv& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Rtt cast<Rtt,Sta_Biv> (const Sta_Biv& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Rtt cast<Rtt,Drv_Dap> (const Drv_Dap& a) {
		return Rtt (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Tnv_Flp> (const Tnv_Flp& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Tnv_Biv> (const Tnv_Biv& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rtt cast<Rtt,Pln_Pln> (const Pln_Pln& a) {
		return Rtt (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Pln_Flp> (const Pln_Flp& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Vec_Aff> (const Vec_Aff& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Vec_Afp> (const Vec_Afp& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rtt cast<Rtt,Vec_Dal> (const Vec_Dal& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[7]);
}  
		 
template<> inline const Rtt cast<Rtt,Biv_Dap> (const Biv_Dap& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Rtt cast<Rtt,Biv_Daf> (const Biv_Daf& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[10]);
}  
		 
template<> inline const Rtt cast<Rtt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Rtt cast<Rtt,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Rtt (a[0],0,0,0,a[1],a[2],a[3],0);
}  
		 
		

		
inline Rtd involute (const Rtd& a) { 
	return Rtd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}
			
		 
		

		
inline Rtd reverse (const Rtd& a) { 
	return Rtd (a[0],-a[1],-a[2],-a[3],-a[4],a[5],a[6],a[7]);
}
			
		 
		

		
inline Rtd conjugate (const Rtd& a) { 
	return Rtd (a[0],-a[1],-a[2],-a[3],-a[4],a[5],a[6],a[7]);
}
			
		 
template<> inline const Rtd cast<Rtd,Rot> (const Rot& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Mot> (const Mot& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Dil> (const Dil& a) {
		return Rtd (a[0],0,0,0,a[1],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Trv> (const Trv& a) {
		return Rtd (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Mtd> (const Mtd& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtd cast<Rtd,Trs> (const Trs& a) {
		return Rtd (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Mtt> (const Mtt& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rtd cast<Rtd,Rtt> (const Rtt& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Tvd> (const Tvd& a) {
		return Rtd (a[0],0,0,0,a[4],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Tsd> (const Tsd& a) {
		return Rtd (a[0],0,0,0,a[4],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Trt> (const Trt& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rtd cast<Rtd,Rvd> (const Rvd& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtd cast<Rtd,Tst> (const Tst& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rtd cast<Rtd,Tvt> (const Tvt& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rtd cast<Rtd,Bst> (const Bst& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[10],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Sca> (const Sca& a) {
		return Rtd (a[0],0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk> (const Mnk& a) {
		return Rtd (0,0,0,0,a[0],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Par> (const Par& a) {
		return Rtd (0,a[0],a[1],a[2],a[9],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Sph> (const Sph& a) {
		return Rtd (0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rtd cast<Rtd,Sta> (const Sta& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Pln> (const Pln& a) {
		return Rtd (0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rtd cast<Rtd,Flp> (const Flp& a) {
		return Rtd (0,0,0,0,a[3],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Dll> (const Dll& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Biv> (const Biv& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Afl> (const Afl& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Dap> (const Dap& a) {
		return Rtd (0,0,0,0,a[3],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Daf> (const Daf& a) {
		return Rtd (0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rtd cast<Rtd,Ori_Cir> (const Ori_Cir& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Ori_Drb> (const Ori_Drb& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Ori_Lin> (const Ori_Lin& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Ori_Dfp> (const Ori_Dfp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Inf_Cir> (const Inf_Cir& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Inf_Afp> (const Inf_Afp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Inf_Dal> (const Inf_Dal& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Par> (const Mnk_Par& a) {
		return Rtd (a[0],0,0,0,0,a[7],a[8],a[9]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Sph> (const Mnk_Sph& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Sta> (const Mnk_Sta& a) {
		return Rtd (0,0,0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Pln> (const Mnk_Pln& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Dll> (const Mnk_Dll& a) {
		return Rtd (0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Biv> (const Mnk_Biv& a) {
		return Rtd (0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Afl> (const Mnk_Afl& a) {
		return Rtd (0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Daf> (const Mnk_Daf& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Rtd (a[0],0,0,0,a[7],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Hyp_Cir> (const Hyp_Cir& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[9],a[10],a[11]);
}  
		 
template<> inline const Rtd cast<Rtd,Hyp_Lin> (const Hyp_Lin& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[9],a[10],a[11]);
}  
		 
template<> inline const Rtd cast<Rtd,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Cir> (const Pnt_Cir& a) {
		return Rtd (0,a[0],a[1],a[2],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Lin> (const Pnt_Lin& a) {
		return Rtd (0,a[0],a[1],a[2],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Vec> (const Pnt_Vec& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Afp> (const Pnt_Afp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Dal> (const Pnt_Dal& a) {
		return Rtd (0,a[0],a[1],a[2],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Rtd (0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rtd cast<Rtd,Par_Biv> (const Par_Biv& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Sta_Biv> (const Sta_Biv& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Drv_Dap> (const Drv_Dap& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtd cast<Rtd,Tnv_Flp> (const Tnv_Flp& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtd cast<Rtd,Lin_Dfp> (const Lin_Dfp& a) {
		return Rtd (0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Lin_Dlp> (const Lin_Dlp& a) {
		return Rtd (0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rtd cast<Rtd,Pln_Pln> (const Pln_Pln& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Pln_Flp> (const Pln_Flp& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Pln_Biv> (const Pln_Biv& a) {
		return Rtd (0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rtd cast<Rtd,Vec_Aff> (const Vec_Aff& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Vec_Afp> (const Vec_Afp& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Vec_Dal> (const Vec_Dal& a) {
		return Rtd (0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rtd cast<Rtd,Vec_Mnv> (const Vec_Mnv& a) {
		return Rtd (0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rtd cast<Rtd,Biv_Dap> (const Biv_Dap& a) {
		return Rtd (0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Biv_Daf> (const Biv_Daf& a) {
		return Rtd (0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Rtd (0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rtd cast<Rtd,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Rtd (a[0],0,0,0,a[7],a[8],a[9],a[10]);
}  
		 
		

		
inline Tvd involute (const Tvd& a) { 
	return Tvd (a[0],a[1],a[2],a[3],a[4]);
}
			
		 
		

		
inline Tvd reverse (const Tvd& a) { 
	return Tvd (a[0],-a[1],-a[2],-a[3],-a[4]);
}
			
		 
		

		
inline Tvd conjugate (const Tvd& a) { 
	return Tvd (a[0],-a[1],-a[2],-a[3],-a[4]);
}
			
		 
template<> inline const Tvd cast<Tvd,Rot> (const Rot& a) {
		return Tvd (a[0],0,0,0,0);
}  
		 
template<> inline const Tvd cast<Tvd,Mot> (const Mot& a) {
		return Tvd (a[0],0,0,0,0);
}  
		 
template<> inline const Tvd cast<Tvd,Dil> (const Dil& a) {
		return Tvd (a[0],0,0,0,a[1]);
}  
		 
template<> inline const Tvd cast<Tvd,Trv> (const Trv& a) {
		return Tvd (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Tvd cast<Tvd,Mtd> (const Mtd& a) {
		return Tvd (a[0],0,0,0,a[7]);
}  
		 
template<> inline const Tvd cast<Tvd,Trs> (const Trs& a) {
		return Tvd (a[0],0,0,0,0);
}  
		 
template<> inline const Tvd cast<Tvd,Mtt> (const Mtt& a) {
		return Tvd (a[0],a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Tvd cast<Tvd,Rtt> (const Rtt& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Rtd> (const Rtd& a) {
		return Tvd (a[0],0,0,0,a[4]);
}  
		 
template<> inline const Tvd cast<Tvd,Tsd> (const Tsd& a) {
		return Tvd (a[0],0,0,0,a[4]);
}  
		 
template<> inline const Tvd cast<Tvd,Trt> (const Trt& a) {
		return Tvd (a[0],a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Tvd cast<Tvd,Rvd> (const Rvd& a) {
		return Tvd (a[0],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Tvd cast<Tvd,Tst> (const Tst& a) {
		return Tvd (a[0],a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Tvd cast<Tvd,Tvt> (const Tvt& a) {
		return Tvd (a[0],a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Tvd cast<Tvd,Bst> (const Bst& a) {
		return Tvd (a[0],a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Tvd cast<Tvd,Sca> (const Sca& a) {
		return Tvd (a[0],0,0,0,0);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk> (const Mnk& a) {
		return Tvd (0,0,0,0,a[0]);
}  
		 
template<> inline const Tvd cast<Tvd,Par> (const Par& a) {
		return Tvd (0,a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Tvd cast<Tvd,Sta> (const Sta& a) {
		return Tvd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvd cast<Tvd,Tnv> (const Tnv& a) {
		return Tvd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvd cast<Tvd,Flp> (const Flp& a) {
		return Tvd (0,0,0,0,a[3]);
}  
		 
template<> inline const Tvd cast<Tvd,Afl> (const Afl& a) {
		return Tvd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvd cast<Tvd,Dap> (const Dap& a) {
		return Tvd (0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tvd cast<Tvd,Ori_Cir> (const Ori_Cir& a) {
		return Tvd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvd cast<Tvd,Ori_Lin> (const Ori_Lin& a) {
		return Tvd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Par> (const Mnk_Par& a) {
		return Tvd (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Sta> (const Mnk_Sta& a) {
		return Tvd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Afl> (const Mnk_Afl& a) {
		return Tvd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvd cast<Tvd,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Tvd (a[0],a[1],a[2],a[3],a[7]);
}  
		 
template<> inline const Tvd cast<Tvd,Hyp_Cir> (const Hyp_Cir& a) {
		return Tvd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvd cast<Tvd,Hyp_Lin> (const Hyp_Lin& a) {
		return Tvd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvd cast<Tvd,Hyp_Vec> (const Hyp_Vec& a) {
		return Tvd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvd cast<Tvd,Pnt_Cir> (const Pnt_Cir& a) {
		return Tvd (0,a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Tvd cast<Tvd,Pnt_Lin> (const Pnt_Lin& a) {
		return Tvd (0,a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Tvd cast<Tvd,Pnt_Vec> (const Pnt_Vec& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Pnt_Afp> (const Pnt_Afp& a) {
		return Tvd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvd cast<Tvd,Pnt_Dal> (const Pnt_Dal& a) {
		return Tvd (0,a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Tvd cast<Tvd,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Tvd (0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Tvd cast<Tvd,Par_Biv> (const Par_Biv& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Sta_Biv> (const Sta_Biv& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Drv_Dap> (const Drv_Dap& a) {
		return Tvd (a[0],0,0,0,a[7]);
}  
		 
template<> inline const Tvd cast<Tvd,Tnv_Flp> (const Tnv_Flp& a) {
		return Tvd (a[0],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Tvd cast<Tvd,Tnv_Biv> (const Tnv_Biv& a) {
		return Tvd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvd cast<Tvd,Lin_Dlp> (const Lin_Dlp& a) {
		return Tvd (0,0,0,0,a[3]);
}  
		 
template<> inline const Tvd cast<Tvd,Pln_Pln> (const Pln_Pln& a) {
		return Tvd (a[0],0,0,0,0);
}  
		 
template<> inline const Tvd cast<Tvd,Pln_Biv> (const Pln_Biv& a) {
		return Tvd (0,0,0,0,a[3]);
}  
		 
template<> inline const Tvd cast<Tvd,Vec_Aff> (const Vec_Aff& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Vec_Afp> (const Vec_Afp& a) {
		return Tvd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvd cast<Tvd,Vec_Dal> (const Vec_Dal& a) {
		return Tvd (0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tvd cast<Tvd,Vec_Mnv> (const Vec_Mnv& a) {
		return Tvd (0,0,0,0,a[0]);
}  
		 
template<> inline const Tvd cast<Tvd,Biv_Dap> (const Biv_Dap& a) {
		return Tvd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvd cast<Tvd,Biv_Daf> (const Biv_Daf& a) {
		return Tvd (0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tvd (0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Tvd cast<Tvd,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tvd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvd cast<Tvd,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Tvd (a[0],a[1],a[2],a[3],a[7]);
}  
		 
		

		
inline Tsd involute (const Tsd& a) { 
	return Tsd (a[0],a[1],a[2],a[3],a[4]);
}
			
		 
		

		
inline Tsd reverse (const Tsd& a) { 
	return Tsd (a[0],-a[1],-a[2],-a[3],-a[4]);
}
			
		 
		

		
inline Tsd conjugate (const Tsd& a) { 
	return Tsd (a[0],-a[1],-a[2],-a[3],-a[4]);
}
			
		 
template<> inline const Tsd cast<Tsd,Rot> (const Rot& a) {
		return Tsd (a[0],0,0,0,0);
}  
		 
template<> inline const Tsd cast<Tsd,Mot> (const Mot& a) {
		return Tsd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tsd cast<Tsd,Dil> (const Dil& a) {
		return Tsd (a[0],0,0,0,a[1]);
}  
		 
template<> inline const Tsd cast<Tsd,Trv> (const Trv& a) {
		return Tsd (a[0],0,0,0,0);
}  
		 
template<> inline const Tsd cast<Tsd,Mtd> (const Mtd& a) {
		return Tsd (a[0],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Tsd cast<Tsd,Trs> (const Trs& a) {
		return Tsd (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Tsd cast<Tsd,Mtt> (const Mtt& a) {
		return Tsd (a[0],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Tsd cast<Tsd,Rtt> (const Rtt& a) {
		return Tsd (a[0],0,0,0,0);
}  
		 
template<> inline const Tsd cast<Tsd,Rtd> (const Rtd& a) {
		return Tsd (a[0],0,0,0,a[4]);
}  
		 
template<> inline const Tsd cast<Tsd,Tvd> (const Tvd& a) {
		return Tsd (a[0],0,0,0,a[4]);
}  
		 
template<> inline const Tsd cast<Tsd,Trt> (const Trt& a) {
		return Tsd (a[0],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Tsd cast<Tsd,Rvd> (const Rvd& a) {
		return Tsd (a[0],0,0,0,a[7]);
}  
		 
template<> inline const Tsd cast<Tsd,Tst> (const Tst& a) {
		return Tsd (a[0],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Tsd cast<Tsd,Tvt> (const Tvt& a) {
		return Tsd (a[0],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Tsd cast<Tsd,Bst> (const Bst& a) {
		return Tsd (a[0],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Tsd cast<Tsd,Sca> (const Sca& a) {
		return Tsd (a[0],0,0,0,0);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk> (const Mnk& a) {
		return Tsd (0,0,0,0,a[0]);
}  
		 
template<> inline const Tsd cast<Tsd,Par> (const Par& a) {
		return Tsd (0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tsd cast<Tsd,Sta> (const Sta& a) {
		return Tsd (0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tsd cast<Tsd,Drv> (const Drv& a) {
		return Tsd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tsd cast<Tsd,Flp> (const Flp& a) {
		return Tsd (0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tsd cast<Tsd,Dll> (const Dll& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Dap> (const Dap& a) {
		return Tsd (0,0,0,0,a[3]);
}  
		 
template<> inline const Tsd cast<Tsd,Inf_Cir> (const Inf_Cir& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Inf_Dal> (const Inf_Dal& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Par> (const Mnk_Par& a) {
		return Tsd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Sta> (const Mnk_Sta& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Dll> (const Mnk_Dll& a) {
		return Tsd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tsd cast<Tsd,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Tsd (a[0],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Tsd cast<Tsd,Hyp_Cir> (const Hyp_Cir& a) {
		return Tsd (0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tsd cast<Tsd,Hyp_Lin> (const Hyp_Lin& a) {
		return Tsd (0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tsd cast<Tsd,Hyp_Vec> (const Hyp_Vec& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Cir> (const Pnt_Cir& a) {
		return Tsd (0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Lin> (const Pnt_Lin& a) {
		return Tsd (0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Vec> (const Pnt_Vec& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Dal> (const Pnt_Dal& a) {
		return Tsd (0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Tsd (0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tsd cast<Tsd,Par_Biv> (const Par_Biv& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Sta_Biv> (const Sta_Biv& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Drv_Pln> (const Drv_Pln& a) {
		return Tsd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tsd cast<Tsd,Drv_Dap> (const Drv_Dap& a) {
		return Tsd (a[0],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Tsd cast<Tsd,Tnv_Flp> (const Tnv_Flp& a) {
		return Tsd (a[0],0,0,0,a[7]);
}  
		 
template<> inline const Tsd cast<Tsd,Lin_Dfp> (const Lin_Dfp& a) {
		return Tsd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tsd cast<Tsd,Lin_Dlp> (const Lin_Dlp& a) {
		return Tsd (0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tsd cast<Tsd,Pln_Pln> (const Pln_Pln& a) {
		return Tsd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tsd cast<Tsd,Pln_Flp> (const Pln_Flp& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Pln_Biv> (const Pln_Biv& a) {
		return Tsd (0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tsd cast<Tsd,Vec_Aff> (const Vec_Aff& a) {
		return Tsd (a[0],0,0,0,0);
}  
		 
template<> inline const Tsd cast<Tsd,Vec_Dal> (const Vec_Dal& a) {
		return Tsd (0,0,0,0,a[3]);
}  
		 
template<> inline const Tsd cast<Tsd,Vec_Mnv> (const Vec_Mnv& a) {
		return Tsd (0,0,0,0,a[0]);
}  
		 
template<> inline const Tsd cast<Tsd,Biv_Daf> (const Biv_Daf& a) {
		return Tsd (0,0,0,0,a[3]);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tsd (0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tsd cast<Tsd,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Tsd (a[0],a[4],a[5],a[6],a[7]);
}  
		 
		

		
inline Trt involute (const Trt& a) { 
	return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}
			
		 
		

		
inline Trt reverse (const Trt& a) { 
	return Trt (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],a[11],a[12],a[13]);
}
			
		 
		

		
inline Trt conjugate (const Trt& a) { 
	return Trt (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],a[11],a[12],a[13]);
}
			
		 
template<> inline const Trt cast<Trt,Rot> (const Rot& a) {
		return Trt (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Mot> (const Mot& a) {
		return Trt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Dil> (const Dil& a) {
		return Trt (a[0],0,0,0,0,0,0,0,0,0,a[1],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Trv> (const Trv& a) {
		return Trt (a[0],0,0,0,a[1],a[2],a[3],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Mtd> (const Mtd& a) {
		return Trt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Trt cast<Trt,Trs> (const Trs& a) {
		return Trt (a[0],0,0,0,0,0,0,a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Mtt> (const Mtt& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Trt cast<Trt,Rtt> (const Rtt& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Rtd> (const Rtd& a) {
		return Trt (a[0],a[1],a[2],a[3],0,0,0,0,0,0,a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Trt cast<Trt,Tvd> (const Tvd& a) {
		return Trt (a[0],0,0,0,a[1],a[2],a[3],0,0,0,a[4],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Tsd> (const Tsd& a) {
		return Trt (a[0],0,0,0,0,0,0,a[1],a[2],a[3],a[4],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Rvd> (const Rvd& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Trt cast<Trt,Tst> (const Tst& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Trt cast<Trt,Tvt> (const Tvt& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Trt cast<Trt,Bst> (const Bst& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Sca> (const Sca& a) {
		return Trt (a[0],0,0,0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Mnk> (const Mnk& a) {
		return Trt (0,0,0,0,0,0,0,0,0,0,a[0],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Par> (const Par& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Sph> (const Sph& a) {
		return Trt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trt cast<Trt,Sta> (const Sta& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Drv> (const Drv& a) {
		return Trt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Tnv> (const Tnv& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pln> (const Pln& a) {
		return Trt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trt cast<Trt,Flp> (const Flp& a) {
		return Trt (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Dll> (const Dll& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Biv> (const Biv& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Afl> (const Afl& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Dap> (const Dap& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Daf> (const Daf& a) {
		return Trt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trt cast<Trt,Ori_Cir> (const Ori_Cir& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Ori_Drb> (const Ori_Drb& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Ori_Lin> (const Ori_Lin& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Ori_Dfp> (const Ori_Dfp& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Inf_Cir> (const Inf_Cir& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Inf_Afp> (const Inf_Afp& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Inf_Dal> (const Inf_Dal& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Par> (const Mnk_Par& a) {
		return Trt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0,a[7],a[8],a[9]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Sph> (const Mnk_Sph& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Sta> (const Mnk_Sta& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Pln> (const Mnk_Pln& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Dll> (const Mnk_Dll& a) {
		return Trt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Biv> (const Mnk_Biv& a) {
		return Trt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Afl> (const Mnk_Afl& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Daf> (const Mnk_Daf& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Trt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Cir> (const Hyp_Cir& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11]);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Lin> (const Hyp_Lin& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11]);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Vec> (const Hyp_Vec& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Cir> (const Pnt_Cir& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Lin> (const Pnt_Lin& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Vec> (const Pnt_Vec& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Afp> (const Pnt_Afp& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Dal> (const Pnt_Dal& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Trt cast<Trt,Par_Biv> (const Par_Biv& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Sta_Biv> (const Sta_Biv& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Drv_Pln> (const Drv_Pln& a) {
		return Trt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Drv_Dap> (const Drv_Dap& a) {
		return Trt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Trt cast<Trt,Tnv_Flp> (const Tnv_Flp& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Trt cast<Trt,Tnv_Biv> (const Tnv_Biv& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Lin_Dfp> (const Lin_Dfp& a) {
		return Trt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Lin_Dlp> (const Lin_Dlp& a) {
		return Trt (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Trt cast<Trt,Pln_Pln> (const Pln_Pln& a) {
		return Trt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pln_Flp> (const Pln_Flp& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pln_Biv> (const Pln_Biv& a) {
		return Trt (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Trt cast<Trt,Vec_Aff> (const Vec_Aff& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Vec_Afp> (const Vec_Afp& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Vec_Dal> (const Vec_Dal& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Trt cast<Trt,Vec_Mnv> (const Vec_Mnv& a) {
		return Trt (0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Trt cast<Trt,Biv_Dap> (const Biv_Dap& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Biv_Daf> (const Biv_Daf& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Trt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
		

		
inline Rvd involute (const Rvd& a) { 
	return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11]);
}
			
		 
		

		
inline Rvd reverse (const Rvd& a) { 
	return Rvd (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],a[8],a[9],a[10],a[11]);
}
			
		 
		

		
inline Rvd conjugate (const Rvd& a) { 
	return Rvd (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],a[8],a[9],a[10],a[11]);
}
			
		 
template<> inline const Rvd cast<Rvd,Rot> (const Rot& a) {
		return Rvd (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Mot> (const Mot& a) {
		return Rvd (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Dil> (const Dil& a) {
		return Rvd (a[0],0,0,0,0,0,0,a[1],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Trv> (const Trv& a) {
		return Rvd (a[0],0,0,0,a[1],a[2],a[3],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Mtd> (const Mtd& a) {
		return Rvd (a[0],a[1],a[2],a[3],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Rvd cast<Rvd,Trs> (const Trs& a) {
		return Rvd (a[0],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Mtt> (const Mtt& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Rvd cast<Rvd,Rtt> (const Rtt& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,a[7]);
}  
		 
template<> inline const Rvd cast<Rvd,Rtd> (const Rtd& a) {
		return Rvd (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],0);
}  
		 
template<> inline const Rvd cast<Rvd,Tvd> (const Tvd& a) {
		return Rvd (a[0],0,0,0,a[1],a[2],a[3],a[4],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Tsd> (const Tsd& a) {
		return Rvd (a[0],0,0,0,0,0,0,a[4],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Trt> (const Trt& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Rvd cast<Rvd,Tst> (const Tst& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Rvd cast<Rvd,Tvt> (const Tvt& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Rvd cast<Rvd,Bst> (const Bst& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[10],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Sca> (const Sca& a) {
		return Rvd (a[0],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk> (const Mnk& a) {
		return Rvd (0,0,0,0,0,0,0,a[0],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Par> (const Par& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Sph> (const Sph& a) {
		return Rvd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rvd cast<Rvd,Sta> (const Sta& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Tnv> (const Tnv& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Tnt> (const Tnt& a) {
		return Rvd (0,0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Rvd cast<Rvd,Pln> (const Pln& a) {
		return Rvd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rvd cast<Rvd,Flp> (const Flp& a) {
		return Rvd (0,0,0,0,0,0,0,a[3],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Dll> (const Dll& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Biv> (const Biv& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Afl> (const Afl& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Dap> (const Dap& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Daf> (const Daf& a) {
		return Rvd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rvd cast<Rvd,Ori_Cir> (const Ori_Cir& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rvd cast<Rvd,Ori_Drb> (const Ori_Drb& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Rvd cast<Rvd,Ori_Lin> (const Ori_Lin& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Rvd cast<Rvd,Ori_Dfp> (const Ori_Dfp& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rvd cast<Rvd,Inf_Cir> (const Inf_Cir& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Rvd cast<Rvd,Inf_Afp> (const Inf_Afp& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Rvd cast<Rvd,Inf_Dal> (const Inf_Dal& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Par> (const Mnk_Par& a) {
		return Rvd (a[0],0,0,0,a[1],a[2],a[3],0,a[7],a[8],a[9],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Sph> (const Mnk_Sph& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Sta> (const Mnk_Sta& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Pln> (const Mnk_Pln& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Dll> (const Mnk_Dll& a) {
		return Rvd (0,0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Biv> (const Mnk_Biv& a) {
		return Rvd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Afl> (const Mnk_Afl& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Daf> (const Mnk_Daf& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Rvd cast<Rvd,Hyp_Pss> (const Hyp_Pss& a) {
		return Rvd (0,0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Rvd cast<Rvd,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Rvd (a[0],0,0,0,a[1],a[2],a[3],a[7],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Hyp_Cir> (const Hyp_Cir& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Rvd cast<Rvd,Hyp_Lin> (const Hyp_Lin& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[9],a[10],a[11],0);
}  
		 
template<> inline const Rvd cast<Rvd,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rvd cast<Rvd,Hyp_Vec> (const Hyp_Vec& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Cir> (const Pnt_Cir& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Lin> (const Pnt_Lin& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Vec> (const Pnt_Vec& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Afp> (const Pnt_Afp& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Dal> (const Pnt_Dal& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Rvd cast<Rvd,Par_Biv> (const Par_Biv& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rvd cast<Rvd,Sta_Biv> (const Sta_Biv& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,a[10]);
}  
		 
template<> inline const Rvd cast<Rvd,Drv_Dap> (const Drv_Dap& a) {
		return Rvd (a[0],a[1],a[2],a[3],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Rvd cast<Rvd,Tnv_Flp> (const Tnv_Flp& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Rvd cast<Rvd,Tnv_Biv> (const Tnv_Biv& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3]);
}  
		 
template<> inline const Rvd cast<Rvd,Lin_Dfp> (const Lin_Dfp& a) {
		return Rvd (0,0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Rvd cast<Rvd,Lin_Dlp> (const Lin_Dlp& a) {
		return Rvd (0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rvd cast<Rvd,Pln_Pln> (const Pln_Pln& a) {
		return Rvd (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Pln_Flp> (const Pln_Flp& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Pln_Biv> (const Pln_Biv& a) {
		return Rvd (0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rvd cast<Rvd,Vec_Aff> (const Vec_Aff& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Vec_Afp> (const Vec_Afp& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6]);
}  
		 
template<> inline const Rvd cast<Rvd,Vec_Dal> (const Vec_Dal& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Rvd cast<Rvd,Vec_Mnv> (const Vec_Mnv& a) {
		return Rvd (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Rvd cast<Rvd,Biv_Dap> (const Biv_Dap& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rvd cast<Rvd,Biv_Daf> (const Biv_Daf& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,a[10],a[11],a[12],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rvd cast<Rvd,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[6]);
}  
		 
template<> inline const Rvd cast<Rvd,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Rvd (a[0],0,0,0,a[1],a[2],a[3],a[7],a[8],a[9],a[10],0);
}  
		 
		

		
inline Tst involute (const Tst& a) { 
	return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}
			
		 
		

		
inline Tst reverse (const Tst& a) { 
	return Tst (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],a[11],a[12],a[13],a[14]);
}
			
		 
		

		
inline Tst conjugate (const Tst& a) { 
	return Tst (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],a[11],a[12],a[13],a[14]);
}
			
		 
template<> inline const Tst cast<Tst,Rot> (const Rot& a) {
		return Tst (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Mot> (const Mot& a) {
		return Tst (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Dil> (const Dil& a) {
		return Tst (a[0],0,0,0,0,0,0,0,0,0,a[1],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Trv> (const Trv& a) {
		return Tst (a[0],0,0,0,a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Mtd> (const Mtd& a) {
		return Tst (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tst cast<Tst,Trs> (const Trs& a) {
		return Tst (a[0],0,0,0,0,0,0,a[1],a[2],a[3],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Mtt> (const Mtt& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Tst cast<Tst,Rtt> (const Rtt& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0,a[7]);
}  
		 
template<> inline const Tst cast<Tst,Rtd> (const Rtd& a) {
		return Tst (a[0],a[1],a[2],a[3],0,0,0,0,0,0,a[4],a[5],a[6],a[7],0);
}  
		 
template<> inline const Tst cast<Tst,Tvd> (const Tvd& a) {
		return Tst (a[0],0,0,0,a[1],a[2],a[3],0,0,0,a[4],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Tsd> (const Tsd& a) {
		return Tst (a[0],0,0,0,0,0,0,a[1],a[2],a[3],a[4],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Trt> (const Trt& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Tst cast<Tst,Rvd> (const Rvd& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Tst cast<Tst,Tvt> (const Tvt& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Tst cast<Tst,Bst> (const Bst& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Sca> (const Sca& a) {
		return Tst (a[0],0,0,0,0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Mnk> (const Mnk& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,a[0],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Par> (const Par& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Sph> (const Sph& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tst cast<Tst,Sta> (const Sta& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Drv> (const Drv& a) {
		return Tst (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Tnv> (const Tnv& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Tnt> (const Tnt& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Tst cast<Tst,Pln> (const Pln& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tst cast<Tst,Flp> (const Flp& a) {
		return Tst (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Dll> (const Dll& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Biv> (const Biv& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Afl> (const Afl& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Dap> (const Dap& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Daf> (const Daf& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tst cast<Tst,Ori_Cir> (const Ori_Cir& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tst cast<Tst,Ori_Drb> (const Ori_Drb& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tst cast<Tst,Ori_Lin> (const Ori_Lin& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tst cast<Tst,Ori_Dfp> (const Ori_Dfp& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tst cast<Tst,Inf_Cir> (const Inf_Cir& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tst cast<Tst,Inf_Afp> (const Inf_Afp& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tst cast<Tst,Inf_Dal> (const Inf_Dal& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Par> (const Mnk_Par& a) {
		return Tst (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0,a[7],a[8],a[9],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Sph> (const Mnk_Sph& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Sta> (const Mnk_Sta& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Pln> (const Mnk_Pln& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Dll> (const Mnk_Dll& a) {
		return Tst (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Biv> (const Mnk_Biv& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Afl> (const Mnk_Afl& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Daf> (const Mnk_Daf& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Tst cast<Tst,Hyp_Pss> (const Hyp_Pss& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Tst cast<Tst,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Tst (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Hyp_Cir> (const Hyp_Cir& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Tst cast<Tst,Hyp_Lin> (const Hyp_Lin& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11],0);
}  
		 
template<> inline const Tst cast<Tst,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tst cast<Tst,Hyp_Vec> (const Hyp_Vec& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Cir> (const Pnt_Cir& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Lin> (const Pnt_Lin& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Vec> (const Pnt_Vec& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Afp> (const Pnt_Afp& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Dal> (const Pnt_Dal& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tst cast<Tst,Par_Biv> (const Par_Biv& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tst cast<Tst,Sta_Biv> (const Sta_Biv& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,a[10]);
}  
		 
template<> inline const Tst cast<Tst,Drv_Pln> (const Drv_Pln& a) {
		return Tst (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Drv_Dap> (const Drv_Dap& a) {
		return Tst (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tst cast<Tst,Tnv_Flp> (const Tnv_Flp& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tst cast<Tst,Tnv_Biv> (const Tnv_Biv& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Tst cast<Tst,Lin_Dfp> (const Lin_Dfp& a) {
		return Tst (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tst cast<Tst,Lin_Dlp> (const Lin_Dlp& a) {
		return Tst (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tst cast<Tst,Pln_Pln> (const Pln_Pln& a) {
		return Tst (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Pln_Flp> (const Pln_Flp& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Pln_Biv> (const Pln_Biv& a) {
		return Tst (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tst cast<Tst,Vec_Aff> (const Vec_Aff& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Vec_Afp> (const Vec_Afp& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0,a[6]);
}  
		 
template<> inline const Tst cast<Tst,Vec_Dal> (const Vec_Dal& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Tst cast<Tst,Vec_Mnv> (const Vec_Mnv& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Tst cast<Tst,Biv_Dap> (const Biv_Dap& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tst cast<Tst,Biv_Daf> (const Biv_Daf& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Tst cast<Tst,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6]);
}  
		 
template<> inline const Tst cast<Tst,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Tst (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
		

		
inline Tvt involute (const Tvt& a) { 
	return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}
			
		 
		

		
inline Tvt reverse (const Tvt& a) { 
	return Tvt (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],a[11],a[12],a[13],a[14]);
}
			
		 
		

		
inline Tvt conjugate (const Tvt& a) { 
	return Tvt (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10],a[11],a[12],a[13],a[14]);
}
			
		 
template<> inline const Tvt cast<Tvt,Rot> (const Rot& a) {
		return Tvt (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Mot> (const Mot& a) {
		return Tvt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0,0,0,a[7]);
}  
		 
template<> inline const Tvt cast<Tvt,Dil> (const Dil& a) {
		return Tvt (a[0],0,0,0,0,0,0,0,0,0,a[1],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Trv> (const Trv& a) {
		return Tvt (a[0],0,0,0,a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Mtd> (const Mtd& a) {
		return Tvt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Tvt cast<Tvt,Trs> (const Trs& a) {
		return Tvt (a[0],0,0,0,0,0,0,a[1],a[2],a[3],0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Mtt> (const Mtt& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[15]);
}  
		 
template<> inline const Tvt cast<Tvt,Rtt> (const Rtt& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Rtd> (const Rtd& a) {
		return Tvt (a[0],a[1],a[2],a[3],0,0,0,0,0,0,a[4],a[5],a[6],a[7],0);
}  
		 
template<> inline const Tvt cast<Tvt,Tvd> (const Tvd& a) {
		return Tvt (a[0],0,0,0,a[1],a[2],a[3],0,0,0,a[4],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Tsd> (const Tsd& a) {
		return Tvt (a[0],0,0,0,0,0,0,a[1],a[2],a[3],a[4],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Trt> (const Trt& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Tvt cast<Tvt,Rvd> (const Rvd& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tvt cast<Tvt,Tst> (const Tst& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Tvt cast<Tvt,Bst> (const Bst& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Sca> (const Sca& a) {
		return Tvt (a[0],0,0,0,0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk> (const Mnk& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,a[0],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Par> (const Par& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Sph> (const Sph& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Tvt cast<Tvt,Sta> (const Sta& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Drv> (const Drv& a) {
		return Tvt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Drt> (const Drt& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Tvt cast<Tvt,Tnv> (const Tnv& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Pln> (const Pln& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tvt cast<Tvt,Flp> (const Flp& a) {
		return Tvt (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Dll> (const Dll& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Biv> (const Biv& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Afl> (const Afl& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Dap> (const Dap& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Daf> (const Daf& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvt cast<Tvt,Ori_Cir> (const Ori_Cir& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tvt cast<Tvt,Ori_Drb> (const Ori_Drb& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvt cast<Tvt,Ori_Lin> (const Ori_Lin& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tvt cast<Tvt,Ori_Dfp> (const Ori_Dfp& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvt cast<Tvt,Inf_Cir> (const Inf_Cir& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tvt cast<Tvt,Inf_Afp> (const Inf_Afp& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tvt cast<Tvt,Inf_Dal> (const Inf_Dal& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Par> (const Mnk_Par& a) {
		return Tvt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0,a[7],a[8],a[9],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Sph> (const Mnk_Sph& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,a[4]);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Sta> (const Mnk_Sta& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Pln> (const Mnk_Pln& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Dll> (const Mnk_Dll& a) {
		return Tvt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Biv> (const Mnk_Biv& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Afl> (const Mnk_Afl& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Daf> (const Mnk_Daf& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Hyp_Pss> (const Hyp_Pss& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,0,0,0,0,a[1]);
}  
		 
template<> inline const Tvt cast<Tvt,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Tvt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Hyp_Cir> (const Hyp_Cir& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11],a[13]);
}  
		 
template<> inline const Tvt cast<Tvt,Hyp_Lin> (const Hyp_Lin& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11],0);
}  
		 
template<> inline const Tvt cast<Tvt,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[7]);
}  
		 
template<> inline const Tvt cast<Tvt,Hyp_Vec> (const Hyp_Vec& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Cir> (const Pnt_Cir& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Lin> (const Pnt_Lin& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Vec> (const Pnt_Vec& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Afp> (const Pnt_Afp& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Dal> (const Pnt_Dal& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tvt cast<Tvt,Par_Biv> (const Par_Biv& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Tvt cast<Tvt,Sta_Biv> (const Sta_Biv& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,a[11]);
}  
		 
template<> inline const Tvt cast<Tvt,Drv_Pln> (const Drv_Pln& a) {
		return Tvt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3]);
}  
		 
template<> inline const Tvt cast<Tvt,Drv_Dap> (const Drv_Dap& a) {
		return Tvt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tvt cast<Tvt,Tnv_Flp> (const Tnv_Flp& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tvt cast<Tvt,Tnv_Biv> (const Tnv_Biv& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Lin_Dfp> (const Lin_Dfp& a) {
		return Tvt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tvt cast<Tvt,Lin_Dlp> (const Lin_Dlp& a) {
		return Tvt (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Tvt cast<Tvt,Pln_Pln> (const Pln_Pln& a) {
		return Tvt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Pln_Flp> (const Pln_Flp& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0,0,0,a[6]);
}  
		 
template<> inline const Tvt cast<Tvt,Pln_Biv> (const Pln_Biv& a) {
		return Tvt (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvt cast<Tvt,Vec_Aff> (const Vec_Aff& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Vec_Afp> (const Vec_Afp& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Vec_Dal> (const Vec_Dal& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvt cast<Tvt,Vec_Mnv> (const Vec_Mnv& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Tvt cast<Tvt,Biv_Dap> (const Biv_Dap& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvt cast<Tvt,Biv_Daf> (const Biv_Daf& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[11]);
}  
		 
template<> inline const Tvt cast<Tvt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[7]);
}  
		 
template<> inline const Tvt cast<Tvt,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Tvt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
		

		
inline Bst involute (const Bst& a) { 
	return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}
			
		 
		

		
inline Bst reverse (const Bst& a) { 
	return Bst (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10]);
}
			
		 
		

		
inline Bst conjugate (const Bst& a) { 
	return Bst (a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9],-a[10]);
}
			
		 
template<> inline const Bst cast<Bst,Rot> (const Rot& a) {
		return Bst (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Mot> (const Mot& a) {
		return Bst (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Bst cast<Bst,Dil> (const Dil& a) {
		return Bst (a[0],0,0,0,0,0,0,0,0,0,a[1]);
}  
		 
template<> inline const Bst cast<Bst,Trv> (const Trv& a) {
		return Bst (a[0],0,0,0,a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Mtd> (const Mtd& a) {
		return Bst (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Bst cast<Bst,Trs> (const Trs& a) {
		return Bst (a[0],0,0,0,0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Bst cast<Bst,Mtt> (const Mtt& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Bst cast<Bst,Rtt> (const Rtt& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Rtd> (const Rtd& a) {
		return Bst (a[0],a[1],a[2],a[3],0,0,0,0,0,0,a[4]);
}  
		 
template<> inline const Bst cast<Bst,Tvd> (const Tvd& a) {
		return Bst (a[0],0,0,0,a[1],a[2],a[3],0,0,0,a[4]);
}  
		 
template<> inline const Bst cast<Bst,Tsd> (const Tsd& a) {
		return Bst (a[0],0,0,0,0,0,0,a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Bst cast<Bst,Trt> (const Trt& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Bst cast<Bst,Rvd> (const Rvd& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7]);
}  
		 
template<> inline const Bst cast<Bst,Tst> (const Tst& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Bst cast<Bst,Tvt> (const Tvt& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Bst cast<Bst,Sca> (const Sca& a) {
		return Bst (a[0],0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Mnk> (const Mnk& a) {
		return Bst (0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Bst cast<Bst,Par> (const Par& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Bst cast<Bst,Sta> (const Sta& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Bst cast<Bst,Drv> (const Drv& a) {
		return Bst (0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Bst cast<Bst,Tnv> (const Tnv& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Flp> (const Flp& a) {
		return Bst (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Bst cast<Bst,Dll> (const Dll& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Bst cast<Bst,Biv> (const Biv& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Afl> (const Afl& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Dap> (const Dap& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Bst cast<Bst,Ori_Cir> (const Ori_Cir& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Ori_Drb> (const Ori_Drb& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Ori_Lin> (const Ori_Lin& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Ori_Dfp> (const Ori_Dfp& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Inf_Cir> (const Inf_Cir& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Bst cast<Bst,Inf_Afp> (const Inf_Afp& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Inf_Dal> (const Inf_Dal& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Par> (const Mnk_Par& a) {
		return Bst (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Sph> (const Mnk_Sph& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Sta> (const Mnk_Sta& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Pln> (const Mnk_Pln& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Dll> (const Mnk_Dll& a) {
		return Bst (0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Afl> (const Mnk_Afl& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Daf> (const Mnk_Daf& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Bst (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Bst cast<Bst,Hyp_Cir> (const Hyp_Cir& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Bst cast<Bst,Hyp_Lin> (const Hyp_Lin& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Bst cast<Bst,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Hyp_Vec> (const Hyp_Vec& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Bst cast<Bst,Pnt_Cir> (const Pnt_Cir& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Bst cast<Bst,Pnt_Lin> (const Pnt_Lin& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Bst cast<Bst,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Bst cast<Bst,Pnt_Vec> (const Pnt_Vec& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Bst cast<Bst,Pnt_Afp> (const Pnt_Afp& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Pnt_Dal> (const Pnt_Dal& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Bst cast<Bst,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Bst cast<Bst,Par_Biv> (const Par_Biv& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Bst cast<Bst,Sta_Biv> (const Sta_Biv& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Bst cast<Bst,Drv_Pln> (const Drv_Pln& a) {
		return Bst (0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Bst cast<Bst,Drv_Dap> (const Drv_Dap& a) {
		return Bst (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Bst cast<Bst,Tnv_Flp> (const Tnv_Flp& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7]);
}  
		 
template<> inline const Bst cast<Bst,Tnv_Biv> (const Tnv_Biv& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Lin_Dfp> (const Lin_Dfp& a) {
		return Bst (0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Bst cast<Bst,Lin_Dlp> (const Lin_Dlp& a) {
		return Bst (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Bst cast<Bst,Pln_Pln> (const Pln_Pln& a) {
		return Bst (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Bst cast<Bst,Pln_Flp> (const Pln_Flp& a) {
		return Bst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Bst cast<Bst,Pln_Biv> (const Pln_Biv& a) {
		return Bst (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Bst cast<Bst,Vec_Aff> (const Vec_Aff& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Vec_Afp> (const Vec_Afp& a) {
		return Bst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Vec_Dal> (const Vec_Dal& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Bst cast<Bst,Vec_Mnv> (const Vec_Mnv& a) {
		return Bst (0,0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Bst cast<Bst,Biv_Dap> (const Biv_Dap& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Bst cast<Bst,Biv_Daf> (const Biv_Daf& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Bst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Bst cast<Bst,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Bst cast<Bst,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Bst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Bst cast<Bst,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Bst (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}  
		 
		

		
inline Sca involute (const Sca& a) { 
	return Sca (a[0]);
}
			
		 
		

		
inline Sca reverse (const Sca& a) { 
	return Sca (a[0]);
}
			
		 
		

		
inline Sca conjugate (const Sca& a) { 
	return Sca (a[0]);
}
			
		 
template<> inline const Sca cast<Sca,Rot> (const Rot& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Mot> (const Mot& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Dil> (const Dil& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Trv> (const Trv& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Mtd> (const Mtd& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Trs> (const Trs& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Mtt> (const Mtt& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Rtt> (const Rtt& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Rtd> (const Rtd& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Tvd> (const Tvd& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Tsd> (const Tsd& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Trt> (const Trt& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Rvd> (const Rvd& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Tst> (const Tst& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Tvt> (const Tvt& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Bst> (const Bst& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Mnk_Par> (const Mnk_Par& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Pnt_Vec> (const Pnt_Vec& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Par_Biv> (const Par_Biv& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Sta_Biv> (const Sta_Biv& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Drv_Dap> (const Drv_Dap& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Tnv_Flp> (const Tnv_Flp& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Pln_Pln> (const Pln_Pln& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Vec_Aff> (const Vec_Aff& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Sca (a[0]);
}  
		 
		

		
inline Ori involute (const Ori& a) { 
	return Ori (-a[0]);
}
			
		 
		

		
inline Ori reverse (const Ori& a) { 
	return Ori (a[0]);
}
			
		 
		

		
inline Ori conjugate (const Ori& a) { 
	return Ori (-a[0]);
}
			
		 
template<> inline const Ori cast<Ori,Rtc> (const Rtc& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Hyp> (const Hyp& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Pnt> (const Pnt& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Aff> (const Aff& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Ori_Par> (const Ori_Par& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Ori_Flp> (const Ori_Flp& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Mnk_Aff> (const Mnk_Aff& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Hyp_Par> (const Hyp_Par& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Hyp_Flp> (const Hyp_Flp& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Pnt_Par> (const Pnt_Par& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Pnt_Flp> (const Pnt_Flp& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Pnt_Afl> (const Pnt_Afl& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Pnt_Dap> (const Pnt_Dap& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Par_Tnb> (const Par_Tnb& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Par_Afp> (const Par_Afp& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Par_Mnv> (const Par_Mnv& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Sta_Vec> (const Sta_Vec& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Sta_Mnv> (const Sta_Mnv& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Tnv_Vec> (const Tnv_Vec& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Vec_Afl> (const Vec_Afl& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Vec_Dap> (const Vec_Dap& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Biv_Afp> (const Biv_Afp& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Biv_Dal> (const Biv_Dal& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Ori (a[0]);
}  
		 
		

		
inline Inf involute (const Inf& a) { 
	return Inf (-a[0]);
}
			
		 
		

		
inline Inf reverse (const Inf& a) { 
	return Inf (a[0]);
}
			
		 
		

		
inline Inf conjugate (const Inf& a) { 
	return Inf (-a[0]);
}
			
		 
template<> inline const Inf cast<Inf,Rtc> (const Rtc& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Hyp> (const Hyp& a) {
		return Inf (a[1]);
}  
		 
template<> inline const Inf cast<Inf,Pnt> (const Pnt& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Dlp> (const Dlp& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Inf_Par> (const Inf_Par& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Inf_Dap> (const Inf_Dap& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Inf (a[1]);
}  
		 
template<> inline const Inf cast<Inf,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Inf (a[0]);
}  
		 
template<> inline const Inf cast<Inf,Hyp_Par> (const Hyp_Par& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Hyp_Flp> (const Hyp_Flp& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Pnt_Par> (const Pnt_Par& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Pnt_Flp> (const Pnt_Flp& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Pnt_Dll> (const Pnt_Dll& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Pnt_Dap> (const Pnt_Dap& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Par_Drb> (const Par_Drb& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Par_Dfp> (const Par_Dfp& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Par_Mnv> (const Par_Mnv& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Sta_Vec> (const Sta_Vec& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Sta_Mnv> (const Sta_Mnv& a) {
		return Inf (a[1]);
}  
		 
template<> inline const Inf cast<Inf,Drv_Lin> (const Drv_Lin& a) {
		return Inf (a[0]);
}  
		 
template<> inline const Inf cast<Inf,Lin_Pln> (const Lin_Pln& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Lin_Flp> (const Lin_Flp& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Lin_Dll> (const Lin_Dll& a) {
		return Inf (a[0]);
}  
		 
template<> inline const Inf cast<Inf,Pln_Dfp> (const Pln_Dfp& a) {
		return Inf (a[0]);
}  
		 
template<> inline const Inf cast<Inf,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Inf (a[1]);
}  
		 
		

		
inline Mnk involute (const Mnk& a) { 
	return Mnk (a[0]);
}
			
		 
		

		
inline Mnk reverse (const Mnk& a) { 
	return Mnk (-a[0]);
}
			
		 
		

		
inline Mnk conjugate (const Mnk& a) { 
	return Mnk (-a[0]);
}
			
		 
template<> inline const Mnk cast<Mnk,Dil> (const Dil& a) {
		return Mnk (a[1]);
}  
		 
template<> inline const Mnk cast<Mnk,Mtd> (const Mtd& a) {
		return Mnk (a[7]);
}  
		 
template<> inline const Mnk cast<Mnk,Mtt> (const Mtt& a) {
		return Mnk (a[10]);
}  
		 
template<> inline const Mnk cast<Mnk,Rtd> (const Rtd& a) {
		return Mnk (a[4]);
}  
		 
template<> inline const Mnk cast<Mnk,Tvd> (const Tvd& a) {
		return Mnk (a[4]);
}  
		 
template<> inline const Mnk cast<Mnk,Tsd> (const Tsd& a) {
		return Mnk (a[4]);
}  
		 
template<> inline const Mnk cast<Mnk,Trt> (const Trt& a) {
		return Mnk (a[10]);
}  
		 
template<> inline const Mnk cast<Mnk,Rvd> (const Rvd& a) {
		return Mnk (a[7]);
}  
		 
template<> inline const Mnk cast<Mnk,Tst> (const Tst& a) {
		return Mnk (a[10]);
}  
		 
template<> inline const Mnk cast<Mnk,Tvt> (const Tvt& a) {
		return Mnk (a[10]);
}  
		 
template<> inline const Mnk cast<Mnk,Bst> (const Bst& a) {
		return Mnk (a[10]);
}  
		 
template<> inline const Mnk cast<Mnk,Par> (const Par& a) {
		return Mnk (a[9]);
}  
		 
template<> inline const Mnk cast<Mnk,Flp> (const Flp& a) {
		return Mnk (a[3]);
}  
		 
template<> inline const Mnk cast<Mnk,Dap> (const Dap& a) {
		return Mnk (a[3]);
}  
		 
template<> inline const Mnk cast<Mnk,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Mnk (a[7]);
}  
		 
template<> inline const Mnk cast<Mnk,Pnt_Cir> (const Pnt_Cir& a) {
		return Mnk (a[9]);
}  
		 
template<> inline const Mnk cast<Mnk,Pnt_Lin> (const Pnt_Lin& a) {
		return Mnk (a[9]);
}  
		 
template<> inline const Mnk cast<Mnk,Pnt_Dal> (const Pnt_Dal& a) {
		return Mnk (a[9]);
}  
		 
template<> inline const Mnk cast<Mnk,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Mnk (a[6]);
}  
		 
template<> inline const Mnk cast<Mnk,Drv_Dap> (const Drv_Dap& a) {
		return Mnk (a[7]);
}  
		 
template<> inline const Mnk cast<Mnk,Tnv_Flp> (const Tnv_Flp& a) {
		return Mnk (a[7]);
}  
		 
template<> inline const Mnk cast<Mnk,Lin_Dlp> (const Lin_Dlp& a) {
		return Mnk (a[3]);
}  
		 
template<> inline const Mnk cast<Mnk,Pln_Biv> (const Pln_Biv& a) {
		return Mnk (a[3]);
}  
		 
template<> inline const Mnk cast<Mnk,Vec_Dal> (const Vec_Dal& a) {
		return Mnk (a[3]);
}  
		 
template<> inline const Mnk cast<Mnk,Vec_Mnv> (const Vec_Mnv& a) {
		return Mnk (a[0]);
}  
		 
template<> inline const Mnk cast<Mnk,Biv_Daf> (const Biv_Daf& a) {
		return Mnk (a[3]);
}  
		 
template<> inline const Mnk cast<Mnk,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Mnk (a[6]);
}  
		 
template<> inline const Mnk cast<Mnk,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Mnk (a[7]);
}  
		 
		

		
inline Hyp involute (const Hyp& a) { 
	return Hyp (-a[0],-a[1]);
}
			
		 
		

		
inline Hyp reverse (const Hyp& a) { 
	return Hyp (a[0],a[1]);
}
			
		 
		

		
inline Hyp conjugate (const Hyp& a) { 
	return Hyp (-a[0],-a[1]);
}
			
		 
template<> inline const Hyp cast<Hyp,Rtc> (const Rtc& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Ori> (const Ori& a) {
		return Hyp (a[0],0);
}  
		 
template<> inline const Hyp cast<Hyp,Inf> (const Inf& a) {
		return Hyp (0,a[0]);
}  
		 
template<> inline const Hyp cast<Hyp,Pnt> (const Pnt& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Dlp> (const Dlp& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Aff> (const Aff& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Ori_Par> (const Ori_Par& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Ori_Flp> (const Ori_Flp& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Inf_Par> (const Inf_Par& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Inf_Dap> (const Inf_Dap& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Hyp (a[0],a[1]);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Hyp (0,a[0]);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Aff> (const Mnk_Aff& a) {
		return Hyp (a[0],0);
}  
		 
template<> inline const Hyp cast<Hyp,Hyp_Par> (const Hyp_Par& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Hyp_Flp> (const Hyp_Flp& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Pnt_Par> (const Pnt_Par& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Pnt_Flp> (const Pnt_Flp& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Pnt_Dll> (const Pnt_Dll& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Pnt_Afl> (const Pnt_Afl& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Pnt_Dap> (const Pnt_Dap& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Par_Drb> (const Par_Drb& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Par_Tnb> (const Par_Tnb& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Par_Dfp> (const Par_Dfp& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Par_Afp> (const Par_Afp& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Par_Mnv> (const Par_Mnv& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Sta_Vec> (const Sta_Vec& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Sta_Mnv> (const Sta_Mnv& a) {
		return Hyp (a[0],a[1]);
}  
		 
template<> inline const Hyp cast<Hyp,Drv_Lin> (const Drv_Lin& a) {
		return Hyp (0,a[0]);
}  
		 
template<> inline const Hyp cast<Hyp,Tnv_Vec> (const Tnv_Vec& a) {
		return Hyp (a[0],0);
}  
		 
template<> inline const Hyp cast<Hyp,Lin_Pln> (const Lin_Pln& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Lin_Flp> (const Lin_Flp& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Lin_Dll> (const Lin_Dll& a) {
		return Hyp (0,a[0]);
}  
		 
template<> inline const Hyp cast<Hyp,Pln_Dfp> (const Pln_Dfp& a) {
		return Hyp (0,a[0]);
}  
		 
template<> inline const Hyp cast<Hyp,Vec_Afl> (const Vec_Afl& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Vec_Dap> (const Vec_Dap& a) {
		return Hyp (a[0],0);
}  
		 
template<> inline const Hyp cast<Hyp,Biv_Afp> (const Biv_Afp& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Biv_Dal> (const Biv_Dal& a) {
		return Hyp (a[0],0);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Hyp (a[0],a[1]);
}  
		 
		

		
inline Pss involute (const Pss& a) { 
	return Pss (-a[0]);
}
			
		 
		

		
inline Pss reverse (const Pss& a) { 
	return Pss (a[0]);
}
			
		 
		

		
inline Pss conjugate (const Pss& a) { 
	return Pss (-a[0]);
}
			
		 
template<> inline const Pss cast<Pss,Rtc> (const Rtc& a) {
		return Pss (a[15]);
}  
		 
template<> inline const Pss cast<Pss,Ori_Sph> (const Ori_Sph& a) {
		return Pss (a[4]);
}  
		 
template<> inline const Pss cast<Pss,Ori_Drt> (const Ori_Drt& a) {
		return Pss (a[1]);
}  
		 
template<> inline const Pss cast<Pss,Inf_Sph> (const Inf_Sph& a) {
		return Pss (a[4]);
}  
		 
template<> inline const Pss cast<Pss,Mnk_Cir> (const Mnk_Cir& a) {
		return Pss (a[9]);
}  
		 
template<> inline const Pss cast<Pss,Mnk_Dfp> (const Mnk_Dfp& a) {
		return Pss (a[3]);
}  
		 
template<> inline const Pss cast<Pss,Mnk_Afp> (const Mnk_Afp& a) {
		return Pss (a[3]);
}  
		 
template<> inline const Pss cast<Pss,Hyp_Sph> (const Hyp_Sph& a) {
		return Pss (a[7]);
}  
		 
template<> inline const Pss cast<Pss,Pnt_Sph> (const Pnt_Sph& a) {
		return Pss (a[10]);
}  
		 
template<> inline const Pss cast<Pss,Par_Drb> (const Par_Drb& a) {
		return Pss (a[11]);
}  
		 
template<> inline const Pss cast<Pss,Par_Tnb> (const Par_Tnb& a) {
		return Pss (a[11]);
}  
		 
template<> inline const Pss cast<Pss,Par_Dfp> (const Par_Dfp& a) {
		return Pss (a[14]);
}  
		 
template<> inline const Pss cast<Pss,Par_Afp> (const Par_Afp& a) {
		return Pss (a[14]);
}  
		 
template<> inline const Pss cast<Pss,Par_Mnv> (const Par_Mnv& a) {
		return Pss (a[14]);
}  
		 
template<> inline const Pss cast<Pss,Sph_Vec> (const Sph_Vec& a) {
		return Pss (a[9]);
}  
		 
template<> inline const Pss cast<Pss,Sta_Mnv> (const Sta_Mnv& a) {
		return Pss (a[11]);
}  
		 
template<> inline const Pss cast<Pss,Drv_Tnb> (const Drv_Tnb& a) {
		return Pss (a[7]);
}  
		 
template<> inline const Pss cast<Pss,Drv_Afp> (const Drv_Afp& a) {
		return Pss (a[10]);
}  
		 
template<> inline const Pss cast<Pss,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Pss (a[10]);
}  
		 
template<> inline const Pss cast<Pss,Lin_Dll> (const Lin_Dll& a) {
		return Pss (a[7]);
}  
		 
template<> inline const Pss cast<Pss,Pln_Dlp> (const Pln_Dlp& a) {
		return Pss (a[6]);
}  
		 
template<> inline const Pss cast<Pss,Flp_Afp> (const Flp_Afp& a) {
		return Pss (a[13]);
}  
		 
template<> inline const Pss cast<Pss,Vec_Daf> (const Vec_Daf& a) {
		return Pss (a[6]);
}  
		 
template<> inline const Pss cast<Pss,Biv_Dal> (const Biv_Dal& a) {
		return Pss (a[7]);
}  
		 
template<> inline const Pss cast<Pss,Biv_Mnv> (const Biv_Mnv& a) {
		return Pss (a[3]);
}  
		 
template<> inline const Pss cast<Pss,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Pss (a[10]);
}  
		 
template<> inline const Pss cast<Pss,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Pss (a[13]);
}  
		 
template<> inline const Pss cast<Pss,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Pss (a[13]);
}  
		 
		

		
inline Pnt involute (const Pnt& a) { 
	return Pnt (-a[0],-a[1],-a[2],-a[3],-a[4]);
}
			
		 
		

		
inline Pnt reverse (const Pnt& a) { 
	return Pnt (a[0],a[1],a[2],a[3],a[4]);
}
			
		 
		

		
inline Pnt conjugate (const Pnt& a) { 
	return Pnt (-a[0],-a[1],-a[2],-a[3],-a[4]);
}
			
		 
template<> inline const Pnt cast<Pnt,Rtc> (const Rtc& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Ori> (const Ori& a) {
		return Pnt (0,0,0,a[0],0);
}  
		 
template<> inline const Pnt cast<Pnt,Inf> (const Inf& a) {
		return Pnt (0,0,0,0,a[0]);
}  
		 
template<> inline const Pnt cast<Pnt,Hyp> (const Hyp& a) {
		return Pnt (0,0,0,a[0],a[1]);
}  
		 
template<> inline const Pnt cast<Pnt,Dlp> (const Dlp& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Vec> (const Vec& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Aff> (const Aff& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Ori_Par> (const Ori_Par& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Ori_Sta> (const Ori_Sta& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Ori_Drv> (const Ori_Drv& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Ori_Flp> (const Ori_Flp& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Inf_Par> (const Inf_Par& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Inf_Sta> (const Inf_Sta& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Inf_Dap> (const Inf_Dap& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Pnt (0,0,0,a[0],a[1]);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Cir> (const Mnk_Cir& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Lin> (const Mnk_Lin& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Pnt (0,0,0,0,a[0]);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Aff> (const Mnk_Aff& a) {
		return Pnt (0,0,0,a[0],0);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Dal> (const Mnk_Dal& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Hyp_Par> (const Hyp_Par& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Hyp_Sta> (const Hyp_Sta& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Hyp_Flp> (const Hyp_Flp& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Pnt_Par> (const Pnt_Par& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Pnt_Flp> (const Pnt_Flp& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Pnt_Dll> (const Pnt_Dll& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Pnt_Biv> (const Pnt_Biv& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Pnt_Afl> (const Pnt_Afl& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Pnt_Dap> (const Pnt_Dap& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Par_Drb> (const Par_Drb& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Par_Tnb> (const Par_Tnb& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Par_Dfp> (const Par_Dfp& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Par_Afp> (const Par_Afp& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Par_Mnv> (const Par_Mnv& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Sta_Vec> (const Sta_Vec& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Sta_Tri> (const Sta_Tri& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Sta_Mnv> (const Sta_Mnv& a) {
		return Pnt (0,0,0,a[0],a[1]);
}  
		 
template<> inline const Pnt cast<Pnt,Drv_Tnb> (const Drv_Tnb& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Drv_Lin> (const Drv_Lin& a) {
		return Pnt (0,0,0,0,a[0]);
}  
		 
template<> inline const Pnt cast<Pnt,Drv_Afp> (const Drv_Afp& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Tnv_Vec> (const Tnv_Vec& a) {
		return Pnt (0,0,0,a[0],0);
}  
		 
template<> inline const Pnt cast<Pnt,Lin_Pln> (const Lin_Pln& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Lin_Flp> (const Lin_Flp& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Lin_Dll> (const Lin_Dll& a) {
		return Pnt (0,0,0,0,a[0]);
}  
		 
template<> inline const Pnt cast<Pnt,Pln_Dfp> (const Pln_Dfp& a) {
		return Pnt (0,0,0,0,a[0]);
}  
		 
template<> inline const Pnt cast<Pnt,Pln_Mnv> (const Pln_Mnv& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Flp_Afp> (const Flp_Afp& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Vec_Biv> (const Vec_Biv& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Vec_Afl> (const Vec_Afl& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Vec_Dap> (const Vec_Dap& a) {
		return Pnt (0,0,0,a[0],0);
}  
		 
template<> inline const Pnt cast<Pnt,Biv_Aff> (const Biv_Aff& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Biv_Afp> (const Biv_Afp& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Biv_Dal> (const Biv_Dal& a) {
		return Pnt (0,0,0,a[0],0);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Pnt (0,0,0,a[0],a[1]);
}  
		 
		

		
inline Par involute (const Par& a) { 
	return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}
			
		 
		

		
inline Par reverse (const Par& a) { 
	return Par (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9]);
}
			
		 
		

		
inline Par conjugate (const Par& a) { 
	return Par (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9]);
}
			
		 
template<> inline const Par cast<Par,Rot> (const Rot& a) {
		return Par (a[1],a[2],a[3],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Mot> (const Mot& a) {
		return Par (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Par cast<Par,Dil> (const Dil& a) {
		return Par (0,0,0,0,0,0,0,0,0,a[1]);
}  
		 
template<> inline const Par cast<Par,Trv> (const Trv& a) {
		return Par (0,0,0,a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Mtd> (const Mtd& a) {
		return Par (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Par cast<Par,Trs> (const Trs& a) {
		return Par (0,0,0,0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Par cast<Par,Mtt> (const Mtt& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Par cast<Par,Rtt> (const Rtt& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Rtd> (const Rtd& a) {
		return Par (a[1],a[2],a[3],0,0,0,0,0,0,a[4]);
}  
		 
template<> inline const Par cast<Par,Tvd> (const Tvd& a) {
		return Par (0,0,0,a[1],a[2],a[3],0,0,0,a[4]);
}  
		 
template<> inline const Par cast<Par,Tsd> (const Tsd& a) {
		return Par (0,0,0,0,0,0,a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Par cast<Par,Trt> (const Trt& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Par cast<Par,Rvd> (const Rvd& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7]);
}  
		 
template<> inline const Par cast<Par,Tst> (const Tst& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Par cast<Par,Tvt> (const Tvt& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Par cast<Par,Bst> (const Bst& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Par cast<Par,Mnk> (const Mnk& a) {
		return Par (0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Par cast<Par,Sta> (const Sta& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Par cast<Par,Drv> (const Drv& a) {
		return Par (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Par cast<Par,Tnv> (const Tnv& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Flp> (const Flp& a) {
		return Par (0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Par cast<Par,Dll> (const Dll& a) {
		return Par (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Biv> (const Biv& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Afl> (const Afl& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Dap> (const Dap& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Par cast<Par,Ori_Cir> (const Ori_Cir& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Ori_Drb> (const Ori_Drb& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Ori_Lin> (const Ori_Lin& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Ori_Dfp> (const Ori_Dfp& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Inf_Cir> (const Inf_Cir& a) {
		return Par (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Inf_Afp> (const Inf_Afp& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Inf_Dal> (const Inf_Dal& a) {
		return Par (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Mnk_Par> (const Mnk_Par& a) {
		return Par (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Par cast<Par,Mnk_Sph> (const Mnk_Sph& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Mnk_Sta> (const Mnk_Sta& a) {
		return Par (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Mnk_Pln> (const Mnk_Pln& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Mnk_Dll> (const Mnk_Dll& a) {
		return Par (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Par cast<Par,Mnk_Afl> (const Mnk_Afl& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Mnk_Daf> (const Mnk_Daf& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Par (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Par cast<Par,Hyp_Cir> (const Hyp_Cir& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Par cast<Par,Hyp_Lin> (const Hyp_Lin& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Par cast<Par,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Hyp_Vec> (const Hyp_Vec& a) {
		return Par (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Pnt_Cir> (const Pnt_Cir& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Par cast<Par,Pnt_Lin> (const Pnt_Lin& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Par cast<Par,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Par (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Pnt_Vec> (const Pnt_Vec& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Pnt_Afp> (const Pnt_Afp& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Pnt_Dal> (const Pnt_Dal& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Par cast<Par,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Par (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Par cast<Par,Par_Biv> (const Par_Biv& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Sta_Biv> (const Sta_Biv& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Drv_Pln> (const Drv_Pln& a) {
		return Par (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Par cast<Par,Drv_Dap> (const Drv_Dap& a) {
		return Par (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Par cast<Par,Tnv_Flp> (const Tnv_Flp& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7]);
}  
		 
template<> inline const Par cast<Par,Tnv_Biv> (const Tnv_Biv& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Lin_Dfp> (const Lin_Dfp& a) {
		return Par (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Par cast<Par,Lin_Dlp> (const Lin_Dlp& a) {
		return Par (0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Par cast<Par,Pln_Pln> (const Pln_Pln& a) {
		return Par (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Par cast<Par,Pln_Flp> (const Pln_Flp& a) {
		return Par (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Pln_Biv> (const Pln_Biv& a) {
		return Par (0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Par cast<Par,Vec_Aff> (const Vec_Aff& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Vec_Afp> (const Vec_Afp& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Vec_Dal> (const Vec_Dal& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Par cast<Par,Vec_Mnv> (const Vec_Mnv& a) {
		return Par (0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Par cast<Par,Biv_Dap> (const Biv_Dap& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Biv_Daf> (const Biv_Daf& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Par cast<Par,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Par (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Par cast<Par,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Par (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Par (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}  
		 
		

		
inline Cir involute (const Cir& a) { 
	return Cir (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9]);
}
			
		 
		

		
inline Cir reverse (const Cir& a) { 
	return Cir (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8],-a[9]);
}
			
		 
		

		
inline Cir conjugate (const Cir& a) { 
	return Cir (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}
			
		 
template<> inline const Cir cast<Cir,Rtc> (const Rtc& a) {
		return Cir (a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Cir cast<Cir,Drb> (const Drb& a) {
		return Cir (0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Tnb> (const Tnb& a) {
		return Cir (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Lin> (const Lin& a) {
		return Cir (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Cir cast<Cir,Dfp> (const Dfp& a) {
		return Cir (0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Cir cast<Cir,Tri> (const Tri& a) {
		return Cir (0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Cir cast<Cir,Afp> (const Afp& a) {
		return Cir (a[0],a[1],a[2],0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Cir cast<Cir,Dal> (const Dal& a) {
		return Cir (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Cir cast<Cir,Mnv> (const Mnv& a) {
		return Cir (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Cir cast<Cir,Ori_Par> (const Ori_Par& a) {
		return Cir (a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],0);
}  
		 
template<> inline const Cir cast<Cir,Ori_Sph> (const Ori_Sph& a) {
		return Cir (a[0],a[1],a[2],0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Cir cast<Cir,Ori_Sta> (const Ori_Sta& a) {
		return Cir (a[3],a[4],a[5],0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Cir cast<Cir,Ori_Drv> (const Ori_Drv& a) {
		return Cir (0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Cir cast<Cir,Ori_Drt> (const Ori_Drt& a) {
		return Cir (0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Cir cast<Cir,Ori_Flp> (const Ori_Flp& a) {
		return Cir (0,0,0,0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Inf_Par> (const Inf_Par& a) {
		return Cir (0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Cir cast<Cir,Inf_Sph> (const Inf_Sph& a) {
		return Cir (0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Cir cast<Cir,Inf_Sta> (const Inf_Sta& a) {
		return Cir (0,0,0,a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Cir cast<Cir,Inf_Dap> (const Inf_Dap& a) {
		return Cir (0,0,0,0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Cir (0,0,0,0,0,0,a[2],a[3],a[4],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Cir> (const Mnk_Cir& a) {
		return Cir (a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Lin> (const Mnk_Lin& a) {
		return Cir (0,0,0,a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Dfp> (const Mnk_Dfp& a) {
		return Cir (0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Cir (0,0,0,0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Aff> (const Mnk_Aff& a) {
		return Cir (0,0,0,0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Afp> (const Mnk_Afp& a) {
		return Cir (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Dal> (const Mnk_Dal& a) {
		return Cir (a[3],a[4],a[5],0,0,0,0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Hyp_Par> (const Hyp_Par& a) {
		return Cir (a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Cir cast<Cir,Hyp_Sph> (const Hyp_Sph& a) {
		return Cir (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,a[6]);
}  
		 
template<> inline const Cir cast<Cir,Hyp_Sta> (const Hyp_Sta& a) {
		return Cir (a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],0);
}  
		 
template<> inline const Cir cast<Cir,Hyp_Flp> (const Hyp_Flp& a) {
		return Cir (0,0,0,0,0,0,a[5],a[6],a[7],0);
}  
		 
template<> inline const Cir cast<Cir,Hyp_Biv> (const Hyp_Biv& a) {
		return Cir (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Pss_Sta> (const Pss_Sta& a) {
		return Cir (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Cir cast<Cir,Pnt_Par> (const Pnt_Par& a) {
		return Cir (a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Cir cast<Cir,Pnt_Sph> (const Pnt_Sph& a) {
		return Cir (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Cir cast<Cir,Pnt_Flp> (const Pnt_Flp& a) {
		return Cir (0,0,0,a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Cir cast<Cir,Pnt_Dll> (const Pnt_Dll& a) {
		return Cir (a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Cir cast<Cir,Pnt_Biv> (const Pnt_Biv& a) {
		return Cir (a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,a[9]);
}  
		 
template<> inline const Cir cast<Cir,Pnt_Afl> (const Pnt_Afl& a) {
		return Cir (a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Cir cast<Cir,Pnt_Dap> (const Pnt_Dap& a) {
		return Cir (a[5],a[6],a[7],0,0,0,a[8],a[9],a[10],0);
}  
		 
template<> inline const Cir cast<Cir,Par_Drb> (const Par_Drb& a) {
		return Cir (0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Cir cast<Cir,Par_Tnb> (const Par_Tnb& a) {
		return Cir (a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Cir cast<Cir,Par_Dfp> (const Par_Dfp& a) {
		return Cir (a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Cir cast<Cir,Par_Afp> (const Par_Afp& a) {
		return Cir (a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Cir cast<Cir,Par_Mnv> (const Par_Mnv& a) {
		return Cir (a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Cir cast<Cir,Sph_Vec> (const Sph_Vec& a) {
		return Cir (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Cir cast<Cir,Sta_Vec> (const Sta_Vec& a) {
		return Cir (a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,a[11]);
}  
		 
template<> inline const Cir cast<Cir,Sta_Tri> (const Sta_Tri& a) {
		return Cir (a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Sta_Mnv> (const Sta_Mnv& a) {
		return Cir (a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Cir cast<Cir,Drv_Tnb> (const Drv_Tnb& a) {
		return Cir (0,0,0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Cir cast<Cir,Drv_Lin> (const Drv_Lin& a) {
		return Cir (0,0,0,a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Drv_Afp> (const Drv_Afp& a) {
		return Cir (0,0,0,a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Cir cast<Cir,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Cir (a[3],a[4],a[5],0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Cir cast<Cir,Tnv_Vec> (const Tnv_Vec& a) {
		return Cir (a[1],a[2],a[3],0,0,0,0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Lin_Pln> (const Lin_Pln& a) {
		return Cir (0,0,0,a[4],a[5],a[6],0,0,0,a[7]);
}  
		 
template<> inline const Cir cast<Cir,Lin_Flp> (const Lin_Flp& a) {
		return Cir (0,0,0,a[4],a[5],a[6],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Lin_Dll> (const Lin_Dll& a) {
		return Cir (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Pln_Dfp> (const Pln_Dfp& a) {
		return Cir (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Pln_Dlp> (const Pln_Dlp& a) {
		return Cir (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Cir cast<Cir,Pln_Mnv> (const Pln_Mnv& a) {
		return Cir (0,0,0,a[3],a[4],a[5],0,0,0,a[6]);
}  
		 
template<> inline const Cir cast<Cir,Flp_Afp> (const Flp_Afp& a) {
		return Cir (a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Cir cast<Cir,Vec_Biv> (const Vec_Biv& a) {
		return Cir (0,0,0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Cir cast<Cir,Vec_Afl> (const Vec_Afl& a) {
		return Cir (a[4],a[5],a[6],0,0,0,0,0,0,a[7]);
}  
		 
template<> inline const Cir cast<Cir,Vec_Dap> (const Vec_Dap& a) {
		return Cir (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Vec_Daf> (const Vec_Daf& a) {
		return Cir (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Cir cast<Cir,Biv_Aff> (const Biv_Aff& a) {
		return Cir (a[3],a[4],a[5],0,0,0,0,0,0,a[6]);
}  
		 
template<> inline const Cir cast<Cir,Biv_Afp> (const Biv_Afp& a) {
		return Cir (a[4],a[5],a[6],0,0,0,0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Biv_Dal> (const Biv_Dal& a) {
		return Cir (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Biv_Mnv> (const Biv_Mnv& a) {
		return Cir (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Cir (a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,a[9]);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Cir (a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Cir (a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Cir cast<Cir,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Cir (a[2],a[3],a[4],a[5],a[6],a[7],0,0,0,0);
}  
		 
		

		
inline Sph involute (const Sph& a) { 
	return Sph (a[0],a[1],a[2],a[3],a[4]);
}
			
		 
		

		
inline Sph reverse (const Sph& a) { 
	return Sph (a[0],a[1],a[2],a[3],a[4]);
}
			
		 
		

		
inline Sph conjugate (const Sph& a) { 
	return Sph (a[0],a[1],a[2],a[3],a[4]);
}
			
		 
template<> inline const Sph cast<Sph,Mot> (const Mot& a) {
		return Sph (0,0,0,0,a[7]);
}  
		 
template<> inline const Sph cast<Sph,Mtd> (const Mtd& a) {
		return Sph (a[8],a[9],a[10],0,a[11]);
}  
		 
template<> inline const Sph cast<Sph,Mtt> (const Mtt& a) {
		return Sph (a[11],a[12],a[13],a[14],a[15]);
}  
		 
template<> inline const Sph cast<Sph,Rtt> (const Rtt& a) {
		return Sph (0,0,0,a[7],0);
}  
		 
template<> inline const Sph cast<Sph,Rtd> (const Rtd& a) {
		return Sph (a[5],a[6],a[7],0,0);
}  
		 
template<> inline const Sph cast<Sph,Trt> (const Trt& a) {
		return Sph (a[11],a[12],a[13],0,0);
}  
		 
template<> inline const Sph cast<Sph,Rvd> (const Rvd& a) {
		return Sph (a[8],a[9],a[10],a[11],0);
}  
		 
template<> inline const Sph cast<Sph,Tst> (const Tst& a) {
		return Sph (a[11],a[12],a[13],a[14],0);
}  
		 
template<> inline const Sph cast<Sph,Tvt> (const Tvt& a) {
		return Sph (a[11],a[12],a[13],0,a[14]);
}  
		 
template<> inline const Sph cast<Sph,Drt> (const Drt& a) {
		return Sph (0,0,0,0,a[0]);
}  
		 
template<> inline const Sph cast<Sph,Tnt> (const Tnt& a) {
		return Sph (0,0,0,a[0],0);
}  
		 
template<> inline const Sph cast<Sph,Pln> (const Pln& a) {
		return Sph (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Sph cast<Sph,Daf> (const Daf& a) {
		return Sph (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Sph cast<Sph,Ori_Cir> (const Ori_Cir& a) {
		return Sph (a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Sph cast<Sph,Ori_Drb> (const Ori_Drb& a) {
		return Sph (a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Sph cast<Sph,Ori_Lin> (const Ori_Lin& a) {
		return Sph (a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Sph cast<Sph,Ori_Dfp> (const Ori_Dfp& a) {
		return Sph (a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Sph cast<Sph,Inf_Cir> (const Inf_Cir& a) {
		return Sph (a[6],a[7],a[8],0,a[9]);
}  
		 
template<> inline const Sph cast<Sph,Inf_Afp> (const Inf_Afp& a) {
		return Sph (a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Sph cast<Sph,Inf_Dal> (const Inf_Dal& a) {
		return Sph (a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Par> (const Mnk_Par& a) {
		return Sph (a[7],a[8],a[9],0,0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Sph> (const Mnk_Sph& a) {
		return Sph (0,0,0,a[3],a[4]);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Sta> (const Mnk_Sta& a) {
		return Sph (a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Pln> (const Mnk_Pln& a) {
		return Sph (0,0,0,0,a[3]);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Dll> (const Mnk_Dll& a) {
		return Sph (a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Biv> (const Mnk_Biv& a) {
		return Sph (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Afl> (const Mnk_Afl& a) {
		return Sph (a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Daf> (const Mnk_Daf& a) {
		return Sph (0,0,0,a[3],0);
}  
		 
template<> inline const Sph cast<Sph,Hyp_Pss> (const Hyp_Pss& a) {
		return Sph (0,0,0,a[0],a[1]);
}  
		 
template<> inline const Sph cast<Sph,Hyp_Cir> (const Hyp_Cir& a) {
		return Sph (a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Sph cast<Sph,Hyp_Lin> (const Hyp_Lin& a) {
		return Sph (a[9],a[10],a[11],0,0);
}  
		 
template<> inline const Sph cast<Sph,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Sph (a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Sph cast<Sph,Pnt_Cir> (const Pnt_Cir& a) {
		return Sph (a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Sph cast<Sph,Pnt_Lin> (const Pnt_Lin& a) {
		return Sph (a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Sph cast<Sph,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Sph (a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Sph cast<Sph,Pnt_Afp> (const Pnt_Afp& a) {
		return Sph (a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Sph cast<Sph,Pnt_Dal> (const Pnt_Dal& a) {
		return Sph (a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Sph cast<Sph,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Sph (a[7],a[8],a[9],0,0);
}  
		 
template<> inline const Sph cast<Sph,Par_Biv> (const Par_Biv& a) {
		return Sph (a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Sph cast<Sph,Sta_Biv> (const Sta_Biv& a) {
		return Sph (0,0,0,a[10],a[11]);
}  
		 
template<> inline const Sph cast<Sph,Drv_Pln> (const Drv_Pln& a) {
		return Sph (0,0,0,0,a[3]);
}  
		 
template<> inline const Sph cast<Sph,Drv_Dap> (const Drv_Dap& a) {
		return Sph (a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Sph cast<Sph,Tnv_Flp> (const Tnv_Flp& a) {
		return Sph (a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Sph cast<Sph,Tnv_Biv> (const Tnv_Biv& a) {
		return Sph (0,0,0,a[3],0);
}  
		 
template<> inline const Sph cast<Sph,Lin_Dfp> (const Lin_Dfp& a) {
		return Sph (a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Sph cast<Sph,Lin_Dlp> (const Lin_Dlp& a) {
		return Sph (a[4],a[5],a[6],0,a[7]);
}  
		 
template<> inline const Sph cast<Sph,Pln_Flp> (const Pln_Flp& a) {
		return Sph (0,0,0,0,a[6]);
}  
		 
template<> inline const Sph cast<Sph,Pln_Biv> (const Pln_Biv& a) {
		return Sph (a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Sph cast<Sph,Vec_Afp> (const Vec_Afp& a) {
		return Sph (0,0,0,a[6],0);
}  
		 
template<> inline const Sph cast<Sph,Vec_Dal> (const Vec_Dal& a) {
		return Sph (a[4],a[5],a[6],a[7],0);
}  
		 
template<> inline const Sph cast<Sph,Vec_Mnv> (const Vec_Mnv& a) {
		return Sph (a[1],a[2],a[3],0,0);
}  
		 
template<> inline const Sph cast<Sph,Biv_Dap> (const Biv_Dap& a) {
		return Sph (a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Sph cast<Sph,Biv_Daf> (const Biv_Daf& a) {
		return Sph (a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Sph (a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Sph (a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Sph (a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Sph cast<Sph,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Sph (0,0,0,a[6],a[7]);
}  
		 
template<> inline const Sph cast<Sph,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Sph (a[8],a[9],a[10],0,0);
}  
		 
		

		
inline Sta involute (const Sta& a) { 
	return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}
			
		 
		

		
inline Sta reverse (const Sta& a) { 
	return Sta (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8]);
}
			
		 
		

		
inline Sta conjugate (const Sta& a) { 
	return Sta (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5],-a[6],-a[7],-a[8]);
}
			
		 
template<> inline const Sta cast<Sta,Rot> (const Rot& a) {
		return Sta (a[1],a[2],a[3],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Mot> (const Mot& a) {
		return Sta (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Sta cast<Sta,Trv> (const Trv& a) {
		return Sta (0,0,0,a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Mtd> (const Mtd& a) {
		return Sta (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Sta cast<Sta,Trs> (const Trs& a) {
		return Sta (0,0,0,0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Sta cast<Sta,Mtt> (const Mtt& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Rtt> (const Rtt& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Rtd> (const Rtd& a) {
		return Sta (a[1],a[2],a[3],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Tvd> (const Tvd& a) {
		return Sta (0,0,0,a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Tsd> (const Tsd& a) {
		return Sta (0,0,0,0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Sta cast<Sta,Trt> (const Trt& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Rvd> (const Rvd& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Tst> (const Tst& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Tvt> (const Tvt& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Bst> (const Bst& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Par> (const Par& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Drv> (const Drv& a) {
		return Sta (0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Sta cast<Sta,Tnv> (const Tnv& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Flp> (const Flp& a) {
		return Sta (0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Sta cast<Sta,Dll> (const Dll& a) {
		return Sta (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Biv> (const Biv& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Afl> (const Afl& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Dap> (const Dap& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Ori_Cir> (const Ori_Cir& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Ori_Drb> (const Ori_Drb& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Ori_Lin> (const Ori_Lin& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Ori_Dfp> (const Ori_Dfp& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Inf_Cir> (const Inf_Cir& a) {
		return Sta (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Inf_Afp> (const Inf_Afp& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Inf_Dal> (const Inf_Dal& a) {
		return Sta (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Par> (const Mnk_Par& a) {
		return Sta (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Sph> (const Mnk_Sph& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Sta> (const Mnk_Sta& a) {
		return Sta (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Pln> (const Mnk_Pln& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Dll> (const Mnk_Dll& a) {
		return Sta (0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Afl> (const Mnk_Afl& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Daf> (const Mnk_Daf& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Sta (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Cir> (const Hyp_Cir& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Lin> (const Hyp_Lin& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Vec> (const Hyp_Vec& a) {
		return Sta (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Cir> (const Pnt_Cir& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Lin> (const Pnt_Lin& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Sta (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Vec> (const Pnt_Vec& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Afp> (const Pnt_Afp& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Dal> (const Pnt_Dal& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Sta (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Par_Biv> (const Par_Biv& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Sta_Biv> (const Sta_Biv& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Drv_Pln> (const Drv_Pln& a) {
		return Sta (0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Sta cast<Sta,Drv_Dap> (const Drv_Dap& a) {
		return Sta (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Sta cast<Sta,Tnv_Flp> (const Tnv_Flp& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Tnv_Biv> (const Tnv_Biv& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Lin_Dfp> (const Lin_Dfp& a) {
		return Sta (0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Sta cast<Sta,Lin_Dlp> (const Lin_Dlp& a) {
		return Sta (0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Sta cast<Sta,Pln_Pln> (const Pln_Pln& a) {
		return Sta (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Sta cast<Sta,Pln_Flp> (const Pln_Flp& a) {
		return Sta (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Pln_Biv> (const Pln_Biv& a) {
		return Sta (0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Sta cast<Sta,Vec_Aff> (const Vec_Aff& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Vec_Afp> (const Vec_Afp& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Vec_Dal> (const Vec_Dal& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Biv_Dap> (const Biv_Dap& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Biv_Daf> (const Biv_Daf& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Sta (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Sta (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Sta (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
		

		
inline Drv involute (const Drv& a) { 
	return Drv (a[0],a[1],a[2]);
}
			
		 
		

		
inline Drv reverse (const Drv& a) { 
	return Drv (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Drv conjugate (const Drv& a) { 
	return Drv (-a[0],-a[1],-a[2]);
}
			
		 
template<> inline const Drv cast<Drv,Mot> (const Mot& a) {
		return Drv (a[4],a[5],a[6]);
}  
		 
template<> inline const Drv cast<Drv,Mtd> (const Mtd& a) {
		return Drv (a[4],a[5],a[6]);
}  
		 
template<> inline const Drv cast<Drv,Trs> (const Trs& a) {
		return Drv (a[1],a[2],a[3]);
}  
		 
template<> inline const Drv cast<Drv,Mtt> (const Mtt& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Tsd> (const Tsd& a) {
		return Drv (a[1],a[2],a[3]);
}  
		 
template<> inline const Drv cast<Drv,Trt> (const Trt& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Tst> (const Tst& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Tvt> (const Tvt& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Bst> (const Bst& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Par> (const Par& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Sta> (const Sta& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Flp> (const Flp& a) {
		return Drv (a[0],a[1],a[2]);
}  
		 
template<> inline const Drv cast<Drv,Dll> (const Dll& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Inf_Cir> (const Inf_Cir& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Inf_Dal> (const Inf_Dal& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Par> (const Mnk_Par& a) {
		return Drv (a[4],a[5],a[6]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Sta> (const Mnk_Sta& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Dll> (const Mnk_Dll& a) {
		return Drv (a[0],a[1],a[2]);
}  
		 
template<> inline const Drv cast<Drv,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Drv (a[4],a[5],a[6]);
}  
		 
template<> inline const Drv cast<Drv,Hyp_Cir> (const Hyp_Cir& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Hyp_Lin> (const Hyp_Lin& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Hyp_Vec> (const Hyp_Vec& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Pnt_Cir> (const Pnt_Cir& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Pnt_Lin> (const Pnt_Lin& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Pnt_Vec> (const Pnt_Vec& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Pnt_Dal> (const Pnt_Dal& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Par_Biv> (const Par_Biv& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Sta_Biv> (const Sta_Biv& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Drv_Pln> (const Drv_Pln& a) {
		return Drv (a[0],a[1],a[2]);
}  
		 
template<> inline const Drv cast<Drv,Drv_Dap> (const Drv_Dap& a) {
		return Drv (a[4],a[5],a[6]);
}  
		 
template<> inline const Drv cast<Drv,Lin_Dfp> (const Lin_Dfp& a) {
		return Drv (a[0],a[1],a[2]);
}  
		 
template<> inline const Drv cast<Drv,Lin_Dlp> (const Lin_Dlp& a) {
		return Drv (a[0],a[1],a[2]);
}  
		 
template<> inline const Drv cast<Drv,Pln_Pln> (const Pln_Pln& a) {
		return Drv (a[4],a[5],a[6]);
}  
		 
template<> inline const Drv cast<Drv,Pln_Flp> (const Pln_Flp& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Pln_Biv> (const Pln_Biv& a) {
		return Drv (a[0],a[1],a[2]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Drv (a[4],a[5],a[6]);
}  
		 
		

		
inline Drb involute (const Drb& a) { 
	return Drb (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Drb reverse (const Drb& a) { 
	return Drb (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Drb conjugate (const Drb& a) { 
	return Drb (a[0],a[1],a[2]);
}
			
		 
template<> inline const Drb cast<Drb,Rtc> (const Rtc& a) {
		return Drb (a[8],a[9],a[10]);
}  
		 
template<> inline const Drb cast<Drb,Cir> (const Cir& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Lin> (const Lin& a) {
		return Drb (a[0],a[1],a[2]);
}  
		 
template<> inline const Drb cast<Drb,Dfp> (const Dfp& a) {
		return Drb (a[0],a[1],a[2]);
}  
		 
template<> inline const Drb cast<Drb,Inf_Par> (const Inf_Par& a) {
		return Drb (a[4],a[5],a[6]);
}  
		 
template<> inline const Drb cast<Drb,Inf_Sph> (const Inf_Sph& a) {
		return Drb (a[0],a[1],a[2]);
}  
		 
template<> inline const Drb cast<Drb,Inf_Sta> (const Inf_Sta& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Mnk_Cir> (const Mnk_Cir& a) {
		return Drb (a[6],a[7],a[8]);
}  
		 
template<> inline const Drb cast<Drb,Mnk_Lin> (const Mnk_Lin& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Mnk_Dfp> (const Mnk_Dfp& a) {
		return Drb (a[0],a[1],a[2]);
}  
		 
template<> inline const Drb cast<Drb,Hyp_Par> (const Hyp_Par& a) {
		return Drb (a[8],a[9],a[10]);
}  
		 
template<> inline const Drb cast<Drb,Hyp_Sph> (const Hyp_Sph& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Hyp_Sta> (const Hyp_Sta& a) {
		return Drb (a[6],a[7],a[8]);
}  
		 
template<> inline const Drb cast<Drb,Hyp_Biv> (const Hyp_Biv& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Pss_Sta> (const Pss_Sta& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Pnt_Par> (const Pnt_Par& a) {
		return Drb (a[8],a[9],a[10]);
}  
		 
template<> inline const Drb cast<Drb,Pnt_Sph> (const Pnt_Sph& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Pnt_Flp> (const Pnt_Flp& a) {
		return Drb (a[5],a[6],a[7]);
}  
		 
template<> inline const Drb cast<Drb,Pnt_Dll> (const Pnt_Dll& a) {
		return Drb (a[7],a[8],a[9]);
}  
		 
template<> inline const Drb cast<Drb,Pnt_Biv> (const Pnt_Biv& a) {
		return Drb (a[6],a[7],a[8]);
}  
		 
template<> inline const Drb cast<Drb,Pnt_Afl> (const Pnt_Afl& a) {
		return Drb (a[7],a[8],a[9]);
}  
		 
template<> inline const Drb cast<Drb,Par_Drb> (const Par_Drb& a) {
		return Drb (a[4],a[5],a[6]);
}  
		 
template<> inline const Drb cast<Drb,Par_Dfp> (const Par_Dfp& a) {
		return Drb (a[7],a[8],a[9]);
}  
		 
template<> inline const Drb cast<Drb,Par_Afp> (const Par_Afp& a) {
		return Drb (a[7],a[8],a[9]);
}  
		 
template<> inline const Drb cast<Drb,Par_Mnv> (const Par_Mnv& a) {
		return Drb (a[8],a[9],a[10]);
}  
		 
template<> inline const Drb cast<Drb,Sph_Vec> (const Sph_Vec& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Sta_Vec> (const Sta_Vec& a) {
		return Drb (a[8],a[9],a[10]);
}  
		 
template<> inline const Drb cast<Drb,Sta_Tri> (const Sta_Tri& a) {
		return Drb (a[6],a[7],a[8]);
}  
		 
template<> inline const Drb cast<Drb,Sta_Mnv> (const Sta_Mnv& a) {
		return Drb (a[5],a[6],a[7]);
}  
		 
template<> inline const Drb cast<Drb,Drv_Lin> (const Drv_Lin& a) {
		return Drb (a[1],a[2],a[3]);
}  
		 
template<> inline const Drb cast<Drb,Drv_Afp> (const Drv_Afp& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Lin_Pln> (const Lin_Pln& a) {
		return Drb (a[4],a[5],a[6]);
}  
		 
template<> inline const Drb cast<Drb,Lin_Flp> (const Lin_Flp& a) {
		return Drb (a[4],a[5],a[6]);
}  
		 
template<> inline const Drb cast<Drb,Lin_Dll> (const Lin_Dll& a) {
		return Drb (a[1],a[2],a[3]);
}  
		 
template<> inline const Drb cast<Drb,Pln_Dfp> (const Pln_Dfp& a) {
		return Drb (a[1],a[2],a[3]);
}  
		 
template<> inline const Drb cast<Drb,Pln_Dlp> (const Pln_Dlp& a) {
		return Drb (a[0],a[1],a[2]);
}  
		 
template<> inline const Drb cast<Drb,Pln_Mnv> (const Pln_Mnv& a) {
		return Drb (a[3],a[4],a[5]);
}  
		 
template<> inline const Drb cast<Drb,Flp_Afp> (const Flp_Afp& a) {
		return Drb (a[6],a[7],a[8]);
}  
		 
template<> inline const Drb cast<Drb,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Drb (a[6],a[7],a[8]);
}  
		 
template<> inline const Drb cast<Drb,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Drb (a[7],a[8],a[9]);
}  
		 
template<> inline const Drb cast<Drb,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Drb (a[7],a[8],a[9]);
}  
		 
template<> inline const Drb cast<Drb,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Drb (a[5],a[6],a[7]);
}  
		 
		

		
inline Drt involute (const Drt& a) { 
	return Drt (a[0]);
}
			
		 
		

		
inline Drt reverse (const Drt& a) { 
	return Drt (a[0]);
}
			
		 
		

		
inline Drt conjugate (const Drt& a) { 
	return Drt (a[0]);
}
			
		 
template<> inline const Drt cast<Drt,Mot> (const Mot& a) {
		return Drt (a[7]);
}  
		 
template<> inline const Drt cast<Drt,Mtd> (const Mtd& a) {
		return Drt (a[11]);
}  
		 
template<> inline const Drt cast<Drt,Mtt> (const Mtt& a) {
		return Drt (a[15]);
}  
		 
template<> inline const Drt cast<Drt,Tvt> (const Tvt& a) {
		return Drt (a[14]);
}  
		 
template<> inline const Drt cast<Drt,Sph> (const Sph& a) {
		return Drt (a[4]);
}  
		 
template<> inline const Drt cast<Drt,Pln> (const Pln& a) {
		return Drt (a[3]);
}  
		 
template<> inline const Drt cast<Drt,Inf_Cir> (const Inf_Cir& a) {
		return Drt (a[9]);
}  
		 
template<> inline const Drt cast<Drt,Inf_Afp> (const Inf_Afp& a) {
		return Drt (a[6]);
}  
		 
template<> inline const Drt cast<Drt,Mnk_Sph> (const Mnk_Sph& a) {
		return Drt (a[4]);
}  
		 
template<> inline const Drt cast<Drt,Mnk_Pln> (const Mnk_Pln& a) {
		return Drt (a[3]);
}  
		 
template<> inline const Drt cast<Drt,Hyp_Pss> (const Hyp_Pss& a) {
		return Drt (a[1]);
}  
		 
template<> inline const Drt cast<Drt,Hyp_Cir> (const Hyp_Cir& a) {
		return Drt (a[13]);
}  
		 
template<> inline const Drt cast<Drt,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Drt (a[7]);
}  
		 
template<> inline const Drt cast<Drt,Pnt_Cir> (const Pnt_Cir& a) {
		return Drt (a[14]);
}  
		 
template<> inline const Drt cast<Drt,Pnt_Lin> (const Pnt_Lin& a) {
		return Drt (a[13]);
}  
		 
template<> inline const Drt cast<Drt,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Drt (a[10]);
}  
		 
template<> inline const Drt cast<Drt,Pnt_Afp> (const Pnt_Afp& a) {
		return Drt (a[10]);
}  
		 
template<> inline const Drt cast<Drt,Par_Biv> (const Par_Biv& a) {
		return Drt (a[14]);
}  
		 
template<> inline const Drt cast<Drt,Sta_Biv> (const Sta_Biv& a) {
		return Drt (a[11]);
}  
		 
template<> inline const Drt cast<Drt,Drv_Pln> (const Drv_Pln& a) {
		return Drt (a[3]);
}  
		 
template<> inline const Drt cast<Drt,Lin_Dfp> (const Lin_Dfp& a) {
		return Drt (a[6]);
}  
		 
template<> inline const Drt cast<Drt,Lin_Dlp> (const Lin_Dlp& a) {
		return Drt (a[7]);
}  
		 
template<> inline const Drt cast<Drt,Pln_Flp> (const Pln_Flp& a) {
		return Drt (a[6]);
}  
		 
template<> inline const Drt cast<Drt,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Drt (a[13]);
}  
		 
template<> inline const Drt cast<Drt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Drt (a[11]);
}  
		 
template<> inline const Drt cast<Drt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Drt (a[7]);
}  
		 
		

		
inline Tnv involute (const Tnv& a) { 
	return Tnv (a[0],a[1],a[2]);
}
			
		 
		

		
inline Tnv reverse (const Tnv& a) { 
	return Tnv (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Tnv conjugate (const Tnv& a) { 
	return Tnv (-a[0],-a[1],-a[2]);
}
			
		 
template<> inline const Tnv cast<Tnv,Trv> (const Trv& a) {
		return Tnv (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnv cast<Tnv,Mtt> (const Mtt& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Rtt> (const Rtt& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Tvd> (const Tvd& a) {
		return Tnv (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnv cast<Tnv,Trt> (const Trt& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Rvd> (const Rvd& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Tst> (const Tst& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Tvt> (const Tvt& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Bst> (const Bst& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Par> (const Par& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Sta> (const Sta& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Afl> (const Afl& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Dap> (const Dap& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Ori_Cir> (const Ori_Cir& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Ori_Lin> (const Ori_Lin& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Par> (const Mnk_Par& a) {
		return Tnv (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Sta> (const Mnk_Sta& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Afl> (const Mnk_Afl& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Tnv (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnv cast<Tnv,Hyp_Cir> (const Hyp_Cir& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Hyp_Lin> (const Hyp_Lin& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Hyp_Vec> (const Hyp_Vec& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Pnt_Cir> (const Pnt_Cir& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Pnt_Lin> (const Pnt_Lin& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Pnt_Vec> (const Pnt_Vec& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Pnt_Afp> (const Pnt_Afp& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Pnt_Dal> (const Pnt_Dal& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Par_Biv> (const Par_Biv& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Sta_Biv> (const Sta_Biv& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Tnv_Flp> (const Tnv_Flp& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Tnv_Biv> (const Tnv_Biv& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Vec_Aff> (const Vec_Aff& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Vec_Afp> (const Vec_Afp& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Vec_Dal> (const Vec_Dal& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Biv_Dap> (const Biv_Dap& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Biv_Daf> (const Biv_Daf& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Tnv (a[1],a[2],a[3]);
}  
		 
		

		
inline Tnb involute (const Tnb& a) { 
	return Tnb (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Tnb reverse (const Tnb& a) { 
	return Tnb (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Tnb conjugate (const Tnb& a) { 
	return Tnb (a[0],a[1],a[2]);
}
			
		 
template<> inline const Tnb cast<Tnb,Rtc> (const Rtc& a) {
		return Tnb (a[5],a[6],a[7]);
}  
		 
template<> inline const Tnb cast<Tnb,Cir> (const Cir& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Afp> (const Afp& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Dal> (const Dal& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Ori_Par> (const Ori_Par& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Ori_Sph> (const Ori_Sph& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Ori_Sta> (const Ori_Sta& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Mnk_Cir> (const Mnk_Cir& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Mnk_Afp> (const Mnk_Afp& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Mnk_Dal> (const Mnk_Dal& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Hyp_Par> (const Hyp_Par& a) {
		return Tnb (a[5],a[6],a[7]);
}  
		 
template<> inline const Tnb cast<Tnb,Hyp_Sph> (const Hyp_Sph& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Hyp_Sta> (const Hyp_Sta& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Hyp_Biv> (const Hyp_Biv& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Pss_Sta> (const Pss_Sta& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Pnt_Par> (const Pnt_Par& a) {
		return Tnb (a[5],a[6],a[7]);
}  
		 
template<> inline const Tnb cast<Tnb,Pnt_Sph> (const Pnt_Sph& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Pnt_Dll> (const Pnt_Dll& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Pnt_Biv> (const Pnt_Biv& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Pnt_Afl> (const Pnt_Afl& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Pnt_Dap> (const Pnt_Dap& a) {
		return Tnb (a[5],a[6],a[7]);
}  
		 
template<> inline const Tnb cast<Tnb,Par_Tnb> (const Par_Tnb& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Par_Dfp> (const Par_Dfp& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Par_Afp> (const Par_Afp& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Par_Mnv> (const Par_Mnv& a) {
		return Tnb (a[5],a[6],a[7]);
}  
		 
template<> inline const Tnb cast<Tnb,Sph_Vec> (const Sph_Vec& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Sta_Vec> (const Sta_Vec& a) {
		return Tnb (a[5],a[6],a[7]);
}  
		 
template<> inline const Tnb cast<Tnb,Sta_Tri> (const Sta_Tri& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Sta_Mnv> (const Sta_Mnv& a) {
		return Tnb (a[2],a[3],a[4]);
}  
		 
template<> inline const Tnb cast<Tnb,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Tnv_Vec> (const Tnv_Vec& a) {
		return Tnb (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnb cast<Tnb,Flp_Afp> (const Flp_Afp& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Vec_Afl> (const Vec_Afl& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Vec_Dap> (const Vec_Dap& a) {
		return Tnb (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnb cast<Tnb,Vec_Daf> (const Vec_Daf& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Biv_Aff> (const Biv_Aff& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Biv_Afp> (const Biv_Afp& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Biv_Dal> (const Biv_Dal& a) {
		return Tnb (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnb cast<Tnb,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Tnb (a[2],a[3],a[4]);
}  
		 
		

		
inline Tnt involute (const Tnt& a) { 
	return Tnt (a[0]);
}
			
		 
		

		
inline Tnt reverse (const Tnt& a) { 
	return Tnt (a[0]);
}
			
		 
		

		
inline Tnt conjugate (const Tnt& a) { 
	return Tnt (a[0]);
}
			
		 
template<> inline const Tnt cast<Tnt,Mtt> (const Mtt& a) {
		return Tnt (a[14]);
}  
		 
template<> inline const Tnt cast<Tnt,Rtt> (const Rtt& a) {
		return Tnt (a[7]);
}  
		 
template<> inline const Tnt cast<Tnt,Rvd> (const Rvd& a) {
		return Tnt (a[11]);
}  
		 
template<> inline const Tnt cast<Tnt,Tst> (const Tst& a) {
		return Tnt (a[14]);
}  
		 
template<> inline const Tnt cast<Tnt,Sph> (const Sph& a) {
		return Tnt (a[3]);
}  
		 
template<> inline const Tnt cast<Tnt,Daf> (const Daf& a) {
		return Tnt (a[3]);
}  
		 
template<> inline const Tnt cast<Tnt,Ori_Cir> (const Ori_Cir& a) {
		return Tnt (a[9]);
}  
		 
template<> inline const Tnt cast<Tnt,Ori_Dfp> (const Ori_Dfp& a) {
		return Tnt (a[6]);
}  
		 
template<> inline const Tnt cast<Tnt,Mnk_Sph> (const Mnk_Sph& a) {
		return Tnt (a[3]);
}  
		 
template<> inline const Tnt cast<Tnt,Mnk_Daf> (const Mnk_Daf& a) {
		return Tnt (a[3]);
}  
		 
template<> inline const Tnt cast<Tnt,Hyp_Pss> (const Hyp_Pss& a) {
		return Tnt (a[0]);
}  
		 
template<> inline const Tnt cast<Tnt,Hyp_Cir> (const Hyp_Cir& a) {
		return Tnt (a[12]);
}  
		 
template<> inline const Tnt cast<Tnt,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Tnt (a[6]);
}  
		 
template<> inline const Tnt cast<Tnt,Pnt_Cir> (const Pnt_Cir& a) {
		return Tnt (a[13]);
}  
		 
template<> inline const Tnt cast<Tnt,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Tnt (a[9]);
}  
		 
template<> inline const Tnt cast<Tnt,Pnt_Afp> (const Pnt_Afp& a) {
		return Tnt (a[9]);
}  
		 
template<> inline const Tnt cast<Tnt,Pnt_Dal> (const Pnt_Dal& a) {
		return Tnt (a[13]);
}  
		 
template<> inline const Tnt cast<Tnt,Par_Biv> (const Par_Biv& a) {
		return Tnt (a[13]);
}  
		 
template<> inline const Tnt cast<Tnt,Sta_Biv> (const Sta_Biv& a) {
		return Tnt (a[10]);
}  
		 
template<> inline const Tnt cast<Tnt,Tnv_Biv> (const Tnv_Biv& a) {
		return Tnt (a[3]);
}  
		 
template<> inline const Tnt cast<Tnt,Vec_Afp> (const Vec_Afp& a) {
		return Tnt (a[6]);
}  
		 
template<> inline const Tnt cast<Tnt,Vec_Dal> (const Vec_Dal& a) {
		return Tnt (a[7]);
}  
		 
template<> inline const Tnt cast<Tnt,Biv_Dap> (const Biv_Dap& a) {
		return Tnt (a[6]);
}  
		 
template<> inline const Tnt cast<Tnt,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Tnt (a[13]);
}  
		 
template<> inline const Tnt cast<Tnt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tnt (a[10]);
}  
		 
template<> inline const Tnt cast<Tnt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tnt (a[6]);
}  
		 
		

		
inline Lin involute (const Lin& a) { 
	return Lin (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5]);
}
			
		 
		

		
inline Lin reverse (const Lin& a) { 
	return Lin (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5]);
}
			
		 
		

		
inline Lin conjugate (const Lin& a) { 
	return Lin (a[0],a[1],a[2],a[3],a[4],a[5]);
}
			
		 
template<> inline const Lin cast<Lin,Rtc> (const Rtc& a) {
		return Lin (a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Lin cast<Lin,Cir> (const Cir& a) {
		return Lin (a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Lin cast<Lin,Drb> (const Drb& a) {
		return Lin (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Dfp> (const Dfp& a) {
		return Lin (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Dal> (const Dal& a) {
		return Lin (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Lin cast<Lin,Mnv> (const Mnv& a) {
		return Lin (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Lin cast<Lin,Ori_Par> (const Ori_Par& a) {
		return Lin (0,0,0,a[7],a[8],a[9]);
}  
		 
template<> inline const Lin cast<Lin,Ori_Sta> (const Ori_Sta& a) {
		return Lin (0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Lin cast<Lin,Ori_Drv> (const Ori_Drv& a) {
		return Lin (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Lin cast<Lin,Ori_Flp> (const Ori_Flp& a) {
		return Lin (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Inf_Par> (const Inf_Par& a) {
		return Lin (a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Lin cast<Lin,Inf_Sph> (const Inf_Sph& a) {
		return Lin (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Inf_Sta> (const Inf_Sta& a) {
		return Lin (a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Lin cast<Lin,Inf_Dap> (const Inf_Dap& a) {
		return Lin (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Lin (0,0,0,a[2],a[3],a[4]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Cir> (const Mnk_Cir& a) {
		return Lin (a[6],a[7],a[8],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Lin> (const Mnk_Lin& a) {
		return Lin (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Dfp> (const Mnk_Dfp& a) {
		return Lin (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Lin (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Aff> (const Mnk_Aff& a) {
		return Lin (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Lin cast<Lin,Hyp_Par> (const Hyp_Par& a) {
		return Lin (a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Lin cast<Lin,Hyp_Sph> (const Hyp_Sph& a) {
		return Lin (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Hyp_Sta> (const Hyp_Sta& a) {
		return Lin (a[6],a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Lin cast<Lin,Hyp_Flp> (const Hyp_Flp& a) {
		return Lin (0,0,0,a[5],a[6],a[7]);
}  
		 
template<> inline const Lin cast<Lin,Hyp_Biv> (const Hyp_Biv& a) {
		return Lin (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Pss_Sta> (const Pss_Sta& a) {
		return Lin (a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Lin cast<Lin,Pnt_Par> (const Pnt_Par& a) {
		return Lin (a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Lin cast<Lin,Pnt_Sph> (const Pnt_Sph& a) {
		return Lin (a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Lin cast<Lin,Pnt_Flp> (const Pnt_Flp& a) {
		return Lin (a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Lin cast<Lin,Pnt_Dll> (const Pnt_Dll& a) {
		return Lin (a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Lin cast<Lin,Pnt_Biv> (const Pnt_Biv& a) {
		return Lin (a[6],a[7],a[8],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Pnt_Afl> (const Pnt_Afl& a) {
		return Lin (a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Lin cast<Lin,Pnt_Dap> (const Pnt_Dap& a) {
		return Lin (0,0,0,a[8],a[9],a[10]);
}  
		 
template<> inline const Lin cast<Lin,Par_Drb> (const Par_Drb& a) {
		return Lin (a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Lin cast<Lin,Par_Tnb> (const Par_Tnb& a) {
		return Lin (0,0,0,a[7],a[8],a[9]);
}  
		 
template<> inline const Lin cast<Lin,Par_Dfp> (const Par_Dfp& a) {
		return Lin (a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Lin cast<Lin,Par_Afp> (const Par_Afp& a) {
		return Lin (a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Lin cast<Lin,Par_Mnv> (const Par_Mnv& a) {
		return Lin (a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Lin cast<Lin,Sph_Vec> (const Sph_Vec& a) {
		return Lin (a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Lin cast<Lin,Sta_Vec> (const Sta_Vec& a) {
		return Lin (a[8],a[9],a[10],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Sta_Tri> (const Sta_Tri& a) {
		return Lin (a[6],a[7],a[8],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Sta_Mnv> (const Sta_Mnv& a) {
		return Lin (a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Lin cast<Lin,Drv_Tnb> (const Drv_Tnb& a) {
		return Lin (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Lin cast<Lin,Drv_Lin> (const Drv_Lin& a) {
		return Lin (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Drv_Afp> (const Drv_Afp& a) {
		return Lin (a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Lin cast<Lin,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Lin (0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Lin cast<Lin,Lin_Pln> (const Lin_Pln& a) {
		return Lin (a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Lin_Flp> (const Lin_Flp& a) {
		return Lin (a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Lin_Dll> (const Lin_Dll& a) {
		return Lin (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Pln_Dfp> (const Pln_Dfp& a) {
		return Lin (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Pln_Dlp> (const Pln_Dlp& a) {
		return Lin (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Lin cast<Lin,Pln_Mnv> (const Pln_Mnv& a) {
		return Lin (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Flp_Afp> (const Flp_Afp& a) {
		return Lin (a[6],a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Lin cast<Lin,Vec_Dap> (const Vec_Dap& a) {
		return Lin (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Vec_Daf> (const Vec_Daf& a) {
		return Lin (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Lin cast<Lin,Biv_Dal> (const Biv_Dal& a) {
		return Lin (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Biv_Mnv> (const Biv_Mnv& a) {
		return Lin (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Lin (a[6],a[7],a[8],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Lin (a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Lin (a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Lin cast<Lin,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Lin (a[5],a[6],a[7],0,0,0);
}  
		 
		

		
inline Pln involute (const Pln& a) { 
	return Pln (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Pln reverse (const Pln& a) { 
	return Pln (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Pln conjugate (const Pln& a) { 
	return Pln (a[0],a[1],a[2],a[3]);
}
			
		 
template<> inline const Pln cast<Pln,Mot> (const Mot& a) {
		return Pln (0,0,0,a[7]);
}  
		 
template<> inline const Pln cast<Pln,Mtd> (const Mtd& a) {
		return Pln (a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Pln cast<Pln,Mtt> (const Mtt& a) {
		return Pln (a[11],a[12],a[13],a[15]);
}  
		 
template<> inline const Pln cast<Pln,Rtd> (const Rtd& a) {
		return Pln (a[5],a[6],a[7],0);
}  
		 
template<> inline const Pln cast<Pln,Trt> (const Trt& a) {
		return Pln (a[11],a[12],a[13],0);
}  
		 
template<> inline const Pln cast<Pln,Rvd> (const Rvd& a) {
		return Pln (a[8],a[9],a[10],0);
}  
		 
template<> inline const Pln cast<Pln,Tst> (const Tst& a) {
		return Pln (a[11],a[12],a[13],0);
}  
		 
template<> inline const Pln cast<Pln,Tvt> (const Tvt& a) {
		return Pln (a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Pln cast<Pln,Sph> (const Sph& a) {
		return Pln (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Pln cast<Pln,Drt> (const Drt& a) {
		return Pln (0,0,0,a[0]);
}  
		 
template<> inline const Pln cast<Pln,Daf> (const Daf& a) {
		return Pln (a[0],a[1],a[2],0);
}  
		 
template<> inline const Pln cast<Pln,Ori_Cir> (const Ori_Cir& a) {
		return Pln (a[6],a[7],a[8],0);
}  
		 
template<> inline const Pln cast<Pln,Ori_Drb> (const Ori_Drb& a) {
		return Pln (a[3],a[4],a[5],0);
}  
		 
template<> inline const Pln cast<Pln,Ori_Lin> (const Ori_Lin& a) {
		return Pln (a[6],a[7],a[8],0);
}  
		 
template<> inline const Pln cast<Pln,Ori_Dfp> (const Ori_Dfp& a) {
		return Pln (a[3],a[4],a[5],0);
}  
		 
template<> inline const Pln cast<Pln,Inf_Cir> (const Inf_Cir& a) {
		return Pln (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Pln cast<Pln,Inf_Afp> (const Inf_Afp& a) {
		return Pln (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Pln cast<Pln,Inf_Dal> (const Inf_Dal& a) {
		return Pln (a[6],a[7],a[8],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Par> (const Mnk_Par& a) {
		return Pln (a[7],a[8],a[9],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Sph> (const Mnk_Sph& a) {
		return Pln (0,0,0,a[4]);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Sta> (const Mnk_Sta& a) {
		return Pln (a[6],a[7],a[8],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Pln> (const Mnk_Pln& a) {
		return Pln (0,0,0,a[3]);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Dll> (const Mnk_Dll& a) {
		return Pln (a[3],a[4],a[5],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Biv> (const Mnk_Biv& a) {
		return Pln (a[0],a[1],a[2],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Afl> (const Mnk_Afl& a) {
		return Pln (a[3],a[4],a[5],0);
}  
		 
template<> inline const Pln cast<Pln,Hyp_Pss> (const Hyp_Pss& a) {
		return Pln (0,0,0,a[1]);
}  
		 
template<> inline const Pln cast<Pln,Hyp_Cir> (const Hyp_Cir& a) {
		return Pln (a[9],a[10],a[11],a[13]);
}  
		 
template<> inline const Pln cast<Pln,Hyp_Lin> (const Hyp_Lin& a) {
		return Pln (a[9],a[10],a[11],0);
}  
		 
template<> inline const Pln cast<Pln,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Pln (a[3],a[4],a[5],a[7]);
}  
		 
template<> inline const Pln cast<Pln,Pnt_Cir> (const Pnt_Cir& a) {
		return Pln (a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Pln cast<Pln,Pnt_Lin> (const Pnt_Lin& a) {
		return Pln (a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Pln cast<Pln,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Pln (a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Pln cast<Pln,Pnt_Afp> (const Pnt_Afp& a) {
		return Pln (a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Pln cast<Pln,Pnt_Dal> (const Pnt_Dal& a) {
		return Pln (a[10],a[11],a[12],0);
}  
		 
template<> inline const Pln cast<Pln,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Pln (a[7],a[8],a[9],0);
}  
		 
template<> inline const Pln cast<Pln,Par_Biv> (const Par_Biv& a) {
		return Pln (a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Pln cast<Pln,Sta_Biv> (const Sta_Biv& a) {
		return Pln (0,0,0,a[11]);
}  
		 
template<> inline const Pln cast<Pln,Drv_Pln> (const Drv_Pln& a) {
		return Pln (0,0,0,a[3]);
}  
		 
template<> inline const Pln cast<Pln,Drv_Dap> (const Drv_Dap& a) {
		return Pln (a[8],a[9],a[10],0);
}  
		 
template<> inline const Pln cast<Pln,Tnv_Flp> (const Tnv_Flp& a) {
		return Pln (a[8],a[9],a[10],0);
}  
		 
template<> inline const Pln cast<Pln,Lin_Dfp> (const Lin_Dfp& a) {
		return Pln (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Pln cast<Pln,Lin_Dlp> (const Lin_Dlp& a) {
		return Pln (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Pln cast<Pln,Pln_Flp> (const Pln_Flp& a) {
		return Pln (0,0,0,a[6]);
}  
		 
template<> inline const Pln cast<Pln,Pln_Biv> (const Pln_Biv& a) {
		return Pln (a[4],a[5],a[6],0);
}  
		 
template<> inline const Pln cast<Pln,Vec_Dal> (const Vec_Dal& a) {
		return Pln (a[4],a[5],a[6],0);
}  
		 
template<> inline const Pln cast<Pln,Vec_Mnv> (const Vec_Mnv& a) {
		return Pln (a[1],a[2],a[3],0);
}  
		 
template<> inline const Pln cast<Pln,Biv_Dap> (const Biv_Dap& a) {
		return Pln (a[3],a[4],a[5],0);
}  
		 
template<> inline const Pln cast<Pln,Biv_Daf> (const Biv_Daf& a) {
		return Pln (a[4],a[5],a[6],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Pln (a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Pln (a[10],a[11],a[12],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Pln (a[7],a[8],a[9],a[11]);
}  
		 
template<> inline const Pln cast<Pln,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Pln (0,0,0,a[7]);
}  
		 
template<> inline const Pln cast<Pln,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Pln (a[8],a[9],a[10],0);
}  
		 
		

		
inline Flp involute (const Flp& a) { 
	return Flp (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Flp reverse (const Flp& a) { 
	return Flp (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Flp conjugate (const Flp& a) { 
	return Flp (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
template<> inline const Flp cast<Flp,Mot> (const Mot& a) {
		return Flp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Flp cast<Flp,Dil> (const Dil& a) {
		return Flp (0,0,0,a[1]);
}  
		 
template<> inline const Flp cast<Flp,Mtd> (const Mtd& a) {
		return Flp (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Flp cast<Flp,Trs> (const Trs& a) {
		return Flp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Flp cast<Flp,Mtt> (const Mtt& a) {
		return Flp (a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Flp cast<Flp,Rtd> (const Rtd& a) {
		return Flp (0,0,0,a[4]);
}  
		 
template<> inline const Flp cast<Flp,Tvd> (const Tvd& a) {
		return Flp (0,0,0,a[4]);
}  
		 
template<> inline const Flp cast<Flp,Tsd> (const Tsd& a) {
		return Flp (a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Flp cast<Flp,Trt> (const Trt& a) {
		return Flp (a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Flp cast<Flp,Rvd> (const Rvd& a) {
		return Flp (0,0,0,a[7]);
}  
		 
template<> inline const Flp cast<Flp,Tst> (const Tst& a) {
		return Flp (a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Flp cast<Flp,Tvt> (const Tvt& a) {
		return Flp (a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Flp cast<Flp,Bst> (const Bst& a) {
		return Flp (a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Flp cast<Flp,Mnk> (const Mnk& a) {
		return Flp (0,0,0,a[0]);
}  
		 
template<> inline const Flp cast<Flp,Par> (const Par& a) {
		return Flp (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Flp cast<Flp,Sta> (const Sta& a) {
		return Flp (a[6],a[7],a[8],0);
}  
		 
template<> inline const Flp cast<Flp,Drv> (const Drv& a) {
		return Flp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Flp cast<Flp,Dll> (const Dll& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Dap> (const Dap& a) {
		return Flp (0,0,0,a[3]);
}  
		 
template<> inline const Flp cast<Flp,Inf_Cir> (const Inf_Cir& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Inf_Dal> (const Inf_Dal& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Par> (const Mnk_Par& a) {
		return Flp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Sta> (const Mnk_Sta& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Dll> (const Mnk_Dll& a) {
		return Flp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Flp cast<Flp,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Flp (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Flp cast<Flp,Hyp_Cir> (const Hyp_Cir& a) {
		return Flp (a[6],a[7],a[8],0);
}  
		 
template<> inline const Flp cast<Flp,Hyp_Lin> (const Hyp_Lin& a) {
		return Flp (a[6],a[7],a[8],0);
}  
		 
template<> inline const Flp cast<Flp,Hyp_Vec> (const Hyp_Vec& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Cir> (const Pnt_Cir& a) {
		return Flp (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Lin> (const Pnt_Lin& a) {
		return Flp (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Vec> (const Pnt_Vec& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Dal> (const Pnt_Dal& a) {
		return Flp (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Flp (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Flp cast<Flp,Par_Biv> (const Par_Biv& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Sta_Biv> (const Sta_Biv& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Drv_Pln> (const Drv_Pln& a) {
		return Flp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Flp cast<Flp,Drv_Dap> (const Drv_Dap& a) {
		return Flp (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Flp cast<Flp,Tnv_Flp> (const Tnv_Flp& a) {
		return Flp (0,0,0,a[7]);
}  
		 
template<> inline const Flp cast<Flp,Lin_Dfp> (const Lin_Dfp& a) {
		return Flp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Flp cast<Flp,Lin_Dlp> (const Lin_Dlp& a) {
		return Flp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Flp cast<Flp,Pln_Pln> (const Pln_Pln& a) {
		return Flp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Flp cast<Flp,Pln_Flp> (const Pln_Flp& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Pln_Biv> (const Pln_Biv& a) {
		return Flp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Flp cast<Flp,Vec_Dal> (const Vec_Dal& a) {
		return Flp (0,0,0,a[3]);
}  
		 
template<> inline const Flp cast<Flp,Vec_Mnv> (const Vec_Mnv& a) {
		return Flp (0,0,0,a[0]);
}  
		 
template<> inline const Flp cast<Flp,Biv_Daf> (const Biv_Daf& a) {
		return Flp (0,0,0,a[3]);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Flp (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Flp cast<Flp,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Flp (a[4],a[5],a[6],a[7]);
}  
		 
		

		
inline Dfp involute (const Dfp& a) { 
	return Dfp (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Dfp reverse (const Dfp& a) { 
	return Dfp (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Dfp conjugate (const Dfp& a) { 
	return Dfp (a[0],a[1],a[2],a[3]);
}
			
		 
template<> inline const Dfp cast<Dfp,Rtc> (const Rtc& a) {
		return Dfp (a[8],a[9],a[10],a[14]);
}  
		 
template<> inline const Dfp cast<Dfp,Cir> (const Cir& a) {
		return Dfp (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Dfp cast<Dfp,Drb> (const Drb& a) {
		return Dfp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dfp cast<Dfp,Lin> (const Lin& a) {
		return Dfp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dfp cast<Dfp,Tri> (const Tri& a) {
		return Dfp (0,0,0,a[0]);
}  
		 
template<> inline const Dfp cast<Dfp,Afp> (const Afp& a) {
		return Dfp (0,0,0,a[3]);
}  
		 
template<> inline const Dfp cast<Dfp,Ori_Sph> (const Ori_Sph& a) {
		return Dfp (0,0,0,a[3]);
}  
		 
template<> inline const Dfp cast<Dfp,Ori_Drt> (const Ori_Drt& a) {
		return Dfp (0,0,0,a[0]);
}  
		 
template<> inline const Dfp cast<Dfp,Inf_Par> (const Inf_Par& a) {
		return Dfp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Dfp cast<Dfp,Inf_Sph> (const Inf_Sph& a) {
		return Dfp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dfp cast<Dfp,Inf_Sta> (const Inf_Sta& a) {
		return Dfp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dfp cast<Dfp,Mnk_Cir> (const Mnk_Cir& a) {
		return Dfp (a[6],a[7],a[8],0);
}  
		 
template<> inline const Dfp cast<Dfp,Mnk_Lin> (const Mnk_Lin& a) {
		return Dfp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dfp cast<Dfp,Mnk_Dfp> (const Mnk_Dfp& a) {
		return Dfp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dfp cast<Dfp,Hyp_Par> (const Hyp_Par& a) {
		return Dfp (a[8],a[9],a[10],0);
}  
		 
template<> inline const Dfp cast<Dfp,Hyp_Sph> (const Hyp_Sph& a) {
		return Dfp (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Dfp cast<Dfp,Hyp_Sta> (const Hyp_Sta& a) {
		return Dfp (a[6],a[7],a[8],0);
}  
		 
template<> inline const Dfp cast<Dfp,Hyp_Biv> (const Hyp_Biv& a) {
		return Dfp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dfp cast<Dfp,Pss_Sta> (const Pss_Sta& a) {
		return Dfp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dfp cast<Dfp,Pnt_Par> (const Pnt_Par& a) {
		return Dfp (a[8],a[9],a[10],a[14]);
}  
		 
template<> inline const Dfp cast<Dfp,Pnt_Sph> (const Pnt_Sph& a) {
		return Dfp (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Dfp cast<Dfp,Pnt_Flp> (const Pnt_Flp& a) {
		return Dfp (a[5],a[6],a[7],0);
}  
		 
template<> inline const Dfp cast<Dfp,Pnt_Dll> (const Pnt_Dll& a) {
		return Dfp (a[7],a[8],a[9],a[13]);
}  
		 
template<> inline const Dfp cast<Dfp,Pnt_Biv> (const Pnt_Biv& a) {
		return Dfp (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Dfp cast<Dfp,Pnt_Afl> (const Pnt_Afl& a) {
		return Dfp (a[7],a[8],a[9],a[13]);
}  
		 
template<> inline const Dfp cast<Dfp,Par_Drb> (const Par_Drb& a) {
		return Dfp (a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Dfp cast<Dfp,Par_Tnb> (const Par_Tnb& a) {
		return Dfp (0,0,0,a[10]);
}  
		 
template<> inline const Dfp cast<Dfp,Par_Dfp> (const Par_Dfp& a) {
		return Dfp (a[7],a[8],a[9],a[13]);
}  
		 
template<> inline const Dfp cast<Dfp,Par_Afp> (const Par_Afp& a) {
		return Dfp (a[7],a[8],a[9],a[13]);
}  
		 
template<> inline const Dfp cast<Dfp,Par_Mnv> (const Par_Mnv& a) {
		return Dfp (a[8],a[9],a[10],0);
}  
		 
template<> inline const Dfp cast<Dfp,Sph_Vec> (const Sph_Vec& a) {
		return Dfp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dfp cast<Dfp,Sta_Vec> (const Sta_Vec& a) {
		return Dfp (a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Dfp cast<Dfp,Sta_Tri> (const Sta_Tri& a) {
		return Dfp (a[6],a[7],a[8],0);
}  
		 
template<> inline const Dfp cast<Dfp,Sta_Mnv> (const Sta_Mnv& a) {
		return Dfp (a[5],a[6],a[7],0);
}  
		 
template<> inline const Dfp cast<Dfp,Drv_Tnb> (const Drv_Tnb& a) {
		return Dfp (0,0,0,a[6]);
}  
		 
template<> inline const Dfp cast<Dfp,Drv_Lin> (const Drv_Lin& a) {
		return Dfp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Dfp cast<Dfp,Drv_Afp> (const Drv_Afp& a) {
		return Dfp (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Dfp cast<Dfp,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Dfp (0,0,0,a[9]);
}  
		 
template<> inline const Dfp cast<Dfp,Lin_Pln> (const Lin_Pln& a) {
		return Dfp (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Dfp cast<Dfp,Lin_Flp> (const Lin_Flp& a) {
		return Dfp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Dfp cast<Dfp,Lin_Dll> (const Lin_Dll& a) {
		return Dfp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Dfp cast<Dfp,Pln_Dfp> (const Pln_Dfp& a) {
		return Dfp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Dfp cast<Dfp,Pln_Dlp> (const Pln_Dlp& a) {
		return Dfp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dfp cast<Dfp,Pln_Mnv> (const Pln_Mnv& a) {
		return Dfp (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Dfp cast<Dfp,Flp_Afp> (const Flp_Afp& a) {
		return Dfp (a[6],a[7],a[8],a[12]);
}  
		 
template<> inline const Dfp cast<Dfp,Vec_Biv> (const Vec_Biv& a) {
		return Dfp (0,0,0,a[3]);
}  
		 
template<> inline const Dfp cast<Dfp,Vec_Afl> (const Vec_Afl& a) {
		return Dfp (0,0,0,a[7]);
}  
		 
template<> inline const Dfp cast<Dfp,Biv_Aff> (const Biv_Aff& a) {
		return Dfp (0,0,0,a[6]);
}  
		 
template<> inline const Dfp cast<Dfp,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Dfp (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Dfp cast<Dfp,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Dfp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Dfp cast<Dfp,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Dfp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Dfp cast<Dfp,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Dfp (a[5],a[6],a[7],0);
}  
		 
		

		
inline Dll involute (const Dll& a) { 
	return Dll (a[0],a[1],a[2],a[3],a[4],a[5]);
}
			
		 
		

		
inline Dll reverse (const Dll& a) { 
	return Dll (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5]);
}
			
		 
		

		
inline Dll conjugate (const Dll& a) { 
	return Dll (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5]);
}
			
		 
template<> inline const Dll cast<Dll,Rot> (const Rot& a) {
		return Dll (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Mot> (const Mot& a) {
		return Dll (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Dll cast<Dll,Mtd> (const Mtd& a) {
		return Dll (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Dll cast<Dll,Trs> (const Trs& a) {
		return Dll (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Dll cast<Dll,Mtt> (const Mtt& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Rtt> (const Rtt& a) {
		return Dll (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Rtd> (const Rtd& a) {
		return Dll (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Tsd> (const Tsd& a) {
		return Dll (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Dll cast<Dll,Trt> (const Trt& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Rvd> (const Rvd& a) {
		return Dll (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Tst> (const Tst& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Tvt> (const Tvt& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Bst> (const Bst& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Par> (const Par& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Sta> (const Sta& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Drv> (const Drv& a) {
		return Dll (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dll cast<Dll,Flp> (const Flp& a) {
		return Dll (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dll cast<Dll,Biv> (const Biv& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Afl> (const Afl& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Ori_Cir> (const Ori_Cir& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Ori_Drb> (const Ori_Drb& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Ori_Lin> (const Ori_Lin& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Ori_Dfp> (const Ori_Dfp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Inf_Cir> (const Inf_Cir& a) {
		return Dll (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Inf_Afp> (const Inf_Afp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Inf_Dal> (const Inf_Dal& a) {
		return Dll (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Par> (const Mnk_Par& a) {
		return Dll (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Sph> (const Mnk_Sph& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Sta> (const Mnk_Sta& a) {
		return Dll (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Pln> (const Mnk_Pln& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Dll> (const Mnk_Dll& a) {
		return Dll (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Daf> (const Mnk_Daf& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Dll (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Cir> (const Hyp_Cir& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Lin> (const Hyp_Lin& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Vec> (const Hyp_Vec& a) {
		return Dll (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Cir> (const Pnt_Cir& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Lin> (const Pnt_Lin& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Dll (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Vec> (const Pnt_Vec& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Afp> (const Pnt_Afp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Dal> (const Pnt_Dal& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Dll (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Par_Biv> (const Par_Biv& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Sta_Biv> (const Sta_Biv& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Drv_Pln> (const Drv_Pln& a) {
		return Dll (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dll cast<Dll,Drv_Dap> (const Drv_Dap& a) {
		return Dll (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Dll cast<Dll,Tnv_Flp> (const Tnv_Flp& a) {
		return Dll (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Lin_Dfp> (const Lin_Dfp& a) {
		return Dll (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dll cast<Dll,Lin_Dlp> (const Lin_Dlp& a) {
		return Dll (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dll cast<Dll,Pln_Pln> (const Pln_Pln& a) {
		return Dll (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Dll cast<Dll,Pln_Flp> (const Pln_Flp& a) {
		return Dll (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Pln_Biv> (const Pln_Biv& a) {
		return Dll (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dll cast<Dll,Vec_Aff> (const Vec_Aff& a) {
		return Dll (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Vec_Afp> (const Vec_Afp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Dll (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Dll (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Dll (0,0,0,a[4],a[5],a[6]);
}  
		 
		

		
inline Dlp involute (const Dlp& a) { 
	return Dlp (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Dlp reverse (const Dlp& a) { 
	return Dlp (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Dlp conjugate (const Dlp& a) { 
	return Dlp (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
template<> inline const Dlp cast<Dlp,Rtc> (const Rtc& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Inf> (const Inf& a) {
		return Dlp (0,0,0,a[0]);
}  
		 
template<> inline const Dlp cast<Dlp,Hyp> (const Hyp& a) {
		return Dlp (0,0,0,a[1]);
}  
		 
template<> inline const Dlp cast<Dlp,Pnt> (const Pnt& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Vec> (const Vec& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Aff> (const Aff& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Ori_Par> (const Ori_Par& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Ori_Sta> (const Ori_Sta& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Ori_Drv> (const Ori_Drv& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Ori_Flp> (const Ori_Flp& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Inf_Par> (const Inf_Par& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Inf_Sta> (const Inf_Sta& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Inf_Dap> (const Inf_Dap& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Dlp (0,0,0,a[1]);
}  
		 
template<> inline const Dlp cast<Dlp,Mnk_Cir> (const Mnk_Cir& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Mnk_Lin> (const Mnk_Lin& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Dlp (0,0,0,a[0]);
}  
		 
template<> inline const Dlp cast<Dlp,Mnk_Dal> (const Mnk_Dal& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Hyp_Par> (const Hyp_Par& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Hyp_Sta> (const Hyp_Sta& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Hyp_Flp> (const Hyp_Flp& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Pnt_Par> (const Pnt_Par& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Pnt_Flp> (const Pnt_Flp& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Pnt_Dll> (const Pnt_Dll& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Pnt_Biv> (const Pnt_Biv& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Pnt_Afl> (const Pnt_Afl& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Pnt_Dap> (const Pnt_Dap& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Par_Drb> (const Par_Drb& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Par_Tnb> (const Par_Tnb& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Par_Dfp> (const Par_Dfp& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Par_Afp> (const Par_Afp& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Par_Mnv> (const Par_Mnv& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Sta_Vec> (const Sta_Vec& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Sta_Tri> (const Sta_Tri& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Sta_Mnv> (const Sta_Mnv& a) {
		return Dlp (0,0,0,a[1]);
}  
		 
template<> inline const Dlp cast<Dlp,Drv_Tnb> (const Drv_Tnb& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Drv_Lin> (const Drv_Lin& a) {
		return Dlp (0,0,0,a[0]);
}  
		 
template<> inline const Dlp cast<Dlp,Drv_Afp> (const Drv_Afp& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Lin_Pln> (const Lin_Pln& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Lin_Flp> (const Lin_Flp& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Lin_Dll> (const Lin_Dll& a) {
		return Dlp (0,0,0,a[0]);
}  
		 
template<> inline const Dlp cast<Dlp,Pln_Dfp> (const Pln_Dfp& a) {
		return Dlp (0,0,0,a[0]);
}  
		 
template<> inline const Dlp cast<Dlp,Pln_Mnv> (const Pln_Mnv& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Flp_Afp> (const Flp_Afp& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Vec_Biv> (const Vec_Biv& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Vec_Afl> (const Vec_Afl& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Biv_Aff> (const Biv_Aff& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Biv_Afp> (const Biv_Afp& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Dlp (0,0,0,a[1]);
}  
		 
		

		
inline Vec involute (const Vec& a) { 
	return Vec (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Vec reverse (const Vec& a) { 
	return Vec (a[0],a[1],a[2]);
}
			
		 
		

		
inline Vec conjugate (const Vec& a) { 
	return Vec (-a[0],-a[1],-a[2]);
}
			
		 
template<> inline const Vec cast<Vec,Rtc> (const Rtc& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Pnt> (const Pnt& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Dlp> (const Dlp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Aff> (const Aff& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Ori_Par> (const Ori_Par& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Ori_Sta> (const Ori_Sta& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Ori_Drv> (const Ori_Drv& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Ori_Flp> (const Ori_Flp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Inf_Par> (const Inf_Par& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Inf_Sta> (const Inf_Sta& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Inf_Dap> (const Inf_Dap& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Mnk_Cir> (const Mnk_Cir& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Mnk_Lin> (const Mnk_Lin& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Mnk_Dal> (const Mnk_Dal& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Hyp_Par> (const Hyp_Par& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Hyp_Sta> (const Hyp_Sta& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Hyp_Flp> (const Hyp_Flp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Pnt_Par> (const Pnt_Par& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Pnt_Flp> (const Pnt_Flp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Pnt_Dll> (const Pnt_Dll& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Pnt_Biv> (const Pnt_Biv& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Pnt_Afl> (const Pnt_Afl& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Pnt_Dap> (const Pnt_Dap& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Par_Drb> (const Par_Drb& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Par_Tnb> (const Par_Tnb& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Par_Dfp> (const Par_Dfp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Par_Afp> (const Par_Afp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Par_Mnv> (const Par_Mnv& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Sta_Vec> (const Sta_Vec& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Sta_Tri> (const Sta_Tri& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Drv_Tnb> (const Drv_Tnb& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Drv_Afp> (const Drv_Afp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Lin_Pln> (const Lin_Pln& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Lin_Flp> (const Lin_Flp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Pln_Mnv> (const Pln_Mnv& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Flp_Afp> (const Flp_Afp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Vec_Biv> (const Vec_Biv& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Vec_Afl> (const Vec_Afl& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Biv_Aff> (const Biv_Aff& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Biv_Afp> (const Biv_Afp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
		

		
inline Biv involute (const Biv& a) { 
	return Biv (a[0],a[1],a[2]);
}
			
		 
		

		
inline Biv reverse (const Biv& a) { 
	return Biv (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Biv conjugate (const Biv& a) { 
	return Biv (-a[0],-a[1],-a[2]);
}
			
		 
template<> inline const Biv cast<Biv,Rot> (const Rot& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Mot> (const Mot& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Mtd> (const Mtd& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Mtt> (const Mtt& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Rtt> (const Rtt& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Rtd> (const Rtd& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Trt> (const Trt& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Rvd> (const Rvd& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Tst> (const Tst& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Tvt> (const Tvt& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Bst> (const Bst& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Par> (const Par& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Sta> (const Sta& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Dll> (const Dll& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Afl> (const Afl& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Ori_Cir> (const Ori_Cir& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Ori_Drb> (const Ori_Drb& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Ori_Lin> (const Ori_Lin& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Ori_Dfp> (const Ori_Dfp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Inf_Cir> (const Inf_Cir& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Inf_Afp> (const Inf_Afp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Inf_Dal> (const Inf_Dal& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Mnk_Sph> (const Mnk_Sph& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Mnk_Pln> (const Mnk_Pln& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Mnk_Daf> (const Mnk_Daf& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Hyp_Cir> (const Hyp_Cir& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Hyp_Lin> (const Hyp_Lin& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Cir> (const Pnt_Cir& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Lin> (const Pnt_Lin& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Vec> (const Pnt_Vec& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Afp> (const Pnt_Afp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Dal> (const Pnt_Dal& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Par_Biv> (const Par_Biv& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Sta_Biv> (const Sta_Biv& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Drv_Dap> (const Drv_Dap& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Tnv_Flp> (const Tnv_Flp& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Pln_Pln> (const Pln_Pln& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Pln_Flp> (const Pln_Flp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Vec_Aff> (const Vec_Aff& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Vec_Afp> (const Vec_Afp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
		

		
inline Tri involute (const Tri& a) { 
	return Tri (-a[0]);
}
			
		 
		

		
inline Tri reverse (const Tri& a) { 
	return Tri (-a[0]);
}
			
		 
		

		
inline Tri conjugate (const Tri& a) { 
	return Tri (a[0]);
}
			
		 
template<> inline const Tri cast<Tri,Rtc> (const Rtc& a) {
		return Tri (a[14]);
}  
		 
template<> inline const Tri cast<Tri,Cir> (const Cir& a) {
		return Tri (a[9]);
}  
		 
template<> inline const Tri cast<Tri,Dfp> (const Dfp& a) {
		return Tri (a[3]);
}  
		 
template<> inline const Tri cast<Tri,Afp> (const Afp& a) {
		return Tri (a[3]);
}  
		 
template<> inline const Tri cast<Tri,Ori_Sph> (const Ori_Sph& a) {
		return Tri (a[3]);
}  
		 
template<> inline const Tri cast<Tri,Ori_Drt> (const Ori_Drt& a) {
		return Tri (a[0]);
}  
		 
template<> inline const Tri cast<Tri,Inf_Sph> (const Inf_Sph& a) {
		return Tri (a[3]);
}  
		 
template<> inline const Tri cast<Tri,Hyp_Sph> (const Hyp_Sph& a) {
		return Tri (a[6]);
}  
		 
template<> inline const Tri cast<Tri,Pnt_Par> (const Pnt_Par& a) {
		return Tri (a[14]);
}  
		 
template<> inline const Tri cast<Tri,Pnt_Sph> (const Pnt_Sph& a) {
		return Tri (a[9]);
}  
		 
template<> inline const Tri cast<Tri,Pnt_Dll> (const Pnt_Dll& a) {
		return Tri (a[13]);
}  
		 
template<> inline const Tri cast<Tri,Pnt_Biv> (const Pnt_Biv& a) {
		return Tri (a[9]);
}  
		 
template<> inline const Tri cast<Tri,Pnt_Afl> (const Pnt_Afl& a) {
		return Tri (a[13]);
}  
		 
template<> inline const Tri cast<Tri,Par_Drb> (const Par_Drb& a) {
		return Tri (a[10]);
}  
		 
template<> inline const Tri cast<Tri,Par_Tnb> (const Par_Tnb& a) {
		return Tri (a[10]);
}  
		 
template<> inline const Tri cast<Tri,Par_Dfp> (const Par_Dfp& a) {
		return Tri (a[13]);
}  
		 
template<> inline const Tri cast<Tri,Par_Afp> (const Par_Afp& a) {
		return Tri (a[13]);
}  
		 
template<> inline const Tri cast<Tri,Sta_Vec> (const Sta_Vec& a) {
		return Tri (a[11]);
}  
		 
template<> inline const Tri cast<Tri,Drv_Tnb> (const Drv_Tnb& a) {
		return Tri (a[6]);
}  
		 
template<> inline const Tri cast<Tri,Drv_Afp> (const Drv_Afp& a) {
		return Tri (a[9]);
}  
		 
template<> inline const Tri cast<Tri,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Tri (a[9]);
}  
		 
template<> inline const Tri cast<Tri,Lin_Pln> (const Lin_Pln& a) {
		return Tri (a[7]);
}  
		 
template<> inline const Tri cast<Tri,Pln_Mnv> (const Pln_Mnv& a) {
		return Tri (a[6]);
}  
		 
template<> inline const Tri cast<Tri,Flp_Afp> (const Flp_Afp& a) {
		return Tri (a[12]);
}  
		 
template<> inline const Tri cast<Tri,Vec_Biv> (const Vec_Biv& a) {
		return Tri (a[3]);
}  
		 
template<> inline const Tri cast<Tri,Vec_Afl> (const Vec_Afl& a) {
		return Tri (a[7]);
}  
		 
template<> inline const Tri cast<Tri,Biv_Aff> (const Biv_Aff& a) {
		return Tri (a[6]);
}  
		 
template<> inline const Tri cast<Tri,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Tri (a[9]);
}  
		 
		

		
inline Aff involute (const Aff& a) { 
	return Aff (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Aff reverse (const Aff& a) { 
	return Aff (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Aff conjugate (const Aff& a) { 
	return Aff (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
template<> inline const Aff cast<Aff,Rtc> (const Rtc& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Ori> (const Ori& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Hyp> (const Hyp& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Pnt> (const Pnt& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Dlp> (const Dlp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Vec> (const Vec& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Ori_Par> (const Ori_Par& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Ori_Sta> (const Ori_Sta& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Ori_Drv> (const Ori_Drv& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Ori_Flp> (const Ori_Flp& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Inf_Par> (const Inf_Par& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Inf_Sta> (const Inf_Sta& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Inf_Dap> (const Inf_Dap& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Cir> (const Mnk_Cir& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Lin> (const Mnk_Lin& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Aff> (const Mnk_Aff& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Dal> (const Mnk_Dal& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Hyp_Par> (const Hyp_Par& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Hyp_Sta> (const Hyp_Sta& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Hyp_Flp> (const Hyp_Flp& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Pnt_Par> (const Pnt_Par& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Pnt_Flp> (const Pnt_Flp& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Pnt_Dll> (const Pnt_Dll& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Pnt_Biv> (const Pnt_Biv& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Pnt_Afl> (const Pnt_Afl& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Pnt_Dap> (const Pnt_Dap& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Par_Drb> (const Par_Drb& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Par_Tnb> (const Par_Tnb& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Par_Dfp> (const Par_Dfp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Par_Afp> (const Par_Afp& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Par_Mnv> (const Par_Mnv& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Sta_Vec> (const Sta_Vec& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Sta_Tri> (const Sta_Tri& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Sta_Mnv> (const Sta_Mnv& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Drv_Tnb> (const Drv_Tnb& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Drv_Afp> (const Drv_Afp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Tnv_Vec> (const Tnv_Vec& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Lin_Pln> (const Lin_Pln& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Lin_Flp> (const Lin_Flp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Pln_Mnv> (const Pln_Mnv& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Flp_Afp> (const Flp_Afp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Vec_Biv> (const Vec_Biv& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Vec_Afl> (const Vec_Afl& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Vec_Dap> (const Vec_Dap& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Biv_Aff> (const Biv_Aff& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Biv_Afp> (const Biv_Afp& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Biv_Dal> (const Biv_Dal& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Aff (0,0,0,a[0]);
}  
		 
		

		
inline Afl involute (const Afl& a) { 
	return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}
			
		 
		

		
inline Afl reverse (const Afl& a) { 
	return Afl (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5]);
}
			
		 
		

		
inline Afl conjugate (const Afl& a) { 
	return Afl (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5]);
}
			
		 
template<> inline const Afl cast<Afl,Rot> (const Rot& a) {
		return Afl (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Mot> (const Mot& a) {
		return Afl (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Trv> (const Trv& a) {
		return Afl (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Afl cast<Afl,Mtd> (const Mtd& a) {
		return Afl (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Mtt> (const Mtt& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Rtt> (const Rtt& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Rtd> (const Rtd& a) {
		return Afl (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Tvd> (const Tvd& a) {
		return Afl (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Afl cast<Afl,Trt> (const Trt& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Rvd> (const Rvd& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Tst> (const Tst& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Tvt> (const Tvt& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Bst> (const Bst& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Par> (const Par& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Sta> (const Sta& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Tnv> (const Tnv& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Dll> (const Dll& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Biv> (const Biv& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Dap> (const Dap& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Ori_Cir> (const Ori_Cir& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Ori_Drb> (const Ori_Drb& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Ori_Lin> (const Ori_Lin& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Ori_Dfp> (const Ori_Dfp& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Inf_Cir> (const Inf_Cir& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Inf_Afp> (const Inf_Afp& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Inf_Dal> (const Inf_Dal& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Par> (const Mnk_Par& a) {
		return Afl (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Sph> (const Mnk_Sph& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Sta> (const Mnk_Sta& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Pln> (const Mnk_Pln& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Afl> (const Mnk_Afl& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Daf> (const Mnk_Daf& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Afl (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Cir> (const Hyp_Cir& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Lin> (const Hyp_Lin& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Vec> (const Hyp_Vec& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Cir> (const Pnt_Cir& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Lin> (const Pnt_Lin& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Vec> (const Pnt_Vec& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Afp> (const Pnt_Afp& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Dal> (const Pnt_Dal& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Par_Biv> (const Par_Biv& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Sta_Biv> (const Sta_Biv& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Drv_Dap> (const Drv_Dap& a) {
		return Afl (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Tnv_Flp> (const Tnv_Flp& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Tnv_Biv> (const Tnv_Biv& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Pln_Pln> (const Pln_Pln& a) {
		return Afl (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Pln_Flp> (const Pln_Flp& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Vec_Aff> (const Vec_Aff& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Vec_Afp> (const Vec_Afp& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Vec_Dal> (const Vec_Dal& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Biv_Dap> (const Biv_Dap& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Biv_Daf> (const Biv_Daf& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Afl (0,0,0,a[1],a[2],a[3]);
}  
		 
		

		
inline Afp involute (const Afp& a) { 
	return Afp (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Afp reverse (const Afp& a) { 
	return Afp (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Afp conjugate (const Afp& a) { 
	return Afp (a[0],a[1],a[2],a[3]);
}
			
		 
template<> inline const Afp cast<Afp,Rtc> (const Rtc& a) {
		return Afp (a[5],a[6],a[7],a[14]);
}  
		 
template<> inline const Afp cast<Afp,Cir> (const Cir& a) {
		return Afp (a[0],a[1],a[2],a[9]);
}  
		 
template<> inline const Afp cast<Afp,Tnb> (const Tnb& a) {
		return Afp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Afp cast<Afp,Dfp> (const Dfp& a) {
		return Afp (0,0,0,a[3]);
}  
		 
template<> inline const Afp cast<Afp,Tri> (const Tri& a) {
		return Afp (0,0,0,a[0]);
}  
		 
template<> inline const Afp cast<Afp,Dal> (const Dal& a) {
		return Afp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Afp cast<Afp,Ori_Par> (const Ori_Par& a) {
		return Afp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Afp cast<Afp,Ori_Sph> (const Ori_Sph& a) {
		return Afp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Afp cast<Afp,Ori_Sta> (const Ori_Sta& a) {
		return Afp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Afp cast<Afp,Ori_Drt> (const Ori_Drt& a) {
		return Afp (0,0,0,a[0]);
}  
		 
template<> inline const Afp cast<Afp,Inf_Sph> (const Inf_Sph& a) {
		return Afp (0,0,0,a[3]);
}  
		 
template<> inline const Afp cast<Afp,Mnk_Cir> (const Mnk_Cir& a) {
		return Afp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Afp cast<Afp,Mnk_Afp> (const Mnk_Afp& a) {
		return Afp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Afp cast<Afp,Mnk_Dal> (const Mnk_Dal& a) {
		return Afp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Afp cast<Afp,Hyp_Par> (const Hyp_Par& a) {
		return Afp (a[5],a[6],a[7],0);
}  
		 
template<> inline const Afp cast<Afp,Hyp_Sph> (const Hyp_Sph& a) {
		return Afp (a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Afp cast<Afp,Hyp_Sta> (const Hyp_Sta& a) {
		return Afp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Afp cast<Afp,Hyp_Biv> (const Hyp_Biv& a) {
		return Afp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Afp cast<Afp,Pss_Sta> (const Pss_Sta& a) {
		return Afp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Afp cast<Afp,Pnt_Par> (const Pnt_Par& a) {
		return Afp (a[5],a[6],a[7],a[14]);
}  
		 
template<> inline const Afp cast<Afp,Pnt_Sph> (const Pnt_Sph& a) {
		return Afp (a[0],a[1],a[2],a[9]);
}  
		 
template<> inline const Afp cast<Afp,Pnt_Dll> (const Pnt_Dll& a) {
		return Afp (a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Afp cast<Afp,Pnt_Biv> (const Pnt_Biv& a) {
		return Afp (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Afp cast<Afp,Pnt_Afl> (const Pnt_Afl& a) {
		return Afp (a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Afp cast<Afp,Pnt_Dap> (const Pnt_Dap& a) {
		return Afp (a[5],a[6],a[7],0);
}  
		 
template<> inline const Afp cast<Afp,Par_Drb> (const Par_Drb& a) {
		return Afp (0,0,0,a[10]);
}  
		 
template<> inline const Afp cast<Afp,Par_Tnb> (const Par_Tnb& a) {
		return Afp (a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Afp cast<Afp,Par_Dfp> (const Par_Dfp& a) {
		return Afp (a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Afp cast<Afp,Par_Afp> (const Par_Afp& a) {
		return Afp (a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Afp cast<Afp,Par_Mnv> (const Par_Mnv& a) {
		return Afp (a[5],a[6],a[7],0);
}  
		 
template<> inline const Afp cast<Afp,Sph_Vec> (const Sph_Vec& a) {
		return Afp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Afp cast<Afp,Sta_Vec> (const Sta_Vec& a) {
		return Afp (a[5],a[6],a[7],a[11]);
}  
		 
template<> inline const Afp cast<Afp,Sta_Tri> (const Sta_Tri& a) {
		return Afp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Afp cast<Afp,Sta_Mnv> (const Sta_Mnv& a) {
		return Afp (a[2],a[3],a[4],0);
}  
		 
template<> inline const Afp cast<Afp,Drv_Tnb> (const Drv_Tnb& a) {
		return Afp (0,0,0,a[6]);
}  
		 
template<> inline const Afp cast<Afp,Drv_Afp> (const Drv_Afp& a) {
		return Afp (0,0,0,a[9]);
}  
		 
template<> inline const Afp cast<Afp,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Afp (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Afp cast<Afp,Tnv_Vec> (const Tnv_Vec& a) {
		return Afp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Afp cast<Afp,Lin_Pln> (const Lin_Pln& a) {
		return Afp (0,0,0,a[7]);
}  
		 
template<> inline const Afp cast<Afp,Pln_Mnv> (const Pln_Mnv& a) {
		return Afp (0,0,0,a[6]);
}  
		 
template<> inline const Afp cast<Afp,Flp_Afp> (const Flp_Afp& a) {
		return Afp (a[3],a[4],a[5],a[12]);
}  
		 
template<> inline const Afp cast<Afp,Vec_Biv> (const Vec_Biv& a) {
		return Afp (0,0,0,a[3]);
}  
		 
template<> inline const Afp cast<Afp,Vec_Afl> (const Vec_Afl& a) {
		return Afp (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Afp cast<Afp,Vec_Dap> (const Vec_Dap& a) {
		return Afp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Afp cast<Afp,Vec_Daf> (const Vec_Daf& a) {
		return Afp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Afp cast<Afp,Biv_Aff> (const Biv_Aff& a) {
		return Afp (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afp cast<Afp,Biv_Afp> (const Biv_Afp& a) {
		return Afp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Afp cast<Afp,Biv_Dal> (const Biv_Dal& a) {
		return Afp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Afp cast<Afp,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Afp (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Afp cast<Afp,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Afp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Afp cast<Afp,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Afp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Afp cast<Afp,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Afp (a[2],a[3],a[4],0);
}  
		 
		

		
inline Dap involute (const Dap& a) { 
	return Dap (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Dap reverse (const Dap& a) { 
	return Dap (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
		

		
inline Dap conjugate (const Dap& a) { 
	return Dap (-a[0],-a[1],-a[2],-a[3]);
}
			
		 
template<> inline const Dap cast<Dap,Dil> (const Dil& a) {
		return Dap (0,0,0,a[1]);
}  
		 
template<> inline const Dap cast<Dap,Trv> (const Trv& a) {
		return Dap (a[1],a[2],a[3],0);
}  
		 
template<> inline const Dap cast<Dap,Mtd> (const Mtd& a) {
		return Dap (0,0,0,a[7]);
}  
		 
template<> inline const Dap cast<Dap,Mtt> (const Mtt& a) {
		return Dap (a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Dap cast<Dap,Rtt> (const Rtt& a) {
		return Dap (a[4],a[5],a[6],0);
}  
		 
template<> inline const Dap cast<Dap,Rtd> (const Rtd& a) {
		return Dap (0,0,0,a[4]);
}  
		 
template<> inline const Dap cast<Dap,Tvd> (const Tvd& a) {
		return Dap (a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Dap cast<Dap,Tsd> (const Tsd& a) {
		return Dap (0,0,0,a[4]);
}  
		 
template<> inline const Dap cast<Dap,Trt> (const Trt& a) {
		return Dap (a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Dap cast<Dap,Rvd> (const Rvd& a) {
		return Dap (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Dap cast<Dap,Tst> (const Tst& a) {
		return Dap (a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Dap cast<Dap,Tvt> (const Tvt& a) {
		return Dap (a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Dap cast<Dap,Bst> (const Bst& a) {
		return Dap (a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Dap cast<Dap,Mnk> (const Mnk& a) {
		return Dap (0,0,0,a[0]);
}  
		 
template<> inline const Dap cast<Dap,Par> (const Par& a) {
		return Dap (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Dap cast<Dap,Sta> (const Sta& a) {
		return Dap (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dap cast<Dap,Tnv> (const Tnv& a) {
		return Dap (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dap cast<Dap,Flp> (const Flp& a) {
		return Dap (0,0,0,a[3]);
}  
		 
template<> inline const Dap cast<Dap,Afl> (const Afl& a) {
		return Dap (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dap cast<Dap,Ori_Cir> (const Ori_Cir& a) {
		return Dap (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dap cast<Dap,Ori_Lin> (const Ori_Lin& a) {
		return Dap (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dap cast<Dap,Mnk_Par> (const Mnk_Par& a) {
		return Dap (a[1],a[2],a[3],0);
}  
		 
template<> inline const Dap cast<Dap,Mnk_Sta> (const Mnk_Sta& a) {
		return Dap (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dap cast<Dap,Mnk_Afl> (const Mnk_Afl& a) {
		return Dap (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dap cast<Dap,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Dap (a[1],a[2],a[3],a[7]);
}  
		 
template<> inline const Dap cast<Dap,Hyp_Cir> (const Hyp_Cir& a) {
		return Dap (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dap cast<Dap,Hyp_Lin> (const Hyp_Lin& a) {
		return Dap (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dap cast<Dap,Hyp_Vec> (const Hyp_Vec& a) {
		return Dap (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dap cast<Dap,Pnt_Cir> (const Pnt_Cir& a) {
		return Dap (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Dap cast<Dap,Pnt_Lin> (const Pnt_Lin& a) {
		return Dap (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Dap cast<Dap,Pnt_Vec> (const Pnt_Vec& a) {
		return Dap (a[4],a[5],a[6],0);
}  
		 
template<> inline const Dap cast<Dap,Pnt_Afp> (const Pnt_Afp& a) {
		return Dap (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dap cast<Dap,Pnt_Dal> (const Pnt_Dal& a) {
		return Dap (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Dap cast<Dap,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Dap (a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Dap cast<Dap,Par_Biv> (const Par_Biv& a) {
		return Dap (a[4],a[5],a[6],0);
}  
		 
template<> inline const Dap cast<Dap,Sta_Biv> (const Sta_Biv& a) {
		return Dap (a[4],a[5],a[6],0);
}  
		 
template<> inline const Dap cast<Dap,Drv_Dap> (const Drv_Dap& a) {
		return Dap (0,0,0,a[7]);
}  
		 
template<> inline const Dap cast<Dap,Tnv_Flp> (const Tnv_Flp& a) {
		return Dap (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Dap cast<Dap,Tnv_Biv> (const Tnv_Biv& a) {
		return Dap (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dap cast<Dap,Lin_Dlp> (const Lin_Dlp& a) {
		return Dap (0,0,0,a[3]);
}  
		 
template<> inline const Dap cast<Dap,Pln_Biv> (const Pln_Biv& a) {
		return Dap (0,0,0,a[3]);
}  
		 
template<> inline const Dap cast<Dap,Vec_Aff> (const Vec_Aff& a) {
		return Dap (a[4],a[5],a[6],0);
}  
		 
template<> inline const Dap cast<Dap,Vec_Afp> (const Vec_Afp& a) {
		return Dap (a[3],a[4],a[5],0);
}  
		 
template<> inline const Dap cast<Dap,Vec_Dal> (const Vec_Dal& a) {
		return Dap (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dap cast<Dap,Vec_Mnv> (const Vec_Mnv& a) {
		return Dap (0,0,0,a[0]);
}  
		 
template<> inline const Dap cast<Dap,Biv_Dap> (const Biv_Dap& a) {
		return Dap (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dap cast<Dap,Biv_Daf> (const Biv_Daf& a) {
		return Dap (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dap cast<Dap,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Dap (a[4],a[5],a[6],0);
}  
		 
template<> inline const Dap cast<Dap,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Dap (a[4],a[5],a[6],0);
}  
		 
template<> inline const Dap cast<Dap,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Dap (a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Dap cast<Dap,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Dap (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dap cast<Dap,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Dap (a[1],a[2],a[3],a[7]);
}  
		 
		

		
inline Daf involute (const Daf& a) { 
	return Daf (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Daf reverse (const Daf& a) { 
	return Daf (a[0],a[1],a[2],a[3]);
}
			
		 
		

		
inline Daf conjugate (const Daf& a) { 
	return Daf (a[0],a[1],a[2],a[3]);
}
			
		 
template<> inline const Daf cast<Daf,Mtd> (const Mtd& a) {
		return Daf (a[8],a[9],a[10],0);
}  
		 
template<> inline const Daf cast<Daf,Mtt> (const Mtt& a) {
		return Daf (a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Daf cast<Daf,Rtt> (const Rtt& a) {
		return Daf (0,0,0,a[7]);
}  
		 
template<> inline const Daf cast<Daf,Rtd> (const Rtd& a) {
		return Daf (a[5],a[6],a[7],0);
}  
		 
template<> inline const Daf cast<Daf,Trt> (const Trt& a) {
		return Daf (a[11],a[12],a[13],0);
}  
		 
template<> inline const Daf cast<Daf,Rvd> (const Rvd& a) {
		return Daf (a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Daf cast<Daf,Tst> (const Tst& a) {
		return Daf (a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Daf cast<Daf,Tvt> (const Tvt& a) {
		return Daf (a[11],a[12],a[13],0);
}  
		 
template<> inline const Daf cast<Daf,Sph> (const Sph& a) {
		return Daf (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Daf cast<Daf,Tnt> (const Tnt& a) {
		return Daf (0,0,0,a[0]);
}  
		 
template<> inline const Daf cast<Daf,Pln> (const Pln& a) {
		return Daf (a[0],a[1],a[2],0);
}  
		 
template<> inline const Daf cast<Daf,Ori_Cir> (const Ori_Cir& a) {
		return Daf (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Daf cast<Daf,Ori_Drb> (const Ori_Drb& a) {
		return Daf (a[3],a[4],a[5],0);
}  
		 
template<> inline const Daf cast<Daf,Ori_Lin> (const Ori_Lin& a) {
		return Daf (a[6],a[7],a[8],0);
}  
		 
template<> inline const Daf cast<Daf,Ori_Dfp> (const Ori_Dfp& a) {
		return Daf (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Daf cast<Daf,Inf_Cir> (const Inf_Cir& a) {
		return Daf (a[6],a[7],a[8],0);
}  
		 
template<> inline const Daf cast<Daf,Inf_Afp> (const Inf_Afp& a) {
		return Daf (a[3],a[4],a[5],0);
}  
		 
template<> inline const Daf cast<Daf,Inf_Dal> (const Inf_Dal& a) {
		return Daf (a[6],a[7],a[8],0);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Par> (const Mnk_Par& a) {
		return Daf (a[7],a[8],a[9],0);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Sph> (const Mnk_Sph& a) {
		return Daf (0,0,0,a[3]);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Sta> (const Mnk_Sta& a) {
		return Daf (a[6],a[7],a[8],0);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Dll> (const Mnk_Dll& a) {
		return Daf (a[3],a[4],a[5],0);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Biv> (const Mnk_Biv& a) {
		return Daf (a[0],a[1],a[2],0);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Afl> (const Mnk_Afl& a) {
		return Daf (a[3],a[4],a[5],0);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Daf> (const Mnk_Daf& a) {
		return Daf (0,0,0,a[3]);
}  
		 
template<> inline const Daf cast<Daf,Hyp_Pss> (const Hyp_Pss& a) {
		return Daf (0,0,0,a[0]);
}  
		 
template<> inline const Daf cast<Daf,Hyp_Cir> (const Hyp_Cir& a) {
		return Daf (a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Daf cast<Daf,Hyp_Lin> (const Hyp_Lin& a) {
		return Daf (a[9],a[10],a[11],0);
}  
		 
template<> inline const Daf cast<Daf,Hyp_Dfp> (const Hyp_Dfp& a) {
		return Daf (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Daf cast<Daf,Pnt_Cir> (const Pnt_Cir& a) {
		return Daf (a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Daf cast<Daf,Pnt_Lin> (const Pnt_Lin& a) {
		return Daf (a[10],a[11],a[12],0);
}  
		 
template<> inline const Daf cast<Daf,Pnt_Dfp> (const Pnt_Dfp& a) {
		return Daf (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Daf cast<Daf,Pnt_Afp> (const Pnt_Afp& a) {
		return Daf (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Daf cast<Daf,Pnt_Dal> (const Pnt_Dal& a) {
		return Daf (a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Daf cast<Daf,Pnt_Mnv> (const Pnt_Mnv& a) {
		return Daf (a[7],a[8],a[9],0);
}  
		 
template<> inline const Daf cast<Daf,Par_Biv> (const Par_Biv& a) {
		return Daf (a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Daf cast<Daf,Sta_Biv> (const Sta_Biv& a) {
		return Daf (0,0,0,a[10]);
}  
		 
template<> inline const Daf cast<Daf,Drv_Dap> (const Drv_Dap& a) {
		return Daf (a[8],a[9],a[10],0);
}  
		 
template<> inline const Daf cast<Daf,Tnv_Flp> (const Tnv_Flp& a) {
		return Daf (a[8],a[9],a[10],0);
}  
		 
template<> inline const Daf cast<Daf,Tnv_Biv> (const Tnv_Biv& a) {
		return Daf (0,0,0,a[3]);
}  
		 
template<> inline const Daf cast<Daf,Lin_Dfp> (const Lin_Dfp& a) {
		return Daf (a[3],a[4],a[5],0);
}  
		 
template<> inline const Daf cast<Daf,Lin_Dlp> (const Lin_Dlp& a) {
		return Daf (a[4],a[5],a[6],0);
}  
		 
template<> inline const Daf cast<Daf,Pln_Biv> (const Pln_Biv& a) {
		return Daf (a[4],a[5],a[6],0);
}  
		 
template<> inline const Daf cast<Daf,Vec_Afp> (const Vec_Afp& a) {
		return Daf (0,0,0,a[6]);
}  
		 
template<> inline const Daf cast<Daf,Vec_Dal> (const Vec_Dal& a) {
		return Daf (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Daf cast<Daf,Vec_Mnv> (const Vec_Mnv& a) {
		return Daf (a[1],a[2],a[3],0);
}  
		 
template<> inline const Daf cast<Daf,Biv_Dap> (const Biv_Dap& a) {
		return Daf (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Daf cast<Daf,Biv_Daf> (const Biv_Daf& a) {
		return Daf (a[4],a[5],a[6],0);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Daf (a[10],a[11],a[12],0);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Pnt_Dal> (const Mnk_Pnt_Dal& a) {
		return Daf (a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Daf cast<Daf,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Daf (a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Daf cast<Daf,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Daf (0,0,0,a[6]);
}  
		 
template<> inline const Daf cast<Daf,Pss_Mnk_Pnt_Sph> (const Pss_Mnk_Pnt_Sph& a) {
		return Daf (a[8],a[9],a[10],0);
}  
		 
		

		
inline Dal involute (const Dal& a) { 
	return Dal (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5]);
}
			
		 
		

		
inline Dal reverse (const Dal& a) { 
	return Dal (-a[0],-a[1],-a[2],-a[3],-a[4],-a[5]);
}
			
		 
		

		
inline Dal conjugate (const Dal& a) { 
	return Dal (a[0],a[1],a[2],a[3],a[4],a[5]);
}
			
		 
template<> inline const Dal cast<Dal,Rtc> (const Rtc& a) {
		return Dal (a[5],a[6],a[7],a[11],a[12],a[13]);
}  
		 
template<> inline const Dal cast<Dal,Cir> (const Cir& a) {
		return Dal (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dal cast<Dal,Tnb> (const Tnb& a) {
		return Dal (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Lin> (const Lin& a) {
		return Dal (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dal cast<Dal,Afp> (const Afp& a) {
		return Dal (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Mnv> (const Mnv& a) {
		return Dal (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dal cast<Dal,Ori_Par> (const Ori_Par& a) {
		return Dal (a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Dal cast<Dal,Ori_Sph> (const Ori_Sph& a) {
		return Dal (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Ori_Sta> (const Ori_Sta& a) {
		return Dal (a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Dal cast<Dal,Ori_Drv> (const Ori_Drv& a) {
		return Dal (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dal cast<Dal,Ori_Flp> (const Ori_Flp& a) {
		return Dal (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Dal cast<Dal,Inf_Par> (const Inf_Par& a) {
		return Dal (0,0,0,a[7],a[8],a[9]);
}  
		 
template<> inline const Dal cast<Dal,Inf_Sta> (const Inf_Sta& a) {
		return Dal (0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Dal cast<Dal,Inf_Dap> (const Inf_Dap& a) {
		return Dal (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Dal cast<Dal,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Dal (0,0,0,a[2],a[3],a[4]);
}  
		 
template<> inline const Dal cast<Dal,Mnk_Cir> (const Mnk_Cir& a) {
		return Dal (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Dal (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Dal cast<Dal,Mnk_Aff> (const Mnk_Aff& a) {
		return Dal (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Dal cast<Dal,Mnk_Afp> (const Mnk_Afp& a) {
		return Dal (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Mnk_Dal> (const Mnk_Dal& a) {
		return Dal (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Hyp_Par> (const Hyp_Par& a) {
		return Dal (a[5],a[6],a[7],a[11],a[12],a[13]);
}  
		 
template<> inline const Dal cast<Dal,Hyp_Sph> (const Hyp_Sph& a) {
		return Dal (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Hyp_Sta> (const Hyp_Sta& a) {
		return Dal (a[3],a[4],a[5],a[9],a[10],a[11]);
}  
		 
template<> inline const Dal cast<Dal,Hyp_Flp> (const Hyp_Flp& a) {
		return Dal (0,0,0,a[5],a[6],a[7]);
}  
		 
template<> inline const Dal cast<Dal,Hyp_Biv> (const Hyp_Biv& a) {
		return Dal (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Pss_Sta> (const Pss_Sta& a) {
		return Dal (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dal cast<Dal,Pnt_Par> (const Pnt_Par& a) {
		return Dal (a[5],a[6],a[7],a[11],a[12],a[13]);
}  
		 
template<> inline const Dal cast<Dal,Pnt_Sph> (const Pnt_Sph& a) {
		return Dal (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dal cast<Dal,Pnt_Flp> (const Pnt_Flp& a) {
		return Dal (0,0,0,a[8],a[9],a[10]);
}  
		 
template<> inline const Dal cast<Dal,Pnt_Dll> (const Pnt_Dll& a) {
		return Dal (a[4],a[5],a[6],a[10],a[11],a[12]);
}  
		 
template<> inline const Dal cast<Dal,Pnt_Biv> (const Pnt_Biv& a) {
		return Dal (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Pnt_Afl> (const Pnt_Afl& a) {
		return Dal (a[4],a[5],a[6],a[10],a[11],a[12]);
}  
		 
template<> inline const Dal cast<Dal,Pnt_Dap> (const Pnt_Dap& a) {
		return Dal (a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Dal cast<Dal,Par_Drb> (const Par_Drb& a) {
		return Dal (0,0,0,a[7],a[8],a[9]);
}  
		 
template<> inline const Dal cast<Dal,Par_Tnb> (const Par_Tnb& a) {
		return Dal (a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Dal cast<Dal,Par_Dfp> (const Par_Dfp& a) {
		return Dal (a[4],a[5],a[6],a[10],a[11],a[12]);
}  
		 
template<> inline const Dal cast<Dal,Par_Afp> (const Par_Afp& a) {
		return Dal (a[4],a[5],a[6],a[10],a[11],a[12]);
}  
		 
template<> inline const Dal cast<Dal,Par_Mnv> (const Par_Mnv& a) {
		return Dal (a[5],a[6],a[7],a[11],a[12],a[13]);
}  
		 
template<> inline const Dal cast<Dal,Sph_Vec> (const Sph_Vec& a) {
		return Dal (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dal cast<Dal,Sta_Vec> (const Sta_Vec& a) {
		return Dal (a[5],a[6],a[7],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Sta_Tri> (const Sta_Tri& a) {
		return Dal (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Sta_Mnv> (const Sta_Mnv& a) {
		return Dal (a[2],a[3],a[4],a[8],a[9],a[10]);
}  
		 
template<> inline const Dal cast<Dal,Drv_Tnb> (const Drv_Tnb& a) {
		return Dal (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dal cast<Dal,Drv_Afp> (const Drv_Afp& a) {
		return Dal (0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Dal cast<Dal,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Dal (a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Dal cast<Dal,Tnv_Vec> (const Tnv_Vec& a) {
		return Dal (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Lin_Dll> (const Lin_Dll& a) {
		return Dal (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Dal cast<Dal,Pln_Dfp> (const Pln_Dfp& a) {
		return Dal (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Dal cast<Dal,Pln_Dlp> (const Pln_Dlp& a) {
		return Dal (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dal cast<Dal,Flp_Afp> (const Flp_Afp& a) {
		return Dal (a[3],a[4],a[5],a[9],a[10],a[11]);
}  
		 
template<> inline const Dal cast<Dal,Vec_Afl> (const Vec_Afl& a) {
		return Dal (a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Vec_Dap> (const Vec_Dap& a) {
		return Dal (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Dal cast<Dal,Vec_Daf> (const Vec_Daf& a) {
		return Dal (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Dal cast<Dal,Biv_Aff> (const Biv_Aff& a) {
		return Dal (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Biv_Afp> (const Biv_Afp& a) {
		return Dal (a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Biv_Dal> (const Biv_Dal& a) {
		return Dal (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Dal cast<Dal,Biv_Mnv> (const Biv_Mnv& a) {
		return Dal (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dal cast<Dal,Mnk_Pnt_Sph> (const Mnk_Pnt_Sph& a) {
		return Dal (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Dal cast<Dal,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Dal (a[4],a[5],a[6],a[10],a[11],a[12]);
}  
		 
template<> inline const Dal cast<Dal,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Dal (a[4],a[5],a[6],a[10],a[11],a[12]);
}  
		 
template<> inline const Dal cast<Dal,Hyp_Vec_Mnv> (const Hyp_Vec_Mnv& a) {
		return Dal (a[2],a[3],a[4],0,0,0);
}  
		 
		

		
inline Mnv involute (const Mnv& a) { 
	return Mnv (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Mnv reverse (const Mnv& a) { 
	return Mnv (-a[0],-a[1],-a[2]);
}
			
		 
		

		
inline Mnv conjugate (const Mnv& a) { 
	return Mnv (a[0],a[1],a[2]);
}
			
		 
template<> inline const Mnv cast<Mnv,Rtc> (const Rtc& a) {
		return Mnv (a[11],a[12],a[13]);
}  
		 
template<> inline const Mnv cast<Mnv,Cir> (const Cir& a) {
		return Mnv (a[6],a[7],a[8]);
}  
		 
template<> inline const Mnv cast<Mnv,Lin> (const Lin& a) {
		return Mnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Mnv cast<Mnv,Dal> (const Dal& a) {
		return Mnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Mnv cast<Mnv,Ori_Par> (const Ori_Par& a) {
		return Mnv (a[7],a[8],a[9]);
}  
		 
template<> inline const Mnv cast<Mnv,Ori_Sta> (const Ori_Sta& a) {
		return Mnv (a[6],a[7],a[8]);
}  
		 
template<> inline const Mnv cast<Mnv,Ori_Drv> (const Ori_Drv& a) {
		return Mnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Mnv cast<Mnv,Ori_Flp> (const Ori_Flp& a) {
		return Mnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Mnv cast<Mnv,Inf_Par> (const Inf_Par& a) {
		return Mnv (a[7],a[8],a[9]);
}  
		 
template<> inline const Mnv cast<Mnv,Inf_Sta> (const Inf_Sta& a) {
		return Mnv (a[6],a[7],a[8]);
}  
		 
template<> inline const Mnv cast<Mnv,Inf_Dap> (const Inf_Dap& a) {
		return Mnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Mnv cast<Mnv,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Mnv (a[2],a[3],a[4]);
}  
		 
template<> inline const Mnv cast<Mnv,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Mnv (a[1],a[2],a[3]);
}  
		 
template<> inline const Mnv cast<Mnv,Mnk_Aff> (const Mnk_Aff& a) {
		return Mnv (a[1],a[2],a[3]);
}  
		 
template<> inline const Mnv cast<Mnv,Hyp_Par> (const Hyp_Par& a) {
		return Mnv (a[11],a[12],a[13]);
}  
		 
template<> inline const Mnv cast<Mnv,Hyp_Sta> (const Hyp_Sta& a) {
		return Mnv (a[9],a[10],a[11]);
}  
		 
template<> inline const Mnv cast<Mnv,Hyp_Flp> (const Hyp_Flp& a) {
		return Mnv (a[5],a[6],a[7]);
}  
		 
template<> inline const Mnv cast<Mnv,Pss_Sta> (const Pss_Sta& a) {
		return Mnv (a[6],a[7],a[8]);
}  
		 
template<> inline const Mnv cast<Mnv,Pnt_Par> (const Pnt_Par& a) {
		return Mnv (a[11],a[12],a[13]);
}  
		 
template<> inline const Mnv cast<Mnv,Pnt_Sph> (const Pnt_Sph& a) {
		return Mnv (a[6],a[7],a[8]);
}  
		 
template<> inline const Mnv cast<Mnv,Pnt_Flp> (const Pnt_Flp& a) {
		return Mnv (a[8],a[9],a[10]);
}  
		 
template<> inline const Mnv cast<Mnv,Pnt_Dll> (const Pnt_Dll& a) {
		return Mnv (a[10],a[11],a[12]);
}  
		 
template<> inline const Mnv cast<Mnv,Pnt_Afl> (const Pnt_Afl& a) {
		return Mnv (a[10],a[11],a[12]);
}  
		 
template<> inline const Mnv cast<Mnv,Pnt_Dap> (const Pnt_Dap& a) {
		return Mnv (a[8],a[9],a[10]);
}  
		 
template<> inline const Mnv cast<Mnv,Par_Drb> (const Par_Drb& a) {
		return Mnv (a[7],a[8],a[9]);
}  
		 
template<> inline const Mnv cast<Mnv,Par_Tnb> (const Par_Tnb& a) {
		return Mnv (a[7],a[8],a[9]);
}  
		 
template<> inline const Mnv cast<Mnv,Par_Dfp> (const Par_Dfp& a) {
		return Mnv (a[10],a[11],a[12]);
}  
		 
template<> inline const Mnv cast<Mnv,Par_Afp> (const Par_Afp& a) {
		return Mnv (a[10],a[11],a[12]);
}  
		 
template<> inline const Mnv cast<Mnv,Par_Mnv> (const Par_Mnv& a) {
		return Mnv (a[11],a[12],a[13]);
}  
		 
template<> inline const Mnv cast<Mnv,Sph_Vec> (const Sph_Vec& a) {
		return Mnv (a[6],a[7],a[8]);
}  
		 
template<> inline const Mnv cast<Mnv,Sta_Mnv> (const Sta_Mnv& a) {
		return Mnv (a[8],a[9],a[10]);
}  
		 
template<> inline const Mnv cast<Mnv,Drv_Tnb> (const Drv_Tnb& a) {
		return Mnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Mnv cast<Mnv,Drv_Afp> (const Drv_Afp& a) {
		return Mnv (a[6],a[7],a[8]);
}  
		 
template<> inline const Mnv cast<Mnv,Tnv_Dfp> (const Tnv_Dfp& a) {
		return Mnv (a[6],a[7],a[8]);
}  
		 
template<> inline const Mnv cast<Mnv,Lin_Dll> (const Lin_Dll& a) {
		return Mnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Mnv cast<Mnv,Pln_Dfp> (const Pln_Dfp& a) {
		return Mnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Mnv cast<Mnv,Pln_Dlp> (const Pln_Dlp& a) {
		return Mnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Mnv cast<Mnv,Flp_Afp> (const Flp_Afp& a) {
		return Mnv (a[9],a[10],a[11]);
}  
		 
template<> inline const Mnv cast<Mnv,Vec_Dap> (const Vec_Dap& a) {
		return Mnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Mnv cast<Mnv,Vec_Daf> (const Vec_Daf& a) {
		return Mnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Mnv cast<Mnv,Biv_Dal> (const Biv_Dal& a) {
		return Mnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Mnv cast<Mnv,Biv_Mnv> (const Biv_Mnv& a) {
		return Mnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Mnv cast<Mnv,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Mnv (a[10],a[11],a[12]);
}  
		 
template<> inline const Mnv cast<Mnv,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Mnv (a[10],a[11],a[12]);
}  

} //vsr::
#endif
