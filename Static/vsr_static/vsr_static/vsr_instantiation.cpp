//
//  vsr_instantiation.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 9/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

#include "MV.h"
#include "vsr_casts.h"

namespace vsr {
  
	template class MV<4,ROT,float>;
	template class MV<8,MOT,float>;
	template class MV<2,DIL,float>;
	template class MV<4,TRV,float>;
	template class MV<12,MTD,float>;
	template class MV<4,TRS,float>;
	template class MV<16,RTC,float>;
	template class MV<16,MTT,float>;
	template class MV<8,RTT,float>;
	template class MV<8,RTD,float>;
	template class MV<5,TVD,float>;
	template class MV<5,TSD,float>;
	template class MV<14,TRT,float>;
	template class MV<12,RVD,float>;
	template class MV<15,TST,float>;
	template class MV<15,TVT,float>;
	template class MV<11,BST,float>;
	template class MV<1,SCA,float>;
	template class MV<1,ORI,float>;
	template class MV<1,INF,float>;
	template class MV<1,MNK,float>;
	template class MV<2,HYP,float>;
	template class MV<1,PSS,float>;
	template class MV<5,PNT,float>;
	template class MV<10,PAR,float>;
	template class MV<10,CIR,float>;
	template class MV<5,SPH,float>;
	template class MV<9,STA,float>;
	template class MV<3,DRV,float>;
	template class MV<3,DRB,float>;
	template class MV<1,DRT,float>;
	template class MV<3,TNV,float>;
	template class MV<3,TNB,float>;
	template class MV<1,TNT,float>;
	template class MV<6,LIN,float>;
	template class MV<4,PLN,float>;
	template class MV<4,FLP,float>;
	template class MV<4,DFP,float>;
	template class MV<6,DLL,float>;
	template class MV<4,DLP,float>;
	template class MV<3,VEC,float>;
	template class MV<3,BIV,float>;
	template class MV<1,TRI,float>;
	template class MV<4,AFF,float>;
	template class MV<6,AFL,float>;
	template class MV<4,AFP,float>;
	template class MV<4,DAP,float>;
	template class MV<4,DAF,float>;
	template class MV<6,DAL,float>;
	template class MV<3,MNV,float>;
    //	template class MV<0,ORI_ORI,float>;
//	template class MV<10,ORI_PAR,float>;
//	template class MV<10,ORI_CIR,float>;
//	template class MV<5,ORI_SPH,float>;
//	template class MV<9,ORI_STA,float>;
//	template class MV<6,ORI_DRV,float>;
//	template class MV<6,ORI_DRB,float>;
//	template class MV<2,ORI_DRT,float>;
//	template class MV<9,ORI_LIN,float>;
//	template class MV<7,ORI_FLP,float>;
//	template class MV<7,ORI_DFP,float>;
//	template class MV<10,INF_PAR,float>;
//	template class MV<10,INF_CIR,float>;
//	template class MV<5,INF_SPH,float>;
//	template class MV<9,INF_STA,float>;
//	template class MV<7,INF_AFP,float>;
//	template class MV<7,INF_DAP,float>;
//	template class MV<9,INF_DAL,float>;
//	template class MV<5,MNK_PNT,float>;
//	template class MV<10,MNK_PAR,float>;
//	template class MV<10,MNK_CIR,float>;
//	template class MV<5,MNK_SPH,float>;
//	template class MV<9,MNK_STA,float>;
//	template class MV<6,MNK_LIN,float>;
//	template class MV<4,MNK_PLN,float>;
//	template class MV<4,MNK_DFP,float>;
//	template class MV<6,MNK_DLL,float>;
//	template class MV<4,MNK_DLP,float>;
//	template class MV<3,MNK_BIV,float>;
//	template class MV<4,MNK_AFF,float>;
//	template class MV<6,MNK_AFL,float>;
//	template class MV<4,MNK_AFP,float>;
//	template class MV<4,MNK_DAF,float>;
//	template class MV<6,MNK_DAL,float>;
//	template class MV<2,HYP_PSS,float>;
//	template class MV<8,HYP_PNT,float>;
//	template class MV<14,HYP_PAR,float>;
//	template class MV<14,HYP_CIR,float>;
//	template class MV<8,HYP_SPH,float>;
//	template class MV<12,HYP_STA,float>;
//	template class MV<12,HYP_LIN,float>;
//	template class MV<8,HYP_FLP,float>;
//	template class MV<8,HYP_DFP,float>;
//	template class MV<6,HYP_VEC,float>;
//	template class MV<6,HYP_BIV,float>;
//	template class MV<9,PSS_STA,float>;
//	template class MV<15,PNT_PAR,float>;
//	template class MV<15,PNT_CIR,float>;
//	template class MV<11,PNT_SPH,float>;
//	template class MV<14,PNT_LIN,float>;
//	template class MV<11,PNT_FLP,float>;
//	template class MV<11,PNT_DFP,float>;
	template class MV<14,PNT_DLL,float>;
//	template class MV<10,PNT_VEC,float>;
//	template class MV<10,PNT_BIV,float>;
//	template class MV<14,PNT_AFL,float>;
//	template class MV<11,PNT_AFP,float>;
//	template class MV<11,PNT_DAP,float>;
//	template class MV<14,PNT_DAL,float>;
//	template class MV<10,PNT_MNV,float>;
//	template class MV<12,PAR_DRB,float>;
//	template class MV<12,PAR_TNB,float>;
//	template class MV<15,PAR_DFP,float>;
//	template class MV<15,PAR_BIV,float>;
//	template class MV<15,PAR_AFP,float>;
//	template class MV<15,PAR_MNV,float>;
//	template class MV<10,SPH_VEC,float>;
//	template class MV<12,STA_VEC,float>;
//	template class MV<12,STA_BIV,float>;
//	template class MV<9,STA_TRI,float>;
//	template class MV<12,STA_MNV,float>;
//	template class MV<8,DRV_TNB,float>;
//	template class MV<4,DRV_LIN,float>;
//	template class MV<4,DRV_PLN,float>;
//	template class MV<11,DRV_AFP,float>;
//	template class MV<11,DRV_DAP,float>;
//	template class MV<11,TNV_FLP,float>;
//	template class MV<11,TNV_DFP,float>;
//	template class MV<4,TNV_VEC,float>;
//	template class MV<4,TNV_BIV,float>;
//	template class MV<8,LIN_PLN,float>;
//	template class MV<7,LIN_FLP,float>;
//	template class MV<7,LIN_DFP,float>;
//	template class MV<8,LIN_DLL,float>;
//	template class MV<8,LIN_DLP,float>;
//	template class MV<7,PLN_PLN,float>;
//	template class MV<7,PLN_FLP,float>;
//	template class MV<7,PLN_DFP,float>;
//	template class MV<7,PLN_DLP,float>;
//	template class MV<7,PLN_BIV,float>;
//	template class MV<7,PLN_MNV,float>;
//	template class MV<14,FLP_AFP,float>;
//	template class MV<4,VEC_BIV,float>;
//	template class MV<7,VEC_AFF,float>;
//	template class MV<8,VEC_AFL,float>;
//	template class MV<7,VEC_AFP,float>;
//	template class MV<7,VEC_DAP,float>;
//	template class MV<7,VEC_DAF,float>;
//	template class MV<8,VEC_DAL,float>;
//	template class MV<4,VEC_MNV,float>;
//	template class MV<7,BIV_AFF,float>;
//	template class MV<7,BIV_AFP,float>;
//	template class MV<7,BIV_DAP,float>;
//	template class MV<7,BIV_DAF,float>;
//	template class MV<8,BIV_DAL,float>;
//	template class MV<4,BIV_MNV,float>;
//	template class MV<11,MNK_PNT_SPH,float>;
//	template class MV<14,MNK_PNT_LIN,float>;
//	template class MV<14,MNK_PNT_DLL,float>;
//	template class MV<14,MNK_PNT_AFL,float>;
//	template class MV<14,MNK_PNT_DAL,float>;
//	template class MV<12,MNK_STA_BIV,float>;
//	template class MV<8,HYP_DRV_TNB,float>;
//	template class MV<8,HYP_VEC_MNV,float>;
//	template class MV<11,PSS_MNK_PNT_SPH,float>;
    
    
}