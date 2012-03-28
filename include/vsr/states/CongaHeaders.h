		#ifndef CONGAHEADERS_H_INCLUDED
		#define CONGAHEADERS_H_INCLUDED
		
				#include "Sca.h"
				#include "Ori.h"
				#include "Inf.h"
				#include "Mnk.h"
				#include "Hyp.h"
				#include "Pss.h"
				#include "Pnt.h"
				#include "Par.h"
				#include "Cir.h"
				#include "Sph.h"
				#include "Sta.h"
				#include "Drv.h"
				#include "Drb.h"
				#include "Drt.h"
				#include "Tnv.h"
				#include "Tnb.h"
				#include "Tnt.h"
				#include "Lin.h"
				#include "Pln.h"
				#include "Flp.h"
				#include "Dll.h"
				#include "Dlp.h"
				#include "Vec.h"
				#include "Biv.h"
				#include "Tri.h"
				#include "Aff.h"
				#include "Afl.h"
				#include "Afp.h"
				#include "Rot.h"
				#include "Trs.h"
				#include "Dil.h"
				#include "Mot.h"
				#include "Trv.h"
				#include "Mtd.h"
				#include "Rot_Dil.h"
				#include "Rot_Trv.h"
				#include "Trs_Dil.h"
				#include "Trs_Trv.h"
				#include "Dil_Trv.h"
				#include "Mot_Trv.h"
				#include "Rot_Ori.h"
				#include "Rot_Inf.h"
				#include "Rot_Mnk.h"
				#include "Rot_Hyp.h"
				#include "Rot_Pss.h"
				#include "Rot_Pnt.h"
				#include "Rot_Cir.h"
				#include "Rot_Sph.h"
				#include "Rot_Sta.h"
				#include "Rot_Drv.h"
				#include "Rot_Tnv.h"
				#include "Rot_Lin.h"
				#include "Rot_Pln.h"
				#include "Rot_Dlp.h"
				#include "Rot_Vec.h"
				#include "Rot_Aff.h"
				#include "Trs_Ori.h"
				#include "Trs_Hyp.h"
				#include "Trs_Pss.h"
				#include "Trs_Pnt.h"
				#include "Trs_Par.h"
				#include "Trs_Cir.h"
				#include "Trs_Sph.h"
				#include "Trs_Tnv.h"
				#include "Trs_Tnb.h"
				#include "Trs_Tnt.h"
				#include "Trs_Lin.h"
				#include "Trs_Pln.h"
				#include "Trs_Dll.h"
				#include "Trs_Dlp.h"
				#include "Trs_Tri.h"
				#include "Trs_Afp.h"
				#include "Dil_Pss.h"
				#include "Dil_Sph.h"
				#include "Dil_Sta.h"
				#include "Dil_Lin.h"
				#include "Dil_Pln.h"
				#include "Dil_Dll.h"
				#include "Dil_Dlp.h"
				#include "Dil_Vec.h"
				#include "Dil_Biv.h"
				#include "Dil_Afl.h"
				#include "Dil_Afp.h"
				#include "Mot_Ori.h"
				#include "Mot_Tnv.h"
				#include "Trv_Mnk.h"
				#include "Trv_Pss.h"
				#include "Trv_Pnt.h"
				#include "Trv_Par.h"
				#include "Trv_Cir.h"
				#include "Trv_Sph.h"
				#include "Trv_Drv.h"
				#include "Trv_Drb.h"
				#include "Trv_Vec.h"
				#include "Trv_Biv.h"
				#include "Mtd_Pss.h"
				#include "Ori_Par.h"
				#include "Ori_Cir.h"
				#include "Ori_Sta.h"
				#include "Inf_Par.h"
				#include "Inf_Cir.h"
				#include "Inf_Sph.h"
				#include "Mnk_Pnt.h"
				#include "Mnk_Par.h"
				#include "Mnk_Cir.h"
				#include "Mnk_Sph.h"
				#include "Mnk_Sta.h"
				#include "Mnk_Lin.h"
				#include "Mnk_Pln.h"
				#include "Mnk_Dll.h"
				#include "Mnk_Dlp.h"
				#include "Mnk_Vec.h"
				#include "Mnk_Biv.h"
				#include "Mnk_Aff.h"
				#include "Mnk_Afl.h"
				#include "Hyp_Pss.h"
				#include "Hyp_Pnt.h"
				#include "Hyp_Par.h"
				#include "Hyp_Cir.h"
				#include "Hyp_Sph.h"
				#include "Hyp_Sta.h"
				#include "Hyp_Vec.h"
				#include "Hyp_Biv.h"
				#include "Pss_Sta.h"
				#include "Pss_Aff.h"
				#include "Pss_Afl.h"
				#include "Pnt_Pnt.h"
				#include "Pnt_Par.h"
				#include "Pnt_Cir.h"
				#include "Pnt_Sph.h"
				#include "Pnt_Lin.h"
				#include "Pnt_Dll.h"
				#include "Pnt_Vec.h"
				#include "Pnt_Biv.h"
				#include "Pnt_Afl.h"
				#include "Par_Biv.h"
				#include "Cir_Biv.h"
				#include "Sph_Vec.h"
				#include "Sph_Biv.h"
				#include "Sph_Afl.h"
				#include "Sta_Tri.h"
				#include "Drv_Tnb.h"
				#include "Pln_Pln.h"
				#include "Pln_Dlp.h"
				#include "Pln_Biv.h"
				#include "Dlp_Biv.h"
				#include "Vec_Aff.h"
				#include "Biv_Aff.h"
				#include "Tri_Aff.h"
				#include "Tri_Afl.h"
				#include "Rot_Trv_Mnk.h"
				#include "Rot_Trv_Pss.h"
				#include "Rot_Mnk_Pnt.h"
				#include "Rot_Hyp_Pss.h"
				#include "Trv_Mnk_Vec.h"
				#include "Trv_Mnk_Biv.h"
				#include "Mnk_Pnt_Pnt.h"
				#include "Mnk_Pnt_Sph.h"
				#include "Mnk_Pnt_Lin.h"
				#include "Mnk_Pnt_Dll.h"
				#include "Mnk_Pnt_Afl.h"
				#include "Mnk_Sph_Afl.h"
				#include "Mnk_Vec_Aff.h"
				#include "Mnk_Biv_Aff.h"
				#include "Hyp_ip_Sph.h"
				#include "Biv_ip_Sph.h"
				#include "Muv.h"
		
				
		namespace vsr {
			
			class CongaTypes{
				
				CongaTypes(){
								Sca :: Bind();
								Ori :: Bind();
								Inf :: Bind();
								Mnk :: Bind();
								Hyp :: Bind();
								Pss :: Bind();
								Pnt :: Bind();
								Par :: Bind();
								Cir :: Bind();
								Sph :: Bind();
								Sta :: Bind();
								Drv :: Bind();
								Drb :: Bind();
								Drt :: Bind();
								Tnv :: Bind();
								Tnb :: Bind();
								Tnt :: Bind();
								Lin :: Bind();
								Pln :: Bind();
								Flp :: Bind();
								Dll :: Bind();
								Dlp :: Bind();
								Vec :: Bind();
								Biv :: Bind();
								Tri :: Bind();
								Aff :: Bind();
								Afl :: Bind();
								Afp :: Bind();
								Rot :: Bind();
								Trs :: Bind();
								Dil :: Bind();
								Mot :: Bind();
								Trv :: Bind();
								Mtd :: Bind();
								Rot_Dil :: Bind();
								Rot_Trv :: Bind();
								Trs_Dil :: Bind();
								Trs_Trv :: Bind();
								Dil_Trv :: Bind();
								Mot_Trv :: Bind();
								Rot_Ori :: Bind();
								Rot_Inf :: Bind();
								Rot_Mnk :: Bind();
								Rot_Hyp :: Bind();
								Rot_Pss :: Bind();
								Rot_Pnt :: Bind();
								Rot_Cir :: Bind();
								Rot_Sph :: Bind();
								Rot_Sta :: Bind();
								Rot_Drv :: Bind();
								Rot_Tnv :: Bind();
								Rot_Lin :: Bind();
								Rot_Pln :: Bind();
								Rot_Dlp :: Bind();
								Rot_Vec :: Bind();
								Rot_Aff :: Bind();
								Trs_Ori :: Bind();
								Trs_Hyp :: Bind();
								Trs_Pss :: Bind();
								Trs_Pnt :: Bind();
								Trs_Par :: Bind();
								Trs_Cir :: Bind();
								Trs_Sph :: Bind();
								Trs_Tnv :: Bind();
								Trs_Tnb :: Bind();
								Trs_Tnt :: Bind();
								Trs_Lin :: Bind();
								Trs_Pln :: Bind();
								Trs_Dll :: Bind();
								Trs_Dlp :: Bind();
								Trs_Tri :: Bind();
								Trs_Afp :: Bind();
								Dil_Pss :: Bind();
								Dil_Sph :: Bind();
								Dil_Sta :: Bind();
								Dil_Lin :: Bind();
								Dil_Pln :: Bind();
								Dil_Dll :: Bind();
								Dil_Dlp :: Bind();
								Dil_Vec :: Bind();
								Dil_Biv :: Bind();
								Dil_Afl :: Bind();
								Dil_Afp :: Bind();
								Mot_Ori :: Bind();
								Mot_Tnv :: Bind();
								Trv_Mnk :: Bind();
								Trv_Pss :: Bind();
								Trv_Pnt :: Bind();
								Trv_Par :: Bind();
								Trv_Cir :: Bind();
								Trv_Sph :: Bind();
								Trv_Drv :: Bind();
								Trv_Drb :: Bind();
								Trv_Vec :: Bind();
								Trv_Biv :: Bind();
								Mtd_Pss :: Bind();
								Ori_Par :: Bind();
								Ori_Cir :: Bind();
								Ori_Sta :: Bind();
								Inf_Par :: Bind();
								Inf_Cir :: Bind();
								Inf_Sph :: Bind();
								Mnk_Pnt :: Bind();
								Mnk_Par :: Bind();
								Mnk_Cir :: Bind();
								Mnk_Sph :: Bind();
								Mnk_Sta :: Bind();
								Mnk_Lin :: Bind();
								Mnk_Pln :: Bind();
								Mnk_Dll :: Bind();
								Mnk_Dlp :: Bind();
								Mnk_Vec :: Bind();
								Mnk_Biv :: Bind();
								Mnk_Aff :: Bind();
								Mnk_Afl :: Bind();
								Hyp_Pss :: Bind();
								Hyp_Pnt :: Bind();
								Hyp_Par :: Bind();
								Hyp_Cir :: Bind();
								Hyp_Sph :: Bind();
								Hyp_Sta :: Bind();
								Hyp_Vec :: Bind();
								Hyp_Biv :: Bind();
								Pss_Sta :: Bind();
								Pss_Aff :: Bind();
								Pss_Afl :: Bind();
								Pnt_Pnt :: Bind();
								Pnt_Par :: Bind();
								Pnt_Cir :: Bind();
								Pnt_Sph :: Bind();
								Pnt_Lin :: Bind();
								Pnt_Dll :: Bind();
								Pnt_Vec :: Bind();
								Pnt_Biv :: Bind();
								Pnt_Afl :: Bind();
								Par_Biv :: Bind();
								Cir_Biv :: Bind();
								Sph_Vec :: Bind();
								Sph_Biv :: Bind();
								Sph_Afl :: Bind();
								Sta_Tri :: Bind();
								Drv_Tnb :: Bind();
								Pln_Pln :: Bind();
								Pln_Dlp :: Bind();
								Pln_Biv :: Bind();
								Dlp_Biv :: Bind();
								Vec_Aff :: Bind();
								Biv_Aff :: Bind();
								Tri_Aff :: Bind();
								Tri_Afl :: Bind();
								Rot_Trv_Mnk :: Bind();
								Rot_Trv_Pss :: Bind();
								Rot_Mnk_Pnt :: Bind();
								Rot_Hyp_Pss :: Bind();
								Trv_Mnk_Vec :: Bind();
								Trv_Mnk_Biv :: Bind();
								Mnk_Pnt_Pnt :: Bind();
								Mnk_Pnt_Sph :: Bind();
								Mnk_Pnt_Lin :: Bind();
								Mnk_Pnt_Dll :: Bind();
								Mnk_Pnt_Afl :: Bind();
								Mnk_Sph_Afl :: Bind();
								Mnk_Vec_Aff :: Bind();
								Mnk_Biv_Aff :: Bind();
								Hyp_ip_Sph :: Bind();
								Biv_ip_Sph :: Bind();
								Muv :: Bind();
				
				}
			
				public:
				
				static void BindAll(){
					static CongaTypes TheCongaInit;
				}
					
			};
		}
		
		#endif
		

	