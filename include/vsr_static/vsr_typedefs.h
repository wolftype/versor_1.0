	#ifndef VSR_TYPEDEFS_H_INCLUDED
	#define VSR_TYPEDEFS_H_INCLUDED
	 
	#include "MV.h"
	
	namespace vsr{
	
	
	typedef MV<4,ROT,float>  Rot;
	
	typedef MV<8,MOT,float>  Mot;
	
	typedef MV<2,DIL,float>  Dil;
	
	typedef MV<4,TRV,float>  Trv;
	
	typedef MV<12,MTD,float>  Mtd;
	
	typedef MV<4,TRS,float>  Trs;
	
	typedef MV<16,RTC,float>  Rtc;
	
	typedef MV<16,MTT,float>  Mtt;
	
	typedef MV<8,RTT,float>  Rtt;
	
	typedef MV<8,RTD,float>  Rtd;
	
	typedef MV<5,TVD,float>  Tvd;
	
	typedef MV<5,TSD,float>  Tsd;
	
	typedef MV<14,TRT,float>  Trt;
	
	typedef MV<12,RVD,float>  Rvd;
	
	typedef MV<15,TST,float>  Tst;
	
	typedef MV<15,TVT,float>  Tvt;
	
	typedef MV<1,SCA,float>  Sca;
	
	typedef MV<1,ORI,float>  Ori;
	
	typedef MV<1,INF,float>  Inf;
	
	typedef MV<1,MNK,float>  Mnk;
	
	typedef MV<2,HYP,float>  Hyp;
	
	typedef MV<1,PSS,float>  Pss;
	
	typedef MV<5,PNT,float>  Pnt;
	
	typedef MV<10,PAR,float>  Par;
	
	typedef MV<10,CIR,float>  Cir;
	
	typedef MV<5,SPH,float>  Sph;
	
	typedef MV<9,STA,float>  Sta;
	
	typedef MV<3,DRV,float>  Drv;
	
	typedef MV<3,DRB,float>  Drb;
	
	typedef MV<1,DRT,float>  Drt;
	
	typedef MV<3,TNV,float>  Tnv;
	
	typedef MV<3,TNB,float>  Tnb;
	
	typedef MV<1,TNT,float>  Tnt;
	
	typedef MV<6,LIN,float>  Lin;
	
	typedef MV<4,PLN,float>  Pln;
	
	typedef MV<4,FLP,float>  Flp;
	
	typedef MV<6,DLL,float>  Dll;
	
	typedef MV<4,DLP,float>  Dlp;
	
	typedef MV<3,VEC,float>  Vec;
	
	typedef MV<3,BIV,float>  Biv;
	
	typedef MV<1,TRI,float>  Tri;
	
	typedef MV<4,AFF,float>  Aff;
	
	typedef MV<6,AFL,float>  Afl;
	
	typedef MV<4,AFP,float>  Afp;
	
	typedef MV<0,ORI_ORI,float>  Ori_Ori;
	
	typedef MV<10,ORI_PAR,float>  Ori_Par;
	
	typedef MV<10,ORI_CIR,float>  Ori_Cir;
	
	typedef MV<5,ORI_SPH,float>  Ori_Sph;
	
	typedef MV<9,ORI_STA,float>  Ori_Sta;
	
	typedef MV<6,ORI_DRV,float>  Ori_Drv;
	
	typedef MV<6,ORI_DRB,float>  Ori_Drb;
	
	typedef MV<2,ORI_DRT,float>  Ori_Drt;
	
	typedef MV<9,ORI_LIN,float>  Ori_Lin;
	
	typedef MV<7,ORI_FLP,float>  Ori_Flp;
	
	typedef MV<10,INF_PAR,float>  Inf_Par;
	
	typedef MV<10,INF_CIR,float>  Inf_Cir;
	
	typedef MV<5,INF_SPH,float>  Inf_Sph;
	
	typedef MV<9,INF_STA,float>  Inf_Sta;
	
	typedef MV<7,INF_AFP,float>  Inf_Afp;
	
	typedef MV<5,MNK_PNT,float>  Mnk_Pnt;
	
	typedef MV<10,MNK_PAR,float>  Mnk_Par;
	
	typedef MV<10,MNK_CIR,float>  Mnk_Cir;
	
	typedef MV<5,MNK_SPH,float>  Mnk_Sph;
	
	typedef MV<9,MNK_STA,float>  Mnk_Sta;
	
	typedef MV<6,MNK_LIN,float>  Mnk_Lin;
	
	typedef MV<4,MNK_PLN,float>  Mnk_Pln;
	
	typedef MV<6,MNK_DLL,float>  Mnk_Dll;
	
	typedef MV<4,MNK_DLP,float>  Mnk_Dlp;
	
	typedef MV<3,MNK_VEC,float>  Mnk_Vec;
	
	typedef MV<3,MNK_BIV,float>  Mnk_Biv;
	
	typedef MV<4,MNK_AFF,float>  Mnk_Aff;
	
	typedef MV<6,MNK_AFL,float>  Mnk_Afl;
	
	typedef MV<4,MNK_AFP,float>  Mnk_Afp;
	
	typedef MV<2,HYP_PSS,float>  Hyp_Pss;
	
	typedef MV<8,HYP_PNT,float>  Hyp_Pnt;
	
	typedef MV<14,HYP_PAR,float>  Hyp_Par;
	
	typedef MV<14,HYP_CIR,float>  Hyp_Cir;
	
	typedef MV<8,HYP_SPH,float>  Hyp_Sph;
	
	typedef MV<12,HYP_STA,float>  Hyp_Sta;
	
	typedef MV<12,HYP_LIN,float>  Hyp_Lin;
	
	typedef MV<8,HYP_FLP,float>  Hyp_Flp;
	
	typedef MV<6,HYP_VEC,float>  Hyp_Vec;
	
	typedef MV<6,HYP_BIV,float>  Hyp_Biv;
	
	typedef MV<8,HYP_AFP,float>  Hyp_Afp;
	
	typedef MV<9,PSS_STA,float>  Pss_Sta;
	
	typedef MV<4,PSS_FLP,float>  Pss_Flp;
	
	typedef MV<4,PSS_AFF,float>  Pss_Aff;
	
	typedef MV<6,PSS_AFL,float>  Pss_Afl;
	
	typedef MV<4,PSS_AFP,float>  Pss_Afp;
	
	typedef MV<11,PNT_PNT,float>  Pnt_Pnt;
	
	typedef MV<15,PNT_PAR,float>  Pnt_Par;
	
	typedef MV<15,PNT_CIR,float>  Pnt_Cir;
	
	typedef MV<11,PNT_SPH,float>  Pnt_Sph;
	
	typedef MV<14,PNT_LIN,float>  Pnt_Lin;
	
	typedef MV<11,PNT_FLP,float>  Pnt_Flp;
	
	typedef MV<14,PNT_DLL,float>  Pnt_Dll;
	
	typedef MV<10,PNT_VEC,float>  Pnt_Vec;
	
	typedef MV<10,PNT_BIV,float>  Pnt_Biv;
	
	typedef MV<14,PNT_AFL,float>  Pnt_Afl;
	
	typedef MV<11,PNT_AFP,float>  Pnt_Afp;
	
	typedef MV<12,PAR_DRB,float>  Par_Drb;
	
	typedef MV<12,PAR_TNB,float>  Par_Tnb;
	
	typedef MV<15,PAR_BIV,float>  Par_Biv;
	
	typedef MV<15,PAR_AFP,float>  Par_Afp;
	
	typedef MV<15,CIR_FLP,float>  Cir_Flp;
	
	typedef MV<15,CIR_BIV,float>  Cir_Biv;
	
	typedef MV<11,SPH_FLP,float>  Sph_Flp;
	
	typedef MV<10,SPH_VEC,float>  Sph_Vec;
	
	typedef MV<10,SPH_BIV,float>  Sph_Biv;
	
	typedef MV<14,SPH_AFL,float>  Sph_Afl;
	
	typedef MV<11,SPH_AFP,float>  Sph_Afp;
	
	typedef MV<9,STA_DRT,float>  Sta_Drt;
	
	typedef MV<12,STA_VEC,float>  Sta_Vec;
	
	typedef MV<12,STA_BIV,float>  Sta_Biv;
	
	typedef MV<9,STA_TRI,float>  Sta_Tri;
	
	typedef MV<8,DRV_TNB,float>  Drv_Tnb;
	
	typedef MV<4,DRV_LIN,float>  Drv_Lin;
	
	typedef MV<4,DRV_PLN,float>  Drv_Pln;
	
	typedef MV<11,DRV_AFP,float>  Drv_Afp;
	
	typedef MV<11,DRB_AFP,float>  Drb_Afp;
	
	typedef MV<7,DRT_AFP,float>  Drt_Afp;
	
	typedef MV<11,TNV_FLP,float>  Tnv_Flp;
	
	typedef MV<4,TNV_VEC,float>  Tnv_Vec;
	
	typedef MV<4,TNV_BIV,float>  Tnv_Biv;
	
	typedef MV<11,TNB_FLP,float>  Tnb_Flp;
	
	typedef MV<7,TNT_FLP,float>  Tnt_Flp;
	
	typedef MV<8,LIN_PLN,float>  Lin_Pln;
	
	typedef MV<7,LIN_FLP,float>  Lin_Flp;
	
	typedef MV<8,LIN_DLL,float>  Lin_Dll;
	
	typedef MV<8,LIN_DLP,float>  Lin_Dlp;
	
	typedef MV<7,PLN_PLN,float>  Pln_Pln;
	
	typedef MV<7,PLN_FLP,float>  Pln_Flp;
	
	typedef MV<7,PLN_DLP,float>  Pln_Dlp;
	
	typedef MV<7,PLN_BIV,float>  Pln_Biv;
	
	typedef MV<7,FLP_DLL,float>  Flp_Dll;
	
	typedef MV<7,FLP_DLP,float>  Flp_Dlp;
	
	typedef MV<4,FLP_TRI,float>  Flp_Tri;
	
	typedef MV<14,FLP_AFP,float>  Flp_Afp;
	
	typedef MV<7,DLP_BIV,float>  Dlp_Biv;
	
	typedef MV<4,VEC_BIV,float>  Vec_Biv;
	
	typedef MV<7,VEC_AFF,float>  Vec_Aff;
	
	typedef MV<8,VEC_AFL,float>  Vec_Afl;
	
	typedef MV<7,VEC_AFP,float>  Vec_Afp;
	
	typedef MV<7,BIV_AFF,float>  Biv_Aff;
	
	typedef MV<7,BIV_AFP,float>  Biv_Afp;
	
	typedef MV<4,TRI_AFF,float>  Tri_Aff;
	
	typedef MV<6,TRI_AFL,float>  Tri_Afl;
	
	typedef MV<11,MNK_PNT_PNT,float>  Mnk_Pnt_Pnt;
	
	typedef MV<11,MNK_PNT_SPH,float>  Mnk_Pnt_Sph;
	
	typedef MV<14,MNK_PNT_LIN,float>  Mnk_Pnt_Lin;
	
	typedef MV<14,MNK_PNT_DLL,float>  Mnk_Pnt_Dll;
	
	typedef MV<14,MNK_PNT_AFL,float>  Mnk_Pnt_Afl;
	
	typedef MV<14,MNK_SPH_AFL,float>  Mnk_Sph_Afl;
	
	typedef MV<12,MNK_STA_VEC,float>  Mnk_Sta_Vec;
	
	typedef MV<12,MNK_STA_BIV,float>  Mnk_Sta_Biv;
	
	typedef MV<4,MNK_VEC_BIV,float>  Mnk_Vec_Biv;
	
	typedef MV<7,MNK_VEC_AFF,float>  Mnk_Vec_Aff;
	
	typedef MV<8,MNK_VEC_AFL,float>  Mnk_Vec_Afl;
	
	typedef MV<7,MNK_VEC_AFP,float>  Mnk_Vec_Afp;
	
	typedef MV<7,MNK_BIV_AFF,float>  Mnk_Biv_Aff;
	
	typedef MV<7,MNK_BIV_AFP,float>  Mnk_Biv_Afp;
	
	typedef MV<8,HYP_DRV_TNB,float>  Hyp_Drv_Tnb;
	
	typedef MV<4,PSS_VEC_BIV,float>  Pss_Vec_Biv;
	
	typedef MV<8,PSS_VEC_AFL,float>  Pss_Vec_Afl;
	
	typedef MV<8,PSS_HYP_DRV_TNB,float>  Pss_Hyp_Drv_Tnb;
	
	
		template<class T, class S>
	inline const T cast (const S& s ){
		T temp;
		if ( T::size >= S::size ) std::copy( &(s[0]), &(s[0])+S::size, &(temp[0]) );
		else std::copy ( &(s[0]), &(s[0])+T::size, &(temp[0]) );
			
		return temp;
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
		 
template<> inline const Sca cast<Sca,Mnk_Par> (const Mnk_Par& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Pnt_Pnt> (const Pnt_Pnt& a) {
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
		 
template<> inline const Sca cast<Sca,Drb_Afp> (const Drb_Afp& a) {
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
		 
template<> inline const Sca cast<Sca,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Sca (a[0]);
}  
		 
template<> inline const Sca cast<Sca,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
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
		 
template<> inline const Ori cast<Ori,Par_Tnb> (const Par_Tnb& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Par_Afp> (const Par_Afp& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Cir_Biv> (const Cir_Biv& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Sph_Afp> (const Sph_Afp& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Sta_Vec> (const Sta_Vec& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Tnv_Vec> (const Tnv_Vec& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Vec_Afl> (const Vec_Afl& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Biv_Afp> (const Biv_Afp& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Ori (a[3]);
}  
		 
template<> inline const Ori cast<Ori,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Mnk_Biv_Afp> (const Mnk_Biv_Afp& a) {
		return Ori (a[0]);
}  
		 
template<> inline const Ori cast<Ori,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Inf cast<Inf,Par_Drb> (const Par_Drb& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Cir_Flp> (const Cir_Flp& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Cir_Biv> (const Cir_Biv& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Sph_Afp> (const Sph_Afp& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Sta_Vec> (const Sta_Vec& a) {
		return Inf (a[4]);
}  
		 
template<> inline const Inf cast<Inf,Drv_Lin> (const Drv_Lin& a) {
		return Inf (a[0]);
}  
		 
template<> inline const Inf cast<Inf,Drt_Afp> (const Drt_Afp& a) {
		return Inf (a[3]);
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
		 
template<> inline const Inf cast<Inf,Flp_Dlp> (const Flp_Dlp& a) {
		return Inf (a[0]);
}  
		 
template<> inline const Inf cast<Inf,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Inf (a[3]);
}  
		 
template<> inline const Inf cast<Inf,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Inf (a[1]);
}  
		 
template<> inline const Inf cast<Inf,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Mnk cast<Mnk,Par> (const Par& a) {
		return Mnk (a[9]);
}  
		 
template<> inline const Mnk cast<Mnk,Flp> (const Flp& a) {
		return Mnk (a[3]);
}  
		 
template<> inline const Mnk cast<Mnk,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Mnk (a[7]);
}  
		 
template<> inline const Mnk cast<Mnk,Pss_Afp> (const Pss_Afp& a) {
		return Mnk (a[3]);
}  
		 
template<> inline const Mnk cast<Mnk,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Mnk (a[10]);
}  
		 
template<> inline const Mnk cast<Mnk,Pnt_Cir> (const Pnt_Cir& a) {
		return Mnk (a[9]);
}  
		 
template<> inline const Mnk cast<Mnk,Pnt_Lin> (const Pnt_Lin& a) {
		return Mnk (a[9]);
}  
		 
template<> inline const Mnk cast<Mnk,Sph_Biv> (const Sph_Biv& a) {
		return Mnk (a[6]);
}  
		 
template<> inline const Mnk cast<Mnk,Sph_Afl> (const Sph_Afl& a) {
		return Mnk (a[9]);
}  
		 
template<> inline const Mnk cast<Mnk,Drb_Afp> (const Drb_Afp& a) {
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
		 
template<> inline const Mnk cast<Mnk,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Mnk (a[7]);
}  
		 
template<> inline const Mnk cast<Mnk,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Mnk (a[6]);
}  
		 
template<> inline const Mnk cast<Mnk,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Mnk (a[3]);
}  
		 
template<> inline const Mnk cast<Mnk,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Mnk (a[0]);
}  
		 
template<> inline const Mnk cast<Mnk,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Mnk (a[3]);
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
		 
template<> inline const Hyp cast<Hyp,Par_Drb> (const Par_Drb& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Par_Tnb> (const Par_Tnb& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Par_Afp> (const Par_Afp& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Cir_Flp> (const Cir_Flp& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Cir_Biv> (const Cir_Biv& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Sph_Afp> (const Sph_Afp& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Sta_Vec> (const Sta_Vec& a) {
		return Hyp (a[3],a[4]);
}  
		 
template<> inline const Hyp cast<Hyp,Drv_Lin> (const Drv_Lin& a) {
		return Hyp (0,a[0]);
}  
		 
template<> inline const Hyp cast<Hyp,Drt_Afp> (const Drt_Afp& a) {
		return Hyp (0,a[3]);
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
		 
template<> inline const Hyp cast<Hyp,Flp_Dlp> (const Flp_Dlp& a) {
		return Hyp (0,a[0]);
}  
		 
template<> inline const Hyp cast<Hyp,Vec_Afl> (const Vec_Afl& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Biv_Afp> (const Biv_Afp& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Pnt_Dll> (const Mnk_Pnt_Dll& a) {
		return Hyp (0,a[3]);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Pnt_Afl> (const Mnk_Pnt_Afl& a) {
		return Hyp (a[3],0);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Hyp (a[0],a[1]);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Hyp (a[0],0);
}  
		 
template<> inline const Hyp cast<Hyp,Mnk_Biv_Afp> (const Mnk_Biv_Afp& a) {
		return Hyp (a[0],0);
}  
		 
template<> inline const Hyp cast<Hyp,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Pss cast<Pss,Par_Afp> (const Par_Afp& a) {
		return Pss (a[14]);
}  
		 
template<> inline const Pss cast<Pss,Cir_Flp> (const Cir_Flp& a) {
		return Pss (a[14]);
}  
		 
template<> inline const Pss cast<Pss,Cir_Biv> (const Cir_Biv& a) {
		return Pss (a[14]);
}  
		 
template<> inline const Pss cast<Pss,Sph_Vec> (const Sph_Vec& a) {
		return Pss (a[9]);
}  
		 
template<> inline const Pss cast<Pss,Drv_Tnb> (const Drv_Tnb& a) {
		return Pss (a[7]);
}  
		 
template<> inline const Pss cast<Pss,Drv_Afp> (const Drv_Afp& a) {
		return Pss (a[10]);
}  
		 
template<> inline const Pss cast<Pss,Tnb_Flp> (const Tnb_Flp& a) {
		return Pss (a[10]);
}  
		 
template<> inline const Pss cast<Pss,Lin_Dll> (const Lin_Dll& a) {
		return Pss (a[7]);
}  
		 
template<> inline const Pss cast<Pss,Pln_Dlp> (const Pln_Dlp& a) {
		return Pss (a[6]);
}  
		 
template<> inline const Pss cast<Pss,Flp_Tri> (const Flp_Tri& a) {
		return Pss (a[3]);
}  
		 
template<> inline const Pss cast<Pss,Flp_Afp> (const Flp_Afp& a) {
		return Pss (a[13]);
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
		 
template<> inline const Pss cast<Pss,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Pss (a[11]);
}  
		 
template<> inline const Pss cast<Pss,Mnk_Vec_Biv> (const Mnk_Vec_Biv& a) {
		return Pss (a[3]);
}  
		 
template<> inline const Pss cast<Pss,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Pss (a[7]);
}  
		 
template<> inline const Pss cast<Pss,Mnk_Biv_Aff> (const Mnk_Biv_Aff& a) {
		return Pss (a[6]);
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
		 
template<> inline const Pnt cast<Pnt,Par_Drb> (const Par_Drb& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Par_Tnb> (const Par_Tnb& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Par_Afp> (const Par_Afp& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Cir_Flp> (const Cir_Flp& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Cir_Biv> (const Cir_Biv& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Sph_Afp> (const Sph_Afp& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Sta_Vec> (const Sta_Vec& a) {
		return Pnt (a[0],a[1],a[2],a[3],a[4]);
}  
		 
template<> inline const Pnt cast<Pnt,Sta_Tri> (const Sta_Tri& a) {
		return Pnt (a[0],a[1],a[2],0,0);
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
		 
template<> inline const Pnt cast<Pnt,Drt_Afp> (const Drt_Afp& a) {
		return Pnt (a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Pnt cast<Pnt,Tnv_Vec> (const Tnv_Vec& a) {
		return Pnt (0,0,0,a[0],0);
}  
		 
template<> inline const Pnt cast<Pnt,Tnb_Flp> (const Tnb_Flp& a) {
		return Pnt (a[0],a[1],a[2],0,0);
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
		 
template<> inline const Pnt cast<Pnt,Flp_Dlp> (const Flp_Dlp& a) {
		return Pnt (0,0,0,0,a[0]);
}  
		 
template<> inline const Pnt cast<Pnt,Flp_Afp> (const Flp_Afp& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Dlp_Biv> (const Dlp_Biv& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Vec_Biv> (const Vec_Biv& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Vec_Afl> (const Vec_Afl& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Biv_Aff> (const Biv_Aff& a) {
		return Pnt (a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Pnt cast<Pnt,Biv_Afp> (const Biv_Afp& a) {
		return Pnt (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Pnt cast<Pnt,Tri_Afl> (const Tri_Afl& a) {
		return Pnt (a[0],a[1],a[2],0,0);
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
		 
template<> inline const Pnt cast<Pnt,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Pnt (0,0,0,a[0],a[1]);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Pnt (0,0,0,a[0],0);
}  
		 
template<> inline const Pnt cast<Pnt,Mnk_Biv_Afp> (const Mnk_Biv_Afp& a) {
		return Pnt (0,0,0,a[0],0);
}  
		 
template<> inline const Pnt cast<Pnt,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Par cast<Par,Ori_Cir> (const Ori_Cir& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Ori_Drb> (const Ori_Drb& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Ori_Lin> (const Ori_Lin& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Inf_Cir> (const Inf_Cir& a) {
		return Par (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Inf_Afp> (const Inf_Afp& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
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
		 
template<> inline const Par cast<Par,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Par (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Par cast<Par,Hyp_Cir> (const Hyp_Cir& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Par cast<Par,Hyp_Lin> (const Hyp_Lin& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Par cast<Par,Hyp_Vec> (const Hyp_Vec& a) {
		return Par (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Hyp_Afp> (const Hyp_Afp& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Pss_Afp> (const Pss_Afp& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Par cast<Par,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Par cast<Par,Pnt_Cir> (const Pnt_Cir& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Par cast<Par,Pnt_Lin> (const Pnt_Lin& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Par cast<Par,Pnt_Vec> (const Pnt_Vec& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Pnt_Afp> (const Pnt_Afp& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Par_Biv> (const Par_Biv& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Sph_Flp> (const Sph_Flp& a) {
		return Par (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Sph_Biv> (const Sph_Biv& a) {
		return Par (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Par cast<Par,Sph_Afl> (const Sph_Afl& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Par cast<Par,Sta_Drt> (const Sta_Drt& a) {
		return Par (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Sta_Biv> (const Sta_Biv& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Drv_Pln> (const Drv_Pln& a) {
		return Par (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Par cast<Par,Drb_Afp> (const Drb_Afp& a) {
		return Par (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Par cast<Par,Tnv_Flp> (const Tnv_Flp& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7]);
}  
		 
template<> inline const Par cast<Par,Tnv_Biv> (const Tnv_Biv& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Tnt_Flp> (const Tnt_Flp& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
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
		 
template<> inline const Par cast<Par,Flp_Dll> (const Flp_Dll& a) {
		return Par (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Par cast<Par,Vec_Aff> (const Vec_Aff& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Vec_Afp> (const Vec_Afp& a) {
		return Par (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Tri_Aff> (const Tri_Aff& a) {
		return Par (a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Par (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Par cast<Par,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Par (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Par cast<Par,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Par (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Par cast<Par,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Par cast<Par,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Par cast<Par,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Par (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Par cast<Par,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Par (0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Par cast<Par,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Par (0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
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
		 
template<> inline const Cir cast<Cir,Tri> (const Tri& a) {
		return Cir (0,0,0,0,0,0,0,0,0,a[0]);
}  
		 
template<> inline const Cir cast<Cir,Afp> (const Afp& a) {
		return Cir (a[0],a[1],a[2],0,0,0,0,0,0,a[3]);
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
		 
template<> inline const Cir cast<Cir,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Cir (0,0,0,0,0,0,a[2],a[3],a[4],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Cir> (const Mnk_Cir& a) {
		return Cir (a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Lin> (const Mnk_Lin& a) {
		return Cir (0,0,0,a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Cir (0,0,0,0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Vec> (const Mnk_Vec& a) {
		return Cir (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Aff> (const Mnk_Aff& a) {
		return Cir (0,0,0,0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Afp> (const Mnk_Afp& a) {
		return Cir (a[0],a[1],a[2],0,0,0,0,0,0,0);
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
		 
template<> inline const Cir cast<Cir,Pss_Flp> (const Pss_Flp& a) {
		return Cir (0,0,0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Cir cast<Cir,Pss_Afl> (const Pss_Afl& a) {
		return Cir (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
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
		 
template<> inline const Cir cast<Cir,Par_Drb> (const Par_Drb& a) {
		return Cir (0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Cir cast<Cir,Par_Tnb> (const Par_Tnb& a) {
		return Cir (a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Cir cast<Cir,Par_Afp> (const Par_Afp& a) {
		return Cir (a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Cir cast<Cir,Cir_Flp> (const Cir_Flp& a) {
		return Cir (a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Cir cast<Cir,Cir_Biv> (const Cir_Biv& a) {
		return Cir (a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Cir cast<Cir,Sph_Vec> (const Sph_Vec& a) {
		return Cir (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0);
}  
		 
template<> inline const Cir cast<Cir,Sph_Afp> (const Sph_Afp& a) {
		return Cir (a[5],a[6],a[7],0,0,0,a[8],a[9],a[10],0);
}  
		 
template<> inline const Cir cast<Cir,Sta_Vec> (const Sta_Vec& a) {
		return Cir (a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,a[11]);
}  
		 
template<> inline const Cir cast<Cir,Sta_Tri> (const Sta_Tri& a) {
		return Cir (a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0);
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
		 
template<> inline const Cir cast<Cir,Drt_Afp> (const Drt_Afp& a) {
		return Cir (0,0,0,0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Tnv_Vec> (const Tnv_Vec& a) {
		return Cir (a[1],a[2],a[3],0,0,0,0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Tnb_Flp> (const Tnb_Flp& a) {
		return Cir (a[3],a[4],a[5],0,0,0,a[6],a[7],a[8],a[9]);
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
		 
template<> inline const Cir cast<Cir,Pln_Dlp> (const Pln_Dlp& a) {
		return Cir (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Cir cast<Cir,Flp_Dlp> (const Flp_Dlp& a) {
		return Cir (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Flp_Tri> (const Flp_Tri& a) {
		return Cir (0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Flp_Afp> (const Flp_Afp& a) {
		return Cir (a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Cir cast<Cir,Dlp_Biv> (const Dlp_Biv& a) {
		return Cir (0,0,0,a[3],a[4],a[5],0,0,0,a[6]);
}  
		 
template<> inline const Cir cast<Cir,Vec_Biv> (const Vec_Biv& a) {
		return Cir (0,0,0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Cir cast<Cir,Vec_Afl> (const Vec_Afl& a) {
		return Cir (a[4],a[5],a[6],0,0,0,0,0,0,a[7]);
}  
		 
template<> inline const Cir cast<Cir,Biv_Aff> (const Biv_Aff& a) {
		return Cir (a[3],a[4],a[5],0,0,0,0,0,0,a[6]);
}  
		 
template<> inline const Cir cast<Cir,Biv_Afp> (const Biv_Afp& a) {
		return Cir (a[4],a[5],a[6],0,0,0,0,0,0,0);
}  
		 
template<> inline const Cir cast<Cir,Tri_Afl> (const Tri_Afl& a) {
		return Cir (a[3],a[4],a[5],0,0,0,0,0,0,0);
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
		 
template<> inline const Cir cast<Cir,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Cir (a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Vec_Biv> (const Mnk_Vec_Biv& a) {
		return Cir (0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Cir (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Biv_Aff> (const Mnk_Biv_Aff& a) {
		return Cir (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Cir cast<Cir,Mnk_Biv_Afp> (const Mnk_Biv_Afp& a) {
		return Cir (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Cir cast<Cir,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Sph cast<Sph,Ori_Cir> (const Ori_Cir& a) {
		return Sph (a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Sph cast<Sph,Ori_Drb> (const Ori_Drb& a) {
		return Sph (a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Sph cast<Sph,Ori_Lin> (const Ori_Lin& a) {
		return Sph (a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Sph cast<Sph,Inf_Cir> (const Inf_Cir& a) {
		return Sph (a[6],a[7],a[8],0,a[9]);
}  
		 
template<> inline const Sph cast<Sph,Inf_Afp> (const Inf_Afp& a) {
		return Sph (a[3],a[4],a[5],0,a[6]);
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
		 
template<> inline const Sph cast<Sph,Hyp_Pss> (const Hyp_Pss& a) {
		return Sph (0,0,0,a[0],a[1]);
}  
		 
template<> inline const Sph cast<Sph,Hyp_Cir> (const Hyp_Cir& a) {
		return Sph (a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Sph cast<Sph,Hyp_Lin> (const Hyp_Lin& a) {
		return Sph (a[9],a[10],a[11],0,0);
}  
		 
template<> inline const Sph cast<Sph,Hyp_Afp> (const Hyp_Afp& a) {
		return Sph (a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Sph cast<Sph,Pss_Aff> (const Pss_Aff& a) {
		return Sph (a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Sph cast<Sph,Pnt_Cir> (const Pnt_Cir& a) {
		return Sph (a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Sph cast<Sph,Pnt_Lin> (const Pnt_Lin& a) {
		return Sph (a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Sph cast<Sph,Pnt_Afp> (const Pnt_Afp& a) {
		return Sph (a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Sph cast<Sph,Par_Biv> (const Par_Biv& a) {
		return Sph (a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Sph cast<Sph,Sph_Flp> (const Sph_Flp& a) {
		return Sph (a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Sph cast<Sph,Sph_Biv> (const Sph_Biv& a) {
		return Sph (a[7],a[8],a[9],0,0);
}  
		 
template<> inline const Sph cast<Sph,Sph_Afl> (const Sph_Afl& a) {
		return Sph (a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Sph cast<Sph,Sta_Drt> (const Sta_Drt& a) {
		return Sph (a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Sph cast<Sph,Sta_Biv> (const Sta_Biv& a) {
		return Sph (0,0,0,a[10],a[11]);
}  
		 
template<> inline const Sph cast<Sph,Drv_Pln> (const Drv_Pln& a) {
		return Sph (0,0,0,0,a[3]);
}  
		 
template<> inline const Sph cast<Sph,Drb_Afp> (const Drb_Afp& a) {
		return Sph (a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Sph cast<Sph,Tnv_Flp> (const Tnv_Flp& a) {
		return Sph (a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Sph cast<Sph,Tnv_Biv> (const Tnv_Biv& a) {
		return Sph (0,0,0,a[3],0);
}  
		 
template<> inline const Sph cast<Sph,Tnt_Flp> (const Tnt_Flp& a) {
		return Sph (a[3],a[4],a[5],a[6],0);
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
		 
template<> inline const Sph cast<Sph,Flp_Dll> (const Flp_Dll& a) {
		return Sph (a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Sph cast<Sph,Vec_Afp> (const Vec_Afp& a) {
		return Sph (0,0,0,a[6],0);
}  
		 
template<> inline const Sph cast<Sph,Tri_Aff> (const Tri_Aff& a) {
		return Sph (0,0,0,a[3],0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Sph (a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Sph (a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Sph (a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Sph (a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Sph (a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Sph cast<Sph,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Sph (a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Sph cast<Sph,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Sph (0,0,0,a[6],a[7]);
}  
		 
template<> inline const Sph cast<Sph,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Sph (a[1],a[2],a[3],0,0);
}  
		 
template<> inline const Sph cast<Sph,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Sph (a[4],a[5],a[6],a[7],0);
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
		 
template<> inline const Sta cast<Sta,Ori_Cir> (const Ori_Cir& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Ori_Drb> (const Ori_Drb& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Ori_Lin> (const Ori_Lin& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Inf_Cir> (const Inf_Cir& a) {
		return Sta (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Inf_Afp> (const Inf_Afp& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
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
		 
template<> inline const Sta cast<Sta,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Sta (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Cir> (const Hyp_Cir& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Lin> (const Hyp_Lin& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Vec> (const Hyp_Vec& a) {
		return Sta (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Afp> (const Hyp_Afp& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Pss_Afp> (const Pss_Afp& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Cir> (const Pnt_Cir& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Lin> (const Pnt_Lin& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Vec> (const Pnt_Vec& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Pnt_Afp> (const Pnt_Afp& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Par_Biv> (const Par_Biv& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Sph_Flp> (const Sph_Flp& a) {
		return Sta (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Sph_Biv> (const Sph_Biv& a) {
		return Sta (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Sph_Afl> (const Sph_Afl& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Sta cast<Sta,Sta_Drt> (const Sta_Drt& a) {
		return Sta (a[0],a[1],a[2],0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Sta_Biv> (const Sta_Biv& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Drv_Pln> (const Drv_Pln& a) {
		return Sta (0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Sta cast<Sta,Drb_Afp> (const Drb_Afp& a) {
		return Sta (a[1],a[2],a[3],0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Sta cast<Sta,Tnv_Flp> (const Tnv_Flp& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Tnv_Biv> (const Tnv_Biv& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Tnt_Flp> (const Tnt_Flp& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
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
		 
template<> inline const Sta cast<Sta,Flp_Dll> (const Flp_Dll& a) {
		return Sta (0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Sta cast<Sta,Vec_Aff> (const Vec_Aff& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Vec_Afp> (const Vec_Afp& a) {
		return Sta (a[0],a[1],a[2],a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Tri_Aff> (const Tri_Aff& a) {
		return Sta (a[0],a[1],a[2],0,0,0,0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Sta (0,0,0,a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Sta (a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Sta (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Sta cast<Sta,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Sta (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Sta cast<Sta,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Sta (0,0,0,a[0],a[1],a[2],0,0,0);
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
		 
template<> inline const Drv cast<Drv,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Pnt_Cir> (const Pnt_Cir& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Pnt_Lin> (const Pnt_Lin& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Pnt_Vec> (const Pnt_Vec& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Par_Biv> (const Par_Biv& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Sph_Flp> (const Sph_Flp& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Sph_Biv> (const Sph_Biv& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Sph_Afl> (const Sph_Afl& a) {
		return Drv (a[6],a[7],a[8]);
}  
		 
template<> inline const Drv cast<Drv,Sta_Drt> (const Sta_Drt& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Sta_Biv> (const Sta_Biv& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Drv_Pln> (const Drv_Pln& a) {
		return Drv (a[0],a[1],a[2]);
}  
		 
template<> inline const Drv cast<Drv,Drb_Afp> (const Drb_Afp& a) {
		return Drv (a[4],a[5],a[6]);
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
		 
template<> inline const Drv cast<Drv,Flp_Dll> (const Flp_Dll& a) {
		return Drv (a[0],a[1],a[2]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Drv (a[4],a[5],a[6]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Drv (a[7],a[8],a[9]);
}  
		 
template<> inline const Drv cast<Drv,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Drv (a[3],a[4],a[5]);
}  
		 
template<> inline const Drv cast<Drv,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Drv (a[3],a[4],a[5]);
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
		 
template<> inline const Drb cast<Drb,Pss_Flp> (const Pss_Flp& a) {
		return Drb (a[0],a[1],a[2]);
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
		 
template<> inline const Drb cast<Drb,Par_Afp> (const Par_Afp& a) {
		return Drb (a[7],a[8],a[9]);
}  
		 
template<> inline const Drb cast<Drb,Cir_Flp> (const Cir_Flp& a) {
		return Drb (a[7],a[8],a[9]);
}  
		 
template<> inline const Drb cast<Drb,Cir_Biv> (const Cir_Biv& a) {
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
		 
template<> inline const Drb cast<Drb,Pln_Dlp> (const Pln_Dlp& a) {
		return Drb (a[0],a[1],a[2]);
}  
		 
template<> inline const Drb cast<Drb,Flp_Dlp> (const Flp_Dlp& a) {
		return Drb (a[1],a[2],a[3]);
}  
		 
template<> inline const Drb cast<Drb,Flp_Tri> (const Flp_Tri& a) {
		return Drb (a[0],a[1],a[2]);
}  
		 
template<> inline const Drb cast<Drb,Flp_Afp> (const Flp_Afp& a) {
		return Drb (a[6],a[7],a[8]);
}  
		 
template<> inline const Drb cast<Drb,Dlp_Biv> (const Dlp_Biv& a) {
		return Drb (a[3],a[4],a[5]);
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
		 
template<> inline const Drb cast<Drb,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Drb (a[5],a[6],a[7]);
}  
		 
template<> inline const Drb cast<Drb,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Drt cast<Drt,Hyp_Afp> (const Hyp_Afp& a) {
		return Drt (a[7]);
}  
		 
template<> inline const Drt cast<Drt,Pnt_Cir> (const Pnt_Cir& a) {
		return Drt (a[14]);
}  
		 
template<> inline const Drt cast<Drt,Pnt_Lin> (const Pnt_Lin& a) {
		return Drt (a[13]);
}  
		 
template<> inline const Drt cast<Drt,Pnt_Afp> (const Pnt_Afp& a) {
		return Drt (a[10]);
}  
		 
template<> inline const Drt cast<Drt,Par_Biv> (const Par_Biv& a) {
		return Drt (a[14]);
}  
		 
template<> inline const Drt cast<Drt,Sph_Flp> (const Sph_Flp& a) {
		return Drt (a[10]);
}  
		 
template<> inline const Drt cast<Drt,Sta_Biv> (const Sta_Biv& a) {
		return Drt (a[11]);
}  
		 
template<> inline const Drt cast<Drt,Drv_Pln> (const Drv_Pln& a) {
		return Drt (a[3]);
}  
		 
template<> inline const Drt cast<Drt,Lin_Dlp> (const Lin_Dlp& a) {
		return Drt (a[7]);
}  
		 
template<> inline const Drt cast<Drt,Pln_Flp> (const Pln_Flp& a) {
		return Drt (a[6]);
}  
		 
template<> inline const Drt cast<Drt,Flp_Dll> (const Flp_Dll& a) {
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
		 
template<> inline const Tnv cast<Tnv,Par> (const Par& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Sta> (const Sta& a) {
		return Tnv (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnv cast<Tnv,Afl> (const Afl& a) {
		return Tnv (a[3],a[4],a[5]);
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
		 
template<> inline const Tnv cast<Tnv,Pss_Afp> (const Pss_Afp& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Tnv (a[4],a[5],a[6]);
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
		 
template<> inline const Tnv cast<Tnv,Par_Biv> (const Par_Biv& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Sph_Biv> (const Sph_Biv& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Sph_Afl> (const Sph_Afl& a) {
		return Tnv (a[3],a[4],a[5]);
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
		 
template<> inline const Tnv cast<Tnv,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Tnv (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Tnv (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tnv (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnv cast<Tnv,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Tnv (a[0],a[1],a[2]);
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
		 
template<> inline const Tnb cast<Tnb,Pss_Afl> (const Pss_Afl& a) {
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
		 
template<> inline const Tnb cast<Tnb,Par_Tnb> (const Par_Tnb& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Par_Afp> (const Par_Afp& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Cir_Flp> (const Cir_Flp& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Cir_Biv> (const Cir_Biv& a) {
		return Tnb (a[5],a[6],a[7]);
}  
		 
template<> inline const Tnb cast<Tnb,Sph_Vec> (const Sph_Vec& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Sph_Afp> (const Sph_Afp& a) {
		return Tnb (a[5],a[6],a[7]);
}  
		 
template<> inline const Tnb cast<Tnb,Sta_Vec> (const Sta_Vec& a) {
		return Tnb (a[5],a[6],a[7]);
}  
		 
template<> inline const Tnb cast<Tnb,Sta_Tri> (const Sta_Tri& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Tnv_Vec> (const Tnv_Vec& a) {
		return Tnb (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnb cast<Tnb,Tnb_Flp> (const Tnb_Flp& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Flp_Afp> (const Flp_Afp& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Vec_Afl> (const Vec_Afl& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Biv_Aff> (const Biv_Aff& a) {
		return Tnb (a[3],a[4],a[5]);
}  
		 
template<> inline const Tnb cast<Tnb,Biv_Afp> (const Biv_Afp& a) {
		return Tnb (a[4],a[5],a[6]);
}  
		 
template<> inline const Tnb cast<Tnb,Tri_Afl> (const Tri_Afl& a) {
		return Tnb (a[3],a[4],a[5]);
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
		 
template<> inline const Tnb cast<Tnb,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Tnb (a[2],a[3],a[4]);
}  
		 
template<> inline const Tnb cast<Tnb,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Tnb (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnb cast<Tnb,Mnk_Biv_Aff> (const Mnk_Biv_Aff& a) {
		return Tnb (a[0],a[1],a[2]);
}  
		 
template<> inline const Tnb cast<Tnb,Mnk_Biv_Afp> (const Mnk_Biv_Afp& a) {
		return Tnb (a[1],a[2],a[3]);
}  
		 
template<> inline const Tnb cast<Tnb,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Tnt cast<Tnt,Ori_Cir> (const Ori_Cir& a) {
		return Tnt (a[9]);
}  
		 
template<> inline const Tnt cast<Tnt,Mnk_Sph> (const Mnk_Sph& a) {
		return Tnt (a[3]);
}  
		 
template<> inline const Tnt cast<Tnt,Hyp_Pss> (const Hyp_Pss& a) {
		return Tnt (a[0]);
}  
		 
template<> inline const Tnt cast<Tnt,Hyp_Cir> (const Hyp_Cir& a) {
		return Tnt (a[12]);
}  
		 
template<> inline const Tnt cast<Tnt,Hyp_Afp> (const Hyp_Afp& a) {
		return Tnt (a[6]);
}  
		 
template<> inline const Tnt cast<Tnt,Pss_Aff> (const Pss_Aff& a) {
		return Tnt (a[3]);
}  
		 
template<> inline const Tnt cast<Tnt,Pnt_Cir> (const Pnt_Cir& a) {
		return Tnt (a[13]);
}  
		 
template<> inline const Tnt cast<Tnt,Pnt_Afp> (const Pnt_Afp& a) {
		return Tnt (a[9]);
}  
		 
template<> inline const Tnt cast<Tnt,Par_Biv> (const Par_Biv& a) {
		return Tnt (a[13]);
}  
		 
template<> inline const Tnt cast<Tnt,Sph_Flp> (const Sph_Flp& a) {
		return Tnt (a[9]);
}  
		 
template<> inline const Tnt cast<Tnt,Sph_Afl> (const Sph_Afl& a) {
		return Tnt (a[13]);
}  
		 
template<> inline const Tnt cast<Tnt,Sta_Biv> (const Sta_Biv& a) {
		return Tnt (a[10]);
}  
		 
template<> inline const Tnt cast<Tnt,Tnv_Biv> (const Tnv_Biv& a) {
		return Tnt (a[3]);
}  
		 
template<> inline const Tnt cast<Tnt,Tnt_Flp> (const Tnt_Flp& a) {
		return Tnt (a[6]);
}  
		 
template<> inline const Tnt cast<Tnt,Vec_Afp> (const Vec_Afp& a) {
		return Tnt (a[6]);
}  
		 
template<> inline const Tnt cast<Tnt,Tri_Aff> (const Tri_Aff& a) {
		return Tnt (a[3]);
}  
		 
template<> inline const Tnt cast<Tnt,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Tnt (a[13]);
}  
		 
template<> inline const Tnt cast<Tnt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tnt (a[10]);
}  
		 
template<> inline const Tnt cast<Tnt,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Tnt (a[6]);
}  
		 
template<> inline const Tnt cast<Tnt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tnt (a[6]);
}  
		 
template<> inline const Tnt cast<Tnt,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Tnt (a[7]);
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
		 
template<> inline const Lin cast<Lin,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Lin (0,0,0,a[2],a[3],a[4]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Cir> (const Mnk_Cir& a) {
		return Lin (a[6],a[7],a[8],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Lin> (const Mnk_Lin& a) {
		return Lin (a[3],a[4],a[5],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Lin (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Vec> (const Mnk_Vec& a) {
		return Lin (0,0,0,a[0],a[1],a[2]);
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
		 
template<> inline const Lin cast<Lin,Pss_Flp> (const Pss_Flp& a) {
		return Lin (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Pss_Afl> (const Pss_Afl& a) {
		return Lin (0,0,0,a[3],a[4],a[5]);
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
		 
template<> inline const Lin cast<Lin,Par_Drb> (const Par_Drb& a) {
		return Lin (a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Lin cast<Lin,Par_Tnb> (const Par_Tnb& a) {
		return Lin (0,0,0,a[7],a[8],a[9]);
}  
		 
template<> inline const Lin cast<Lin,Par_Afp> (const Par_Afp& a) {
		return Lin (a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Lin cast<Lin,Cir_Flp> (const Cir_Flp& a) {
		return Lin (a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Lin cast<Lin,Cir_Biv> (const Cir_Biv& a) {
		return Lin (a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Lin cast<Lin,Sph_Vec> (const Sph_Vec& a) {
		return Lin (a[3],a[4],a[5],a[6],a[7],a[8]);
}  
		 
template<> inline const Lin cast<Lin,Sph_Afp> (const Sph_Afp& a) {
		return Lin (0,0,0,a[8],a[9],a[10]);
}  
		 
template<> inline const Lin cast<Lin,Sta_Vec> (const Sta_Vec& a) {
		return Lin (a[8],a[9],a[10],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Sta_Tri> (const Sta_Tri& a) {
		return Lin (a[6],a[7],a[8],0,0,0);
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
		 
template<> inline const Lin cast<Lin,Drt_Afp> (const Drt_Afp& a) {
		return Lin (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Tnb_Flp> (const Tnb_Flp& a) {
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
		 
template<> inline const Lin cast<Lin,Pln_Dlp> (const Pln_Dlp& a) {
		return Lin (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Lin cast<Lin,Flp_Dlp> (const Flp_Dlp& a) {
		return Lin (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Flp_Tri> (const Flp_Tri& a) {
		return Lin (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Lin cast<Lin,Flp_Afp> (const Flp_Afp& a) {
		return Lin (a[6],a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Lin cast<Lin,Dlp_Biv> (const Dlp_Biv& a) {
		return Lin (a[3],a[4],a[5],0,0,0);
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
		 
template<> inline const Lin cast<Lin,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Lin (a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Vec_Biv> (const Mnk_Vec_Biv& a) {
		return Lin (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Lin (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Biv_Aff> (const Mnk_Biv_Aff& a) {
		return Lin (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Lin cast<Lin,Mnk_Biv_Afp> (const Mnk_Biv_Afp& a) {
		return Lin (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Lin cast<Lin,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Pln cast<Pln,Ori_Cir> (const Ori_Cir& a) {
		return Pln (a[6],a[7],a[8],0);
}  
		 
template<> inline const Pln cast<Pln,Ori_Drb> (const Ori_Drb& a) {
		return Pln (a[3],a[4],a[5],0);
}  
		 
template<> inline const Pln cast<Pln,Ori_Lin> (const Ori_Lin& a) {
		return Pln (a[6],a[7],a[8],0);
}  
		 
template<> inline const Pln cast<Pln,Inf_Cir> (const Inf_Cir& a) {
		return Pln (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Pln cast<Pln,Inf_Afp> (const Inf_Afp& a) {
		return Pln (a[3],a[4],a[5],a[6]);
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
		 
template<> inline const Pln cast<Pln,Hyp_Afp> (const Hyp_Afp& a) {
		return Pln (a[3],a[4],a[5],a[7]);
}  
		 
template<> inline const Pln cast<Pln,Pss_Aff> (const Pss_Aff& a) {
		return Pln (a[0],a[1],a[2],0);
}  
		 
template<> inline const Pln cast<Pln,Pnt_Cir> (const Pnt_Cir& a) {
		return Pln (a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Pln cast<Pln,Pnt_Lin> (const Pnt_Lin& a) {
		return Pln (a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Pln cast<Pln,Pnt_Afp> (const Pnt_Afp& a) {
		return Pln (a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Pln cast<Pln,Par_Biv> (const Par_Biv& a) {
		return Pln (a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Pln cast<Pln,Sph_Flp> (const Sph_Flp& a) {
		return Pln (a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Pln cast<Pln,Sph_Biv> (const Sph_Biv& a) {
		return Pln (a[7],a[8],a[9],0);
}  
		 
template<> inline const Pln cast<Pln,Sph_Afl> (const Sph_Afl& a) {
		return Pln (a[10],a[11],a[12],0);
}  
		 
template<> inline const Pln cast<Pln,Sta_Drt> (const Sta_Drt& a) {
		return Pln (a[6],a[7],a[8],0);
}  
		 
template<> inline const Pln cast<Pln,Sta_Biv> (const Sta_Biv& a) {
		return Pln (0,0,0,a[11]);
}  
		 
template<> inline const Pln cast<Pln,Drv_Pln> (const Drv_Pln& a) {
		return Pln (0,0,0,a[3]);
}  
		 
template<> inline const Pln cast<Pln,Drb_Afp> (const Drb_Afp& a) {
		return Pln (a[8],a[9],a[10],0);
}  
		 
template<> inline const Pln cast<Pln,Tnv_Flp> (const Tnv_Flp& a) {
		return Pln (a[8],a[9],a[10],0);
}  
		 
template<> inline const Pln cast<Pln,Tnt_Flp> (const Tnt_Flp& a) {
		return Pln (a[3],a[4],a[5],0);
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
		 
template<> inline const Pln cast<Pln,Flp_Dll> (const Flp_Dll& a) {
		return Pln (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Pln (a[8],a[9],a[10],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Pln (a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Pln (a[10],a[11],a[12],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Pln (a[7],a[8],a[9],a[11]);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Pln (a[4],a[5],a[6],0);
}  
		 
template<> inline const Pln cast<Pln,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Pln (a[3],a[4],a[5],0);
}  
		 
template<> inline const Pln cast<Pln,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Pln (0,0,0,a[7]);
}  
		 
template<> inline const Pln cast<Pln,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Pln (a[1],a[2],a[3],0);
}  
		 
template<> inline const Pln cast<Pln,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Pln (a[4],a[5],a[6],0);
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
		 
template<> inline const Flp cast<Flp,Inf_Cir> (const Inf_Cir& a) {
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
		 
template<> inline const Flp cast<Flp,Pss_Afp> (const Pss_Afp& a) {
		return Flp (0,0,0,a[3]);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Flp (a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Cir> (const Pnt_Cir& a) {
		return Flp (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Lin> (const Pnt_Lin& a) {
		return Flp (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Flp cast<Flp,Pnt_Vec> (const Pnt_Vec& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Par_Biv> (const Par_Biv& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Sph_Flp> (const Sph_Flp& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Sph_Biv> (const Sph_Biv& a) {
		return Flp (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Flp cast<Flp,Sph_Afl> (const Sph_Afl& a) {
		return Flp (a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Flp cast<Flp,Sta_Drt> (const Sta_Drt& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Sta_Biv> (const Sta_Biv& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Drv_Pln> (const Drv_Pln& a) {
		return Flp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Flp cast<Flp,Drb_Afp> (const Drb_Afp& a) {
		return Flp (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Flp cast<Flp,Tnv_Flp> (const Tnv_Flp& a) {
		return Flp (0,0,0,a[7]);
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
		 
template<> inline const Flp cast<Flp,Flp_Dll> (const Flp_Dll& a) {
		return Flp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Flp (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Flp (a[7],a[8],a[9],0);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Flp (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Flp cast<Flp,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Flp (0,0,0,a[3]);
}  
		 
template<> inline const Flp cast<Flp,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Flp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Flp cast<Flp,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Flp (0,0,0,a[0]);
}  
		 
template<> inline const Flp cast<Flp,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Flp (0,0,0,a[3]);
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
		 
template<> inline const Dll cast<Dll,Inf_Cir> (const Inf_Cir& a) {
		return Dll (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Inf_Afp> (const Inf_Afp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
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
		 
template<> inline const Dll cast<Dll,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Dll (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Cir> (const Hyp_Cir& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Lin> (const Hyp_Lin& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Vec> (const Hyp_Vec& a) {
		return Dll (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Afp> (const Hyp_Afp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Cir> (const Pnt_Cir& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Lin> (const Pnt_Lin& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Vec> (const Pnt_Vec& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Pnt_Afp> (const Pnt_Afp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Par_Biv> (const Par_Biv& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Sph_Flp> (const Sph_Flp& a) {
		return Dll (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Sph_Biv> (const Sph_Biv& a) {
		return Dll (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Sph_Afl> (const Sph_Afl& a) {
		return Dll (a[0],a[1],a[2],a[6],a[7],a[8]);
}  
		 
template<> inline const Dll cast<Dll,Sta_Drt> (const Sta_Drt& a) {
		return Dll (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Sta_Biv> (const Sta_Biv& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Drv_Pln> (const Drv_Pln& a) {
		return Dll (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dll cast<Dll,Drb_Afp> (const Drb_Afp& a) {
		return Dll (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Dll cast<Dll,Tnv_Flp> (const Tnv_Flp& a) {
		return Dll (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Tnt_Flp> (const Tnt_Flp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
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
		 
template<> inline const Dll cast<Dll,Flp_Dll> (const Flp_Dll& a) {
		return Dll (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Dll cast<Dll,Vec_Aff> (const Vec_Aff& a) {
		return Dll (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Vec_Afp> (const Vec_Afp& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Tri_Aff> (const Tri_Aff& a) {
		return Dll (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Dll (0,0,0,a[4],a[5],a[6]);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Dll (a[1],a[2],a[3],a[7],a[8],a[9]);
}  
		 
template<> inline const Dll cast<Dll,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Dll (0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Dll cast<Dll,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Dll (0,0,0,a[3],a[4],a[5]);
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
		 
template<> inline const Dlp cast<Dlp,Par_Drb> (const Par_Drb& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Par_Tnb> (const Par_Tnb& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Par_Afp> (const Par_Afp& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Cir_Flp> (const Cir_Flp& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Cir_Biv> (const Cir_Biv& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Sph_Afp> (const Sph_Afp& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Sta_Vec> (const Sta_Vec& a) {
		return Dlp (a[0],a[1],a[2],a[4]);
}  
		 
template<> inline const Dlp cast<Dlp,Sta_Tri> (const Sta_Tri& a) {
		return Dlp (a[0],a[1],a[2],0);
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
		 
template<> inline const Dlp cast<Dlp,Drt_Afp> (const Drt_Afp& a) {
		return Dlp (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Dlp cast<Dlp,Tnb_Flp> (const Tnb_Flp& a) {
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
		 
template<> inline const Dlp cast<Dlp,Flp_Dlp> (const Flp_Dlp& a) {
		return Dlp (0,0,0,a[0]);
}  
		 
template<> inline const Dlp cast<Dlp,Flp_Afp> (const Flp_Afp& a) {
		return Dlp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Dlp cast<Dlp,Dlp_Biv> (const Dlp_Biv& a) {
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
		 
template<> inline const Dlp cast<Dlp,Tri_Afl> (const Tri_Afl& a) {
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
		 
template<> inline const Dlp cast<Dlp,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Dlp (0,0,0,a[1]);
}  
		 
template<> inline const Dlp cast<Dlp,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Vec cast<Vec,Mnk_Cir> (const Mnk_Cir& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Mnk_Lin> (const Mnk_Lin& a) {
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
		 
template<> inline const Vec cast<Vec,Par_Drb> (const Par_Drb& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Par_Tnb> (const Par_Tnb& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Par_Afp> (const Par_Afp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Cir_Flp> (const Cir_Flp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Cir_Biv> (const Cir_Biv& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Sph_Afp> (const Sph_Afp& a) {
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
		 
template<> inline const Vec cast<Vec,Drt_Afp> (const Drt_Afp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Tnb_Flp> (const Tnb_Flp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Lin_Pln> (const Lin_Pln& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Lin_Flp> (const Lin_Flp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Flp_Afp> (const Flp_Afp& a) {
		return Vec (a[0],a[1],a[2]);
}  
		 
template<> inline const Vec cast<Vec,Dlp_Biv> (const Dlp_Biv& a) {
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
		 
template<> inline const Vec cast<Vec,Tri_Afl> (const Tri_Afl& a) {
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
		 
template<> inline const Biv cast<Biv,Inf_Cir> (const Inf_Cir& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Inf_Afp> (const Inf_Afp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Mnk_Sph> (const Mnk_Sph& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Mnk_Pln> (const Mnk_Pln& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Hyp_Cir> (const Hyp_Cir& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Hyp_Lin> (const Hyp_Lin& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Hyp_Afp> (const Hyp_Afp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Cir> (const Pnt_Cir& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Lin> (const Pnt_Lin& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Vec> (const Pnt_Vec& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Pnt_Afp> (const Pnt_Afp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Par_Biv> (const Par_Biv& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Sph_Flp> (const Sph_Flp& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Sph_Afl> (const Sph_Afl& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Sta_Drt> (const Sta_Drt& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Sta_Biv> (const Sta_Biv& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Drb_Afp> (const Drb_Afp& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Tnv_Flp> (const Tnv_Flp& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Tnt_Flp> (const Tnt_Flp& a) {
		return Biv (a[0],a[1],a[2]);
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
		 
template<> inline const Biv cast<Biv,Tri_Aff> (const Tri_Aff& a) {
		return Biv (a[0],a[1],a[2]);
}  
		 
template<> inline const Biv cast<Biv,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
template<> inline const Biv cast<Biv,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
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
		 
template<> inline const Tri cast<Tri,Pss_Flp> (const Pss_Flp& a) {
		return Tri (a[3]);
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
		 
template<> inline const Tri cast<Tri,Par_Afp> (const Par_Afp& a) {
		return Tri (a[13]);
}  
		 
template<> inline const Tri cast<Tri,Cir_Flp> (const Cir_Flp& a) {
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
		 
template<> inline const Tri cast<Tri,Tnb_Flp> (const Tnb_Flp& a) {
		return Tri (a[9]);
}  
		 
template<> inline const Tri cast<Tri,Lin_Pln> (const Lin_Pln& a) {
		return Tri (a[7]);
}  
		 
template<> inline const Tri cast<Tri,Flp_Afp> (const Flp_Afp& a) {
		return Tri (a[12]);
}  
		 
template<> inline const Tri cast<Tri,Dlp_Biv> (const Dlp_Biv& a) {
		return Tri (a[6]);
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
		 
template<> inline const Aff cast<Aff,Par_Drb> (const Par_Drb& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Par_Tnb> (const Par_Tnb& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Par_Afp> (const Par_Afp& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Cir_Flp> (const Cir_Flp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Cir_Biv> (const Cir_Biv& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Sph_Afp> (const Sph_Afp& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Sta_Vec> (const Sta_Vec& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Sta_Tri> (const Sta_Tri& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Drv_Tnb> (const Drv_Tnb& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Drv_Afp> (const Drv_Afp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Drt_Afp> (const Drt_Afp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Tnv_Vec> (const Tnv_Vec& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Tnb_Flp> (const Tnb_Flp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Lin_Pln> (const Lin_Pln& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Lin_Flp> (const Lin_Flp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Flp_Afp> (const Flp_Afp& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Dlp_Biv> (const Dlp_Biv& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Vec_Biv> (const Vec_Biv& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Vec_Afl> (const Vec_Afl& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Biv_Aff> (const Biv_Aff& a) {
		return Aff (a[0],a[1],a[2],0);
}  
		 
template<> inline const Aff cast<Aff,Biv_Afp> (const Biv_Afp& a) {
		return Aff (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Aff cast<Aff,Tri_Afl> (const Tri_Afl& a) {
		return Aff (a[0],a[1],a[2],0);
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
		 
template<> inline const Aff cast<Aff,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Mnk_Biv_Afp> (const Mnk_Biv_Afp& a) {
		return Aff (0,0,0,a[0]);
}  
		 
template<> inline const Aff cast<Aff,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Afl cast<Afl,Ori_Cir> (const Ori_Cir& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Ori_Drb> (const Ori_Drb& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Ori_Lin> (const Ori_Lin& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Inf_Cir> (const Inf_Cir& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Inf_Afp> (const Inf_Afp& a) {
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
		 
template<> inline const Afl cast<Afl,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Afl (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Cir> (const Hyp_Cir& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Lin> (const Hyp_Lin& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Vec> (const Hyp_Vec& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Afp> (const Hyp_Afp& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Pss_Afp> (const Pss_Afp& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Cir> (const Pnt_Cir& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Lin> (const Pnt_Lin& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Vec> (const Pnt_Vec& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Pnt_Afp> (const Pnt_Afp& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Par_Biv> (const Par_Biv& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Sph_Flp> (const Sph_Flp& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Sph_Biv> (const Sph_Biv& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Sph_Afl> (const Sph_Afl& a) {
		return Afl (a[0],a[1],a[2],a[3],a[4],a[5]);
}  
		 
template<> inline const Afl cast<Afl,Sta_Drt> (const Sta_Drt& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Sta_Biv> (const Sta_Biv& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Drb_Afp> (const Drb_Afp& a) {
		return Afl (a[1],a[2],a[3],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Tnv_Flp> (const Tnv_Flp& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Tnv_Biv> (const Tnv_Biv& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Tnt_Flp> (const Tnt_Flp& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
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
		 
template<> inline const Afl cast<Afl,Tri_Aff> (const Tri_Aff& a) {
		return Afl (a[0],a[1],a[2],0,0,0);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Afl (0,0,0,a[1],a[2],a[3]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Afl (a[1],a[2],a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Afl cast<Afl,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Afl (0,0,0,a[0],a[1],a[2]);
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
		 
template<> inline const Afp cast<Afp,Tri> (const Tri& a) {
		return Afp (0,0,0,a[0]);
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
		 
template<> inline const Afp cast<Afp,Pss_Flp> (const Pss_Flp& a) {
		return Afp (0,0,0,a[3]);
}  
		 
template<> inline const Afp cast<Afp,Pss_Afl> (const Pss_Afl& a) {
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
		 
template<> inline const Afp cast<Afp,Par_Drb> (const Par_Drb& a) {
		return Afp (0,0,0,a[10]);
}  
		 
template<> inline const Afp cast<Afp,Par_Tnb> (const Par_Tnb& a) {
		return Afp (a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Afp cast<Afp,Par_Afp> (const Par_Afp& a) {
		return Afp (a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Afp cast<Afp,Cir_Flp> (const Cir_Flp& a) {
		return Afp (a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Afp cast<Afp,Cir_Biv> (const Cir_Biv& a) {
		return Afp (a[5],a[6],a[7],0);
}  
		 
template<> inline const Afp cast<Afp,Sph_Vec> (const Sph_Vec& a) {
		return Afp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Afp cast<Afp,Sph_Afp> (const Sph_Afp& a) {
		return Afp (a[5],a[6],a[7],0);
}  
		 
template<> inline const Afp cast<Afp,Sta_Vec> (const Sta_Vec& a) {
		return Afp (a[5],a[6],a[7],a[11]);
}  
		 
template<> inline const Afp cast<Afp,Sta_Tri> (const Sta_Tri& a) {
		return Afp (a[3],a[4],a[5],0);
}  
		 
template<> inline const Afp cast<Afp,Drv_Tnb> (const Drv_Tnb& a) {
		return Afp (0,0,0,a[6]);
}  
		 
template<> inline const Afp cast<Afp,Drv_Afp> (const Drv_Afp& a) {
		return Afp (0,0,0,a[9]);
}  
		 
template<> inline const Afp cast<Afp,Tnv_Vec> (const Tnv_Vec& a) {
		return Afp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Afp cast<Afp,Tnb_Flp> (const Tnb_Flp& a) {
		return Afp (a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Afp cast<Afp,Lin_Pln> (const Lin_Pln& a) {
		return Afp (0,0,0,a[7]);
}  
		 
template<> inline const Afp cast<Afp,Flp_Afp> (const Flp_Afp& a) {
		return Afp (a[3],a[4],a[5],a[12]);
}  
		 
template<> inline const Afp cast<Afp,Dlp_Biv> (const Dlp_Biv& a) {
		return Afp (0,0,0,a[6]);
}  
		 
template<> inline const Afp cast<Afp,Vec_Biv> (const Vec_Biv& a) {
		return Afp (0,0,0,a[3]);
}  
		 
template<> inline const Afp cast<Afp,Vec_Afl> (const Vec_Afl& a) {
		return Afp (a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Afp cast<Afp,Biv_Aff> (const Biv_Aff& a) {
		return Afp (a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Afp cast<Afp,Biv_Afp> (const Biv_Afp& a) {
		return Afp (a[4],a[5],a[6],0);
}  
		 
template<> inline const Afp cast<Afp,Tri_Afl> (const Tri_Afl& a) {
		return Afp (a[3],a[4],a[5],0);
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
		 
template<> inline const Afp cast<Afp,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Afp (a[2],a[3],a[4],0);
}  
		 
template<> inline const Afp cast<Afp,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Afp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Afp cast<Afp,Mnk_Biv_Aff> (const Mnk_Biv_Aff& a) {
		return Afp (a[0],a[1],a[2],0);
}  
		 
template<> inline const Afp cast<Afp,Mnk_Biv_Afp> (const Mnk_Biv_Afp& a) {
		return Afp (a[1],a[2],a[3],0);
}  
		 
template<> inline const Afp cast<Afp,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
		return Afp (a[2],a[3],a[4],0);
}  
		 
		
		
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
		 
template<> inline const Rot cast<Rot,Inf_Cir> (const Inf_Cir& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Inf_Afp> (const Inf_Afp& a) {
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
		 
template<> inline const Rot cast<Rot,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Hyp_Cir> (const Hyp_Cir& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Hyp_Lin> (const Hyp_Lin& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Hyp_Afp> (const Hyp_Afp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Cir> (const Pnt_Cir& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Lin> (const Pnt_Lin& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Vec> (const Pnt_Vec& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Pnt_Afp> (const Pnt_Afp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Par_Biv> (const Par_Biv& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Sph_Flp> (const Sph_Flp& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Sph_Afl> (const Sph_Afl& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Sta_Drt> (const Sta_Drt& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Sta_Biv> (const Sta_Biv& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Drb_Afp> (const Drb_Afp& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Tnv_Flp> (const Tnv_Flp& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Tnt_Flp> (const Tnt_Flp& a) {
		return Rot (0,a[0],a[1],a[2]);
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
		 
template<> inline const Rot cast<Rot,Tri_Aff> (const Tri_Aff& a) {
		return Rot (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rot cast<Rot,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Rot (a[0],0,0,0);
}  
		 
template<> inline const Rot cast<Rot,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Rot (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rot cast<Rot,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Rot (a[0],a[1],a[2],a[3]);
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
		 
template<> inline const Mot cast<Mot,Inf_Cir> (const Inf_Cir& a) {
		return Mot (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Mot cast<Mot,Inf_Afp> (const Inf_Afp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,a[6]);
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
		 
template<> inline const Mot cast<Mot,Hyp_Vec> (const Hyp_Vec& a) {
		return Mot (0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mot cast<Mot,Hyp_Afp> (const Hyp_Afp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,a[7]);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Cir> (const Pnt_Cir& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],a[14]);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Lin> (const Pnt_Lin& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],a[13]);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Vec> (const Pnt_Vec& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mot cast<Mot,Pnt_Afp> (const Pnt_Afp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,a[10]);
}  
		 
template<> inline const Mot cast<Mot,Par_Biv> (const Par_Biv& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[14]);
}  
		 
template<> inline const Mot cast<Mot,Sph_Flp> (const Sph_Flp& a) {
		return Mot (0,a[0],a[1],a[2],a[3],a[4],a[5],a[10]);
}  
		 
template<> inline const Mot cast<Mot,Sph_Biv> (const Sph_Biv& a) {
		return Mot (0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mot cast<Mot,Sph_Afl> (const Sph_Afl& a) {
		return Mot (0,a[0],a[1],a[2],a[6],a[7],a[8],0);
}  
		 
template<> inline const Mot cast<Mot,Sta_Drt> (const Sta_Drt& a) {
		return Mot (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Mot cast<Mot,Sta_Biv> (const Sta_Biv& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[11]);
}  
		 
template<> inline const Mot cast<Mot,Drv_Pln> (const Drv_Pln& a) {
		return Mot (0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Mot cast<Mot,Drb_Afp> (const Drb_Afp& a) {
		return Mot (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mot cast<Mot,Tnv_Flp> (const Tnv_Flp& a) {
		return Mot (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Tnt_Flp> (const Tnt_Flp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
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
		 
template<> inline const Mot cast<Mot,Flp_Dll> (const Flp_Dll& a) {
		return Mot (0,0,0,0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Mot cast<Mot,Vec_Aff> (const Vec_Aff& a) {
		return Mot (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Vec_Afp> (const Vec_Afp& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Tri_Aff> (const Tri_Aff& a) {
		return Mot (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Mot (a[0],0,0,0,a[4],a[5],a[6],0);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[13]);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Mot (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mot cast<Mot,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Mot (0,0,0,0,a[3],a[4],a[5],a[11]);
}  
		 
template<> inline const Mot cast<Mot,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Mot (0,0,0,0,a[3],a[4],a[5],a[7]);
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
		 
template<> inline const Dil cast<Dil,Mnk_Par> (const Mnk_Par& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Dil (a[0],a[7]);
}  
		 
template<> inline const Dil cast<Dil,Pss_Afp> (const Pss_Afp& a) {
		return Dil (0,a[3]);
}  
		 
template<> inline const Dil cast<Dil,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Dil (a[0],a[10]);
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
		 
template<> inline const Dil cast<Dil,Par_Biv> (const Par_Biv& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Sph_Biv> (const Sph_Biv& a) {
		return Dil (0,a[6]);
}  
		 
template<> inline const Dil cast<Dil,Sph_Afl> (const Sph_Afl& a) {
		return Dil (0,a[9]);
}  
		 
template<> inline const Dil cast<Dil,Sta_Biv> (const Sta_Biv& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Drb_Afp> (const Drb_Afp& a) {
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
		 
template<> inline const Dil cast<Dil,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Dil (a[0],a[7]);
}  
		 
template<> inline const Dil cast<Dil,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Dil (a[0],0);
}  
		 
template<> inline const Dil cast<Dil,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Dil (0,a[6]);
}  
		 
template<> inline const Dil cast<Dil,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Dil (0,a[3]);
}  
		 
template<> inline const Dil cast<Dil,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Dil (0,a[0]);
}  
		 
template<> inline const Dil cast<Dil,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Dil (0,a[3]);
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
		 
template<> inline const Trv cast<Trv,Pss_Afp> (const Pss_Afp& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Trv (a[0],a[4],a[5],a[6]);
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
		 
template<> inline const Trv cast<Trv,Par_Biv> (const Par_Biv& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Sph_Biv> (const Sph_Biv& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Sph_Afl> (const Sph_Afl& a) {
		return Trv (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trv cast<Trv,Sta_Biv> (const Sta_Biv& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Drb_Afp> (const Drb_Afp& a) {
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
		 
template<> inline const Trv cast<Trv,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Trv (a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Trv (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Trv (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trv cast<Trv,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Trv (0,a[0],a[1],a[2]);
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
		 
template<> inline const Mtd cast<Mtd,Ori_Cir> (const Ori_Cir& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Mtd cast<Mtd,Ori_Drb> (const Ori_Drb& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mtd cast<Mtd,Ori_Lin> (const Ori_Lin& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Mtd cast<Mtd,Inf_Cir> (const Inf_Cir& a) {
		return Mtd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Mtd cast<Mtd,Inf_Afp> (const Inf_Afp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6]);
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
		 
template<> inline const Mtd cast<Mtd,Hyp_Vec> (const Hyp_Vec& a) {
		return Mtd (0,0,0,0,a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Hyp_Afp> (const Hyp_Afp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[7]);
}  
		 
template<> inline const Mtd cast<Mtd,Pss_Aff> (const Pss_Aff& a) {
		return Mtd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Mtd cast<Mtd,Pss_Afp> (const Pss_Afp& a) {
		return Mtd (0,0,0,0,0,0,0,a[3],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10],0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Cir> (const Pnt_Cir& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Lin> (const Pnt_Lin& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Vec> (const Pnt_Vec& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Pnt_Afp> (const Pnt_Afp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Mtd cast<Mtd,Par_Biv> (const Par_Biv& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Mtd cast<Mtd,Sph_Flp> (const Sph_Flp& a) {
		return Mtd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Mtd cast<Mtd,Sph_Biv> (const Sph_Biv& a) {
		return Mtd (0,0,0,0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mtd cast<Mtd,Sph_Afl> (const Sph_Afl& a) {
		return Mtd (0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Mtd cast<Mtd,Sta_Drt> (const Sta_Drt& a) {
		return Mtd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Mtd cast<Mtd,Sta_Biv> (const Sta_Biv& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,0,0,0,a[11]);
}  
		 
template<> inline const Mtd cast<Mtd,Drv_Pln> (const Drv_Pln& a) {
		return Mtd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3]);
}  
		 
template<> inline const Mtd cast<Mtd,Drb_Afp> (const Drb_Afp& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Mtd cast<Mtd,Tnv_Flp> (const Tnv_Flp& a) {
		return Mtd (a[0],a[1],a[2],a[3],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Mtd cast<Mtd,Tnt_Flp> (const Tnt_Flp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
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
		 
template<> inline const Mtd cast<Mtd,Flp_Dll> (const Flp_Dll& a) {
		return Mtd (0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Mtd cast<Mtd,Vec_Aff> (const Vec_Aff& a) {
		return Mtd (a[0],a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Vec_Afp> (const Vec_Afp& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Tri_Aff> (const Tri_Aff& a) {
		return Mtd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Mtd (a[0],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Mtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],0,a[10],a[11],a[12],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Mtd (0,0,0,0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[11]);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Mtd (0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mtd cast<Mtd,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Mtd (0,0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Mtd cast<Mtd,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Mtd (0,0,0,0,a[3],a[4],a[5],0,0,0,0,a[7]);
}  
		 
template<> inline const Mtd cast<Mtd,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Mtd (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Mtd cast<Mtd,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Mtd (0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],0);
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
		 
template<> inline const Trs cast<Trs,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Pnt_Cir> (const Pnt_Cir& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Pnt_Lin> (const Pnt_Lin& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Pnt_Vec> (const Pnt_Vec& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Par_Biv> (const Par_Biv& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Sph_Flp> (const Sph_Flp& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Sph_Biv> (const Sph_Biv& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Sph_Afl> (const Sph_Afl& a) {
		return Trs (0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trs cast<Trs,Sta_Drt> (const Sta_Drt& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Sta_Biv> (const Sta_Biv& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Drv_Pln> (const Drv_Pln& a) {
		return Trs (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trs cast<Trs,Drb_Afp> (const Drb_Afp& a) {
		return Trs (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trs cast<Trs,Tnv_Flp> (const Tnv_Flp& a) {
		return Trs (a[0],0,0,0);
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
		 
template<> inline const Trs cast<Trs,Flp_Dll> (const Flp_Dll& a) {
		return Trs (0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trs cast<Trs,Vec_Aff> (const Vec_Aff& a) {
		return Trs (a[0],0,0,0);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Trs (a[0],a[4],a[5],a[6]);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Trs (a[0],a[7],a[8],a[9]);
}  
		 
template<> inline const Trs cast<Trs,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Trs (0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trs cast<Trs,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Trs (0,a[3],a[4],a[5]);
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
		 
template<> inline const Rtc cast<Rtc,Mnk_Pnt> (const Mnk_Pnt& a) {
		return Rtc (0,0,0,a[0],a[1],0,0,0,0,0,0,a[2],a[3],a[4],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Cir> (const Mnk_Cir& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0,a[9]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Lin> (const Mnk_Lin& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Dlp> (const Mnk_Dlp& a) {
		return Rtc (0,0,0,0,a[0],0,0,0,0,0,0,a[1],a[2],a[3],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Vec> (const Mnk_Vec& a) {
		return Rtc (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Aff> (const Mnk_Aff& a) {
		return Rtc (0,0,0,a[0],0,0,0,0,0,0,0,a[1],a[2],a[3],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Afp> (const Mnk_Afp& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3]);
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
		 
template<> inline const Rtc cast<Rtc,Pss_Flp> (const Pss_Flp& a) {
		return Rtc (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0);
}  
		 
template<> inline const Rtc cast<Rtc,Pss_Afl> (const Pss_Afl& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,0);
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
		 
template<> inline const Rtc cast<Rtc,Par_Drb> (const Par_Drb& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Rtc cast<Rtc,Par_Tnb> (const Par_Tnb& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Rtc cast<Rtc,Par_Afp> (const Par_Afp& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Rtc cast<Rtc,Cir_Flp> (const Cir_Flp& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Rtc cast<Rtc,Cir_Biv> (const Cir_Biv& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0,a[14]);
}  
		 
template<> inline const Rtc cast<Rtc,Sph_Vec> (const Sph_Vec& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9]);
}  
		 
template<> inline const Rtc cast<Rtc,Sph_Afp> (const Sph_Afp& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],0,0,0,a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Sta_Vec> (const Sta_Vec& a) {
		return Rtc (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,a[11],0);
}  
		 
template<> inline const Rtc cast<Rtc,Sta_Tri> (const Sta_Tri& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],a[6],a[7],a[8],0,0,0,0,0);
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
		 
template<> inline const Rtc cast<Rtc,Drt_Afp> (const Drt_Afp& a) {
		return Rtc (a[0],a[1],a[2],0,a[3],0,0,0,0,0,0,a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Tnv_Vec> (const Tnv_Vec& a) {
		return Rtc (0,0,0,a[0],0,a[1],a[2],a[3],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Tnb_Flp> (const Tnb_Flp& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],0,0,0,a[6],a[7],a[8],a[9],a[10]);
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
		 
template<> inline const Rtc cast<Rtc,Pln_Dlp> (const Pln_Dlp& a) {
		return Rtc (0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Rtc cast<Rtc,Flp_Dlp> (const Flp_Dlp& a) {
		return Rtc (0,0,0,0,a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Flp_Tri> (const Flp_Tri& a) {
		return Rtc (0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3]);
}  
		 
template<> inline const Rtc cast<Rtc,Flp_Afp> (const Flp_Afp& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rtc cast<Rtc,Dlp_Biv> (const Dlp_Biv& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,a[3],a[4],a[5],0,0,0,a[6],0);
}  
		 
template<> inline const Rtc cast<Rtc,Vec_Biv> (const Vec_Biv& a) {
		return Rtc (a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0,a[3],0);
}  
		 
template<> inline const Rtc cast<Rtc,Vec_Afl> (const Vec_Afl& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],0,0,0,0,0,0,a[7],0);
}  
		 
template<> inline const Rtc cast<Rtc,Biv_Aff> (const Biv_Aff& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],0,0,0,0,0,0,a[6],0);
}  
		 
template<> inline const Rtc cast<Rtc,Biv_Afp> (const Biv_Afp& a) {
		return Rtc (a[0],a[1],a[2],a[3],0,a[4],a[5],a[6],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Tri_Afl> (const Tri_Afl& a) {
		return Rtc (a[0],a[1],a[2],0,0,a[3],a[4],a[5],0,0,0,0,0,0,0,0);
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
		 
template<> inline const Rtc cast<Rtc,Mnk_Sta_Vec> (const Mnk_Sta_Vec& a) {
		return Rtc (0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,a[11]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Vec_Biv> (const Mnk_Vec_Biv& a) {
		return Rtc (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Vec_Afl> (const Mnk_Vec_Afl& a) {
		return Rtc (0,0,0,a[0],0,a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,a[7]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Biv_Aff> (const Mnk_Biv_Aff& a) {
		return Rtc (0,0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Rtc cast<Rtc,Mnk_Biv_Afp> (const Mnk_Biv_Afp& a) {
		return Rtc (0,0,0,a[0],0,a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Rtc cast<Rtc,Pss_Hyp_Drv_Tnb> (const Pss_Hyp_Drv_Tnb& a) {
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
		 
template<> inline const Mtt cast<Mtt,Ori_Cir> (const Ori_Cir& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Mtt cast<Mtt,Ori_Drb> (const Ori_Drb& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Ori_Lin> (const Ori_Lin& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Inf_Cir> (const Inf_Cir& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0,a[9]);
}  
		 
template<> inline const Mtt cast<Mtt,Inf_Afp> (const Inf_Afp& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0,a[6]);
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
		 
template<> inline const Mtt cast<Mtt,Hyp_Vec> (const Hyp_Vec& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Hyp_Afp> (const Hyp_Afp& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Mtt cast<Mtt,Pss_Aff> (const Pss_Aff& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Mtt cast<Mtt,Pss_Afp> (const Pss_Afp& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Cir> (const Pnt_Cir& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Lin> (const Pnt_Lin& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Vec> (const Pnt_Vec& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Pnt_Afp> (const Pnt_Afp& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Mtt cast<Mtt,Par_Biv> (const Par_Biv& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13],a[14]);
}  
		 
template<> inline const Mtt cast<Mtt,Sph_Flp> (const Sph_Flp& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Mtt cast<Mtt,Sph_Biv> (const Sph_Biv& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Sph_Afl> (const Sph_Afl& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Mtt cast<Mtt,Sta_Drt> (const Sta_Drt& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Sta_Biv> (const Sta_Biv& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,a[10],a[11]);
}  
		 
template<> inline const Mtt cast<Mtt,Drv_Pln> (const Drv_Pln& a) {
		return Mtt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,a[3]);
}  
		 
template<> inline const Mtt cast<Mtt,Drb_Afp> (const Drb_Afp& a) {
		return Mtt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Tnv_Flp> (const Tnv_Flp& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Tnv_Biv> (const Tnv_Biv& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],0);
}  
		 
template<> inline const Mtt cast<Mtt,Tnt_Flp> (const Tnt_Flp& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6],0);
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
		 
template<> inline const Mtt cast<Mtt,Flp_Dll> (const Flp_Dll& a) {
		return Mtt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],0,a[6]);
}  
		 
template<> inline const Mtt cast<Mtt,Vec_Aff> (const Vec_Aff& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Vec_Afp> (const Vec_Afp& a) {
		return Mtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0,a[6],0);
}  
		 
template<> inline const Mtt cast<Mtt,Tri_Aff> (const Tri_Aff& a) {
		return Mtt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,a[3],0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Mtt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],0,a[13]);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Mtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13],0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11]);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Mtt cast<Mtt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7]);
}  
		 
template<> inline const Mtt cast<Mtt,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Mtt (0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0,0);
}  
		 
template<> inline const Mtt cast<Mtt,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Mtt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],a[7],0);
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
		 
template<> inline const Rtt cast<Rtt,Ori_Cir> (const Ori_Cir& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Rtt cast<Rtt,Ori_Drb> (const Ori_Drb& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Ori_Lin> (const Ori_Lin& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Rtt cast<Rtt,Inf_Cir> (const Inf_Cir& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Inf_Afp> (const Inf_Afp& a) {
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
		 
template<> inline const Rtt cast<Rtt,Hyp_Vec> (const Hyp_Vec& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Hyp_Afp> (const Hyp_Afp& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,a[6]);
}  
		 
template<> inline const Rtt cast<Rtt,Pss_Aff> (const Pss_Aff& a) {
		return Rtt (0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Rtt cast<Rtt,Pss_Afp> (const Pss_Afp& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Cir> (const Pnt_Cir& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[13]);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Lin> (const Pnt_Lin& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],0);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Vec> (const Pnt_Vec& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Pnt_Afp> (const Pnt_Afp& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Rtt cast<Rtt,Par_Biv> (const Par_Biv& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Rtt cast<Rtt,Sph_Flp> (const Sph_Flp& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,a[9]);
}  
		 
template<> inline const Rtt cast<Rtt,Sph_Biv> (const Sph_Biv& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Sph_Afl> (const Sph_Afl& a) {
		return Rtt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[13]);
}  
		 
template<> inline const Rtt cast<Rtt,Sta_Drt> (const Sta_Drt& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Sta_Biv> (const Sta_Biv& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[10]);
}  
		 
template<> inline const Rtt cast<Rtt,Drb_Afp> (const Drb_Afp& a) {
		return Rtt (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtt cast<Rtt,Tnv_Flp> (const Tnv_Flp& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Tnv_Biv> (const Tnv_Biv& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rtt cast<Rtt,Tnt_Flp> (const Tnt_Flp& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,a[6]);
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
		 
template<> inline const Rtt cast<Rtt,Tri_Aff> (const Tri_Aff& a) {
		return Rtt (0,a[0],a[1],a[2],0,0,0,a[3]);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Rtt (a[0],0,0,0,a[1],a[2],a[3],0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Rtt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[13]);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[10]);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Rtt cast<Rtt,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Rtt cast<Rtt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Rtt cast<Rtt,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Rtt (0,0,0,0,a[0],a[1],a[2],a[7]);
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
		 
template<> inline const Rtd cast<Rtd,Ori_Cir> (const Ori_Cir& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Ori_Drb> (const Ori_Drb& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Ori_Lin> (const Ori_Lin& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Inf_Cir> (const Inf_Cir& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Inf_Afp> (const Inf_Afp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
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
		 
template<> inline const Rtd cast<Rtd,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Rtd (a[0],0,0,0,a[7],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Hyp_Cir> (const Hyp_Cir& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[9],a[10],a[11]);
}  
		 
template<> inline const Rtd cast<Rtd,Hyp_Lin> (const Hyp_Lin& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[9],a[10],a[11]);
}  
		 
template<> inline const Rtd cast<Rtd,Hyp_Afp> (const Hyp_Afp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Pss_Aff> (const Pss_Aff& a) {
		return Rtd (0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Rtd cast<Rtd,Pss_Afp> (const Pss_Afp& a) {
		return Rtd (0,0,0,0,a[3],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[10],0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Cir> (const Pnt_Cir& a) {
		return Rtd (0,a[0],a[1],a[2],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Lin> (const Pnt_Lin& a) {
		return Rtd (0,a[0],a[1],a[2],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Vec> (const Pnt_Vec& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Pnt_Afp> (const Pnt_Afp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Par_Biv> (const Par_Biv& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Sph_Flp> (const Sph_Flp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Sph_Biv> (const Sph_Biv& a) {
		return Rtd (0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rtd cast<Rtd,Sph_Afl> (const Sph_Afl& a) {
		return Rtd (0,a[0],a[1],a[2],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Sta_Drt> (const Sta_Drt& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Rtd cast<Rtd,Sta_Biv> (const Sta_Biv& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Drb_Afp> (const Drb_Afp& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtd cast<Rtd,Tnv_Flp> (const Tnv_Flp& a) {
		return Rtd (a[0],a[1],a[2],a[3],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtd cast<Rtd,Tnt_Flp> (const Tnt_Flp& a) {
		return Rtd (0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
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
		 
template<> inline const Rtd cast<Rtd,Flp_Dll> (const Flp_Dll& a) {
		return Rtd (0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Vec_Aff> (const Vec_Aff& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Vec_Afp> (const Vec_Afp& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Tri_Aff> (const Tri_Aff& a) {
		return Rtd (0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Rtd (a[0],0,0,0,a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Rtd (a[0],a[1],a[2],a[3],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Rtd (0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Rtd (0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rtd cast<Rtd,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Rtd (0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Rtd cast<Rtd,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Rtd (0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rtd cast<Rtd,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Rtd (0,0,0,0,a[3],a[4],a[5],a[6]);
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
		 
template<> inline const Tvd cast<Tvd,Pss_Afp> (const Pss_Afp& a) {
		return Tvd (0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tvd cast<Tvd,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Tvd (a[0],a[4],a[5],a[6],a[10]);
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
		 
template<> inline const Tvd cast<Tvd,Par_Biv> (const Par_Biv& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Sph_Biv> (const Sph_Biv& a) {
		return Tvd (0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Tvd cast<Tvd,Sph_Afl> (const Sph_Afl& a) {
		return Tvd (0,a[3],a[4],a[5],a[9]);
}  
		 
template<> inline const Tvd cast<Tvd,Sta_Biv> (const Sta_Biv& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Drb_Afp> (const Drb_Afp& a) {
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
		 
template<> inline const Tvd cast<Tvd,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Tvd (a[0],a[1],a[2],a[3],a[7]);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Tvd (a[0],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tvd (0,a[0],a[1],a[2],a[6]);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Tvd (0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tvd cast<Tvd,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Tvd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvd cast<Tvd,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tvd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvd cast<Tvd,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Tvd (0,0,0,0,a[0]);
}  
		 
template<> inline const Tvd cast<Tvd,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Tvd (0,a[0],a[1],a[2],a[3]);
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
		 
template<> inline const Tsd cast<Tsd,Inf_Cir> (const Inf_Cir& a) {
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
		 
template<> inline const Tsd cast<Tsd,Pss_Afp> (const Pss_Afp& a) {
		return Tsd (0,0,0,0,a[3]);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Tsd (a[0],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Cir> (const Pnt_Cir& a) {
		return Tsd (0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Lin> (const Pnt_Lin& a) {
		return Tsd (0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tsd cast<Tsd,Pnt_Vec> (const Pnt_Vec& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Par_Biv> (const Par_Biv& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Sph_Flp> (const Sph_Flp& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Sph_Biv> (const Sph_Biv& a) {
		return Tsd (0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tsd cast<Tsd,Sph_Afl> (const Sph_Afl& a) {
		return Tsd (0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tsd cast<Tsd,Sta_Drt> (const Sta_Drt& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Sta_Biv> (const Sta_Biv& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Drv_Pln> (const Drv_Pln& a) {
		return Tsd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tsd cast<Tsd,Drb_Afp> (const Drb_Afp& a) {
		return Tsd (a[0],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Tsd cast<Tsd,Tnv_Flp> (const Tnv_Flp& a) {
		return Tsd (a[0],0,0,0,a[7]);
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
		 
template<> inline const Tsd cast<Tsd,Flp_Dll> (const Flp_Dll& a) {
		return Tsd (0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tsd cast<Tsd,Vec_Aff> (const Vec_Aff& a) {
		return Tsd (a[0],0,0,0,0);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Tsd (a[0],a[4],a[5],a[6],a[7]);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Tsd (a[0],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tsd (0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tsd cast<Tsd,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Tsd (0,0,0,0,a[3]);
}  
		 
template<> inline const Tsd cast<Tsd,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tsd (0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tsd cast<Tsd,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Tsd (0,0,0,0,a[0]);
}  
		 
template<> inline const Tsd cast<Tsd,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Tsd (0,0,0,0,a[3]);
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
		 
template<> inline const Trt cast<Trt,Ori_Cir> (const Ori_Cir& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Ori_Drb> (const Ori_Drb& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Ori_Lin> (const Ori_Lin& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Inf_Cir> (const Inf_Cir& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Inf_Afp> (const Inf_Afp& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5]);
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
		 
template<> inline const Trt cast<Trt,Hyp_Pnt> (const Hyp_Pnt& a) {
		return Trt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Cir> (const Hyp_Cir& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11]);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Lin> (const Hyp_Lin& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],0,a[9],a[10],a[11]);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Vec> (const Hyp_Vec& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Afp> (const Hyp_Afp& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Pss_Aff> (const Pss_Aff& a) {
		return Trt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2]);
}  
		 
template<> inline const Trt cast<Trt,Pss_Afp> (const Pss_Afp& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Cir> (const Pnt_Cir& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Lin> (const Pnt_Lin& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Vec> (const Pnt_Vec& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pnt_Afp> (const Pnt_Afp& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Par_Biv> (const Par_Biv& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Sph_Flp> (const Sph_Flp& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Sph_Biv> (const Sph_Biv& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Trt cast<Trt,Sph_Afl> (const Sph_Afl& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Sta_Drt> (const Sta_Drt& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8]);
}  
		 
template<> inline const Trt cast<Trt,Sta_Biv> (const Sta_Biv& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Drv_Pln> (const Drv_Pln& a) {
		return Trt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Drb_Afp> (const Drb_Afp& a) {
		return Trt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Trt cast<Trt,Tnv_Flp> (const Tnv_Flp& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Trt cast<Trt,Tnv_Biv> (const Tnv_Biv& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Tnt_Flp> (const Tnt_Flp& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5]);
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
		 
template<> inline const Trt cast<Trt,Flp_Dll> (const Flp_Dll& a) {
		return Trt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Vec_Aff> (const Vec_Aff& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Vec_Afp> (const Vec_Afp& a) {
		return Trt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Tri_Aff> (const Tri_Aff& a) {
		return Trt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Trt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Trt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Trt cast<Trt,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5]);
}  
		 
template<> inline const Trt cast<Trt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0);
}  
		 
template<> inline const Trt cast<Trt,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Trt (0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Trt cast<Trt,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Trt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6]);
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
		 
template<> inline const Rvd cast<Rvd,Ori_Cir> (const Ori_Cir& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rvd cast<Rvd,Ori_Drb> (const Ori_Drb& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Rvd cast<Rvd,Ori_Lin> (const Ori_Lin& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Rvd cast<Rvd,Inf_Cir> (const Inf_Cir& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Rvd cast<Rvd,Inf_Afp> (const Inf_Afp& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
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
		 
template<> inline const Rvd cast<Rvd,Hyp_Vec> (const Hyp_Vec& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Hyp_Afp> (const Hyp_Afp& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rvd cast<Rvd,Pss_Aff> (const Pss_Aff& a) {
		return Rvd (0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Rvd cast<Rvd,Pss_Afp> (const Pss_Afp& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[3],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[10],0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Cir> (const Pnt_Cir& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Lin> (const Pnt_Lin& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Vec> (const Pnt_Vec& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Pnt_Afp> (const Pnt_Afp& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rvd cast<Rvd,Par_Biv> (const Par_Biv& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rvd cast<Rvd,Sph_Flp> (const Sph_Flp& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Rvd cast<Rvd,Sph_Biv> (const Sph_Biv& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Rvd cast<Rvd,Sph_Afl> (const Sph_Afl& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rvd cast<Rvd,Sta_Drt> (const Sta_Drt& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Rvd cast<Rvd,Sta_Biv> (const Sta_Biv& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,a[10]);
}  
		 
template<> inline const Rvd cast<Rvd,Drb_Afp> (const Drb_Afp& a) {
		return Rvd (a[0],a[1],a[2],a[3],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Rvd cast<Rvd,Tnv_Flp> (const Tnv_Flp& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Rvd cast<Rvd,Tnv_Biv> (const Tnv_Biv& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3]);
}  
		 
template<> inline const Rvd cast<Rvd,Tnt_Flp> (const Tnt_Flp& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6]);
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
		 
template<> inline const Rvd cast<Rvd,Flp_Dll> (const Flp_Dll& a) {
		return Rvd (0,0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Rvd cast<Rvd,Vec_Aff> (const Vec_Aff& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0);
}  
		 
template<> inline const Rvd cast<Rvd,Vec_Afp> (const Vec_Afp& a) {
		return Rvd (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6]);
}  
		 
template<> inline const Rvd cast<Rvd,Tri_Aff> (const Tri_Aff& a) {
		return Rvd (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Rvd (a[0],0,0,0,a[1],a[2],a[3],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,a[10],a[11],a[12],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Rvd (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Rvd cast<Rvd,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Rvd cast<Rvd,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[6]);
}  
		 
template<> inline const Rvd cast<Rvd,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Rvd (0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Rvd cast<Rvd,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Rvd (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
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
		 
template<> inline const Tst cast<Tst,Ori_Cir> (const Ori_Cir& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tst cast<Tst,Ori_Drb> (const Ori_Drb& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tst cast<Tst,Ori_Lin> (const Ori_Lin& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tst cast<Tst,Inf_Cir> (const Inf_Cir& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tst cast<Tst,Inf_Afp> (const Inf_Afp& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0);
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
		 
template<> inline const Tst cast<Tst,Hyp_Vec> (const Hyp_Vec& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Hyp_Afp> (const Hyp_Afp& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tst cast<Tst,Pss_Aff> (const Pss_Aff& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3]);
}  
		 
template<> inline const Tst cast<Tst,Pss_Afp> (const Pss_Afp& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Cir> (const Pnt_Cir& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Lin> (const Pnt_Lin& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Vec> (const Pnt_Vec& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Pnt_Afp> (const Pnt_Afp& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tst cast<Tst,Par_Biv> (const Par_Biv& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tst cast<Tst,Sph_Flp> (const Sph_Flp& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tst cast<Tst,Sph_Biv> (const Sph_Biv& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tst cast<Tst,Sph_Afl> (const Sph_Afl& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tst cast<Tst,Sta_Drt> (const Sta_Drt& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tst cast<Tst,Sta_Biv> (const Sta_Biv& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,a[10]);
}  
		 
template<> inline const Tst cast<Tst,Drv_Pln> (const Drv_Pln& a) {
		return Tst (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Drb_Afp> (const Drb_Afp& a) {
		return Tst (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tst cast<Tst,Tnv_Flp> (const Tnv_Flp& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tst cast<Tst,Tnv_Biv> (const Tnv_Biv& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Tst cast<Tst,Tnt_Flp> (const Tnt_Flp& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6]);
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
		 
template<> inline const Tst cast<Tst,Flp_Dll> (const Flp_Dll& a) {
		return Tst (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tst cast<Tst,Vec_Aff> (const Vec_Aff& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tst cast<Tst,Vec_Afp> (const Vec_Afp& a) {
		return Tst (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0,a[6]);
}  
		 
template<> inline const Tst cast<Tst,Tri_Aff> (const Tri_Aff& a) {
		return Tst (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,a[3]);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Tst (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Tst (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tst cast<Tst,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tst cast<Tst,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6]);
}  
		 
template<> inline const Tst cast<Tst,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Tst (0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Tst cast<Tst,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Tst (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],a[7]);
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
		 
template<> inline const Tvt cast<Tvt,Ori_Cir> (const Ori_Cir& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tvt cast<Tvt,Ori_Drb> (const Ori_Drb& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvt cast<Tvt,Ori_Lin> (const Ori_Lin& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tvt cast<Tvt,Inf_Cir> (const Inf_Cir& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],a[9]);
}  
		 
template<> inline const Tvt cast<Tvt,Inf_Afp> (const Inf_Afp& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[6]);
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
		 
template<> inline const Tvt cast<Tvt,Hyp_Vec> (const Hyp_Vec& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Hyp_Afp> (const Hyp_Afp& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],a[7]);
}  
		 
template<> inline const Tvt cast<Tvt,Pss_Aff> (const Pss_Aff& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],0);
}  
		 
template<> inline const Tvt cast<Tvt,Pss_Afp> (const Pss_Afp& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Pnt> (const Pnt_Pnt& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Cir> (const Pnt_Cir& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Lin> (const Pnt_Lin& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Vec> (const Pnt_Vec& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Pnt_Afp> (const Pnt_Afp& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Tvt cast<Tvt,Par_Biv> (const Par_Biv& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[14]);
}  
		 
template<> inline const Tvt cast<Tvt,Sph_Flp> (const Sph_Flp& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],a[10]);
}  
		 
template<> inline const Tvt cast<Tvt,Sph_Biv> (const Sph_Biv& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0);
}  
		 
template<> inline const Tvt cast<Tvt,Sph_Afl> (const Sph_Afl& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],0);
}  
		 
template<> inline const Tvt cast<Tvt,Sta_Drt> (const Sta_Drt& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],0,a[6],a[7],a[8],0);
}  
		 
template<> inline const Tvt cast<Tvt,Sta_Biv> (const Sta_Biv& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,0,0,0,a[11]);
}  
		 
template<> inline const Tvt cast<Tvt,Drv_Pln> (const Drv_Pln& a) {
		return Tvt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3]);
}  
		 
template<> inline const Tvt cast<Tvt,Drb_Afp> (const Drb_Afp& a) {
		return Tvt (a[0],a[1],a[2],a[3],0,0,0,a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tvt cast<Tvt,Tnv_Flp> (const Tnv_Flp& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tvt cast<Tvt,Tnv_Biv> (const Tnv_Biv& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Tnt_Flp> (const Tnt_Flp& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,a[3],a[4],a[5],0);
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
		 
template<> inline const Tvt cast<Tvt,Flp_Dll> (const Flp_Dll& a) {
		return Tvt (0,0,0,0,0,0,0,a[0],a[1],a[2],0,a[3],a[4],a[5],a[6]);
}  
		 
template<> inline const Tvt cast<Tvt,Vec_Aff> (const Vec_Aff& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Vec_Afp> (const Vec_Afp& a) {
		return Tvt (0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Tri_Aff> (const Tri_Aff& a) {
		return Tvt (0,a[0],a[1],a[2],0,0,0,0,0,0,0,0,0,0,0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Pnt_Pnt> (const Mnk_Pnt_Pnt& a) {
		return Tvt (a[0],0,0,0,a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Pnt_Lin> (const Mnk_Pnt_Lin& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],a[13]);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Sph_Afl> (const Mnk_Sph_Afl& a) {
		return Tvt (a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],0,a[10],a[11],a[12],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Sta_Biv> (const Mnk_Sta_Biv& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[11]);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Vec_Aff> (const Mnk_Vec_Aff& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],0);
}  
		 
template<> inline const Tvt cast<Tvt,Mnk_Vec_Afp> (const Mnk_Vec_Afp& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,0,a[3],a[4],a[5],0);
}  
		 
template<> inline const Tvt cast<Tvt,Hyp_Drv_Tnb> (const Hyp_Drv_Tnb& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],a[3],a[4],a[5],0,0,0,0,a[7]);
}  
		 
template<> inline const Tvt cast<Tvt,Pss_Vec_Biv> (const Pss_Vec_Biv& a) {
		return Tvt (0,0,0,0,0,0,0,0,0,0,a[0],a[1],a[2],a[3],0);
}  
		 
template<> inline const Tvt cast<Tvt,Pss_Vec_Afl> (const Pss_Vec_Afl& a) {
		return Tvt (0,0,0,0,a[0],a[1],a[2],0,0,0,a[3],a[4],a[5],a[6],0);
}  
			
	} //vsr::
	#endif
	