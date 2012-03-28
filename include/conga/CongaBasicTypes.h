	
		#include "conga_assign_Sca.h"
		#include "conga_assign_Ori.h"
		#include "conga_assign_Inf.h"
		#include "conga_assign_Mnk.h"
		#include "conga_assign_Hyp.h"
		#include "conga_assign_Pss.h"
		#include "conga_assign_Pnt.h"
		#include "conga_assign_Par.h"
		#include "conga_assign_Cir.h"
		#include "conga_assign_Sph.h"
		#include "conga_assign_Sta.h"
		#include "conga_assign_Drv.h"
		#include "conga_assign_Drb.h"
		#include "conga_assign_Drt.h"
		#include "conga_assign_Tnv.h"
		#include "conga_assign_Tnb.h"
		#include "conga_assign_Tnt.h"
		#include "conga_assign_Lin.h"
		#include "conga_assign_Pln.h"
		#include "conga_assign_Flp.h"
		#include "conga_assign_Dll.h"
		#include "conga_assign_Dlp.h"
		#include "conga_assign_Vec.h"
		#include "conga_assign_Biv.h"
		#include "conga_assign_Tri.h"
		#include "conga_assign_Aff.h"
		#include "conga_assign_Afl.h"
		#include "conga_assign_Afp.h"
		#include "conga_assign_Rot.h"
		#include "conga_assign_Trs.h"
		#include "conga_assign_Dil.h"
		#include "conga_assign_Mot.h"
		#include "conga_assign_Trv.h"
		#include "conga_assign_Mtd.h"
		#include "conga_assign_Rot_Dil.h"
		#include "conga_assign_Rot_Trv.h"
		#include "conga_assign_Trs_Dil.h"
		#include "conga_assign_Trs_Trv.h"
		#include "conga_assign_Dil_Trv.h"
		#include "conga_assign_Mot_Trv.h"
		#include "conga_assign_Rot_Ori.h"
		#include "conga_assign_Rot_Inf.h"
		#include "conga_assign_Rot_Mnk.h"
		#include "conga_assign_Rot_Hyp.h"
		#include "conga_assign_Rot_Pss.h"
		#include "conga_assign_Rot_Pnt.h"
		#include "conga_assign_Rot_Cir.h"
		#include "conga_assign_Rot_Sph.h"
		#include "conga_assign_Rot_Sta.h"
		#include "conga_assign_Rot_Drv.h"
		#include "conga_assign_Rot_Tnv.h"
		#include "conga_assign_Rot_Lin.h"
		#include "conga_assign_Rot_Pln.h"
		#include "conga_assign_Rot_Dlp.h"
		#include "conga_assign_Rot_Vec.h"
		#include "conga_assign_Rot_Aff.h"
		#include "conga_assign_Trs_Ori.h"
		#include "conga_assign_Trs_Hyp.h"
		#include "conga_assign_Trs_Pss.h"
		#include "conga_assign_Trs_Pnt.h"
		#include "conga_assign_Trs_Par.h"
		#include "conga_assign_Trs_Cir.h"
		#include "conga_assign_Trs_Sph.h"
		#include "conga_assign_Trs_Tnv.h"
		#include "conga_assign_Trs_Tnb.h"
		#include "conga_assign_Trs_Tnt.h"
		#include "conga_assign_Trs_Lin.h"
		#include "conga_assign_Trs_Pln.h"
		#include "conga_assign_Trs_Dll.h"
		#include "conga_assign_Trs_Dlp.h"
		#include "conga_assign_Trs_Tri.h"
		#include "conga_assign_Trs_Afp.h"
		#include "conga_assign_Dil_Pss.h"
		#include "conga_assign_Dil_Sph.h"
		#include "conga_assign_Dil_Sta.h"
		#include "conga_assign_Dil_Lin.h"
		#include "conga_assign_Dil_Pln.h"
		#include "conga_assign_Dil_Dll.h"
		#include "conga_assign_Dil_Dlp.h"
		#include "conga_assign_Dil_Vec.h"
		#include "conga_assign_Dil_Biv.h"
		#include "conga_assign_Dil_Afl.h"
		#include "conga_assign_Dil_Afp.h"
		#include "conga_assign_Mot_Ori.h"
		#include "conga_assign_Mot_Tnv.h"
		#include "conga_assign_Trv_Mnk.h"
		#include "conga_assign_Trv_Pss.h"
		#include "conga_assign_Trv_Pnt.h"
		#include "conga_assign_Trv_Par.h"
		#include "conga_assign_Trv_Cir.h"
		#include "conga_assign_Trv_Sph.h"
		#include "conga_assign_Trv_Drv.h"
		#include "conga_assign_Trv_Drb.h"
		#include "conga_assign_Trv_Vec.h"
		#include "conga_assign_Trv_Biv.h"
		#include "conga_assign_Mtd_Pss.h"
		#include "conga_assign_Ori_Par.h"
		#include "conga_assign_Ori_Cir.h"
		#include "conga_assign_Ori_Sta.h"
		#include "conga_assign_Inf_Par.h"
		#include "conga_assign_Inf_Cir.h"
		#include "conga_assign_Inf_Sph.h"
		#include "conga_assign_Mnk_Pnt.h"
		#include "conga_assign_Mnk_Par.h"
		#include "conga_assign_Mnk_Cir.h"
		#include "conga_assign_Mnk_Sph.h"
		#include "conga_assign_Mnk_Sta.h"
		#include "conga_assign_Mnk_Lin.h"
		#include "conga_assign_Mnk_Pln.h"
		#include "conga_assign_Mnk_Dll.h"
		#include "conga_assign_Mnk_Dlp.h"
		#include "conga_assign_Mnk_Vec.h"
		#include "conga_assign_Mnk_Biv.h"
		#include "conga_assign_Mnk_Aff.h"
		#include "conga_assign_Mnk_Afl.h"
		#include "conga_assign_Hyp_Pss.h"
		#include "conga_assign_Hyp_Pnt.h"
		#include "conga_assign_Hyp_Par.h"
		#include "conga_assign_Hyp_Cir.h"
		#include "conga_assign_Hyp_Sph.h"
		#include "conga_assign_Hyp_Sta.h"
		#include "conga_assign_Hyp_Vec.h"
		#include "conga_assign_Hyp_Biv.h"
		#include "conga_assign_Pss_Sta.h"
		#include "conga_assign_Pss_Aff.h"
		#include "conga_assign_Pss_Afl.h"
		#include "conga_assign_Pnt_Pnt.h"
		#include "conga_assign_Pnt_Par.h"
		#include "conga_assign_Pnt_Cir.h"
		#include "conga_assign_Pnt_Sph.h"
		#include "conga_assign_Pnt_Lin.h"
		#include "conga_assign_Pnt_Dll.h"
		#include "conga_assign_Pnt_Vec.h"
		#include "conga_assign_Pnt_Biv.h"
		#include "conga_assign_Pnt_Afl.h"
		#include "conga_assign_Par_Biv.h"
		#include "conga_assign_Cir_Biv.h"
		#include "conga_assign_Sph_Vec.h"
		#include "conga_assign_Sph_Biv.h"
		#include "conga_assign_Sph_Afl.h"
		#include "conga_assign_Sta_Tri.h"
		#include "conga_assign_Drv_Tnb.h"
		#include "conga_assign_Pln_Pln.h"
		#include "conga_assign_Pln_Dlp.h"
		#include "conga_assign_Pln_Biv.h"
		#include "conga_assign_Dlp_Biv.h"
		#include "conga_assign_Vec_Aff.h"
		#include "conga_assign_Biv_Aff.h"
		#include "conga_assign_Tri_Aff.h"
		#include "conga_assign_Tri_Afl.h"
		#include "conga_assign_Rot_Trv_Mnk.h"
		#include "conga_assign_Rot_Trv_Pss.h"
		#include "conga_assign_Rot_Mnk_Pnt.h"
		#include "conga_assign_Rot_Hyp_Pss.h"
		#include "conga_assign_Trv_Mnk_Vec.h"
		#include "conga_assign_Trv_Mnk_Biv.h"
		#include "conga_assign_Mnk_Pnt_Pnt.h"
		#include "conga_assign_Mnk_Pnt_Sph.h"
		#include "conga_assign_Mnk_Pnt_Lin.h"
		#include "conga_assign_Mnk_Pnt_Dll.h"
		#include "conga_assign_Mnk_Pnt_Afl.h"
		#include "conga_assign_Mnk_Sph_Afl.h"
		#include "conga_assign_Mnk_Vec_Aff.h"
		#include "conga_assign_Mnk_Biv_Aff.h"
		#include "conga_assign_Hyp_ip_Sph.h"
		#include "conga_assign_Biv_ip_Sph.h"
		#include "conga_assign_Muv.h"
	

	typedef double * (*conga_selfPtr)(double*, double*);

	double * conga_reverse_fn(int, double*, double*);
	double * conga_involute_fn(int, double*, double*);
	double * conga_conjugate_fn(int, double*, double*);

	conga_selfPtr conga_reverse[167] = {
				conga_reverse_Sca,
				conga_reverse_Ori,
				conga_reverse_Inf,
				conga_reverse_Mnk,
				conga_reverse_Hyp,
				conga_reverse_Pss,
				conga_reverse_Pnt,
				conga_reverse_Par,
				conga_reverse_Cir,
				conga_reverse_Sph,
				conga_reverse_Sta,
				conga_reverse_Drv,
				conga_reverse_Drb,
				conga_reverse_Drt,
				conga_reverse_Tnv,
				conga_reverse_Tnb,
				conga_reverse_Tnt,
				conga_reverse_Lin,
				conga_reverse_Pln,
				conga_reverse_Flp,
				conga_reverse_Dll,
				conga_reverse_Dlp,
				conga_reverse_Vec,
				conga_reverse_Biv,
				conga_reverse_Tri,
				conga_reverse_Aff,
				conga_reverse_Afl,
				conga_reverse_Afp,
				conga_reverse_Rot,
				conga_reverse_Trs,
				conga_reverse_Dil,
				conga_reverse_Mot,
				conga_reverse_Trv,
				conga_reverse_Mtd,
				conga_reverse_Rot_Dil,
				conga_reverse_Rot_Trv,
				conga_reverse_Trs_Dil,
				conga_reverse_Trs_Trv,
				conga_reverse_Dil_Trv,
				conga_reverse_Mot_Trv,
				conga_reverse_Rot_Ori,
				conga_reverse_Rot_Inf,
				conga_reverse_Rot_Mnk,
				conga_reverse_Rot_Hyp,
				conga_reverse_Rot_Pss,
				conga_reverse_Rot_Pnt,
				conga_reverse_Rot_Cir,
				conga_reverse_Rot_Sph,
				conga_reverse_Rot_Sta,
				conga_reverse_Rot_Drv,
				conga_reverse_Rot_Tnv,
				conga_reverse_Rot_Lin,
				conga_reverse_Rot_Pln,
				conga_reverse_Rot_Dlp,
				conga_reverse_Rot_Vec,
				conga_reverse_Rot_Aff,
				conga_reverse_Trs_Ori,
				conga_reverse_Trs_Hyp,
				conga_reverse_Trs_Pss,
				conga_reverse_Trs_Pnt,
				conga_reverse_Trs_Par,
				conga_reverse_Trs_Cir,
				conga_reverse_Trs_Sph,
				conga_reverse_Trs_Tnv,
				conga_reverse_Trs_Tnb,
				conga_reverse_Trs_Tnt,
				conga_reverse_Trs_Lin,
				conga_reverse_Trs_Pln,
				conga_reverse_Trs_Dll,
				conga_reverse_Trs_Dlp,
				conga_reverse_Trs_Tri,
				conga_reverse_Trs_Afp,
				conga_reverse_Dil_Pss,
				conga_reverse_Dil_Sph,
				conga_reverse_Dil_Sta,
				conga_reverse_Dil_Lin,
				conga_reverse_Dil_Pln,
				conga_reverse_Dil_Dll,
				conga_reverse_Dil_Dlp,
				conga_reverse_Dil_Vec,
				conga_reverse_Dil_Biv,
				conga_reverse_Dil_Afl,
				conga_reverse_Dil_Afp,
				conga_reverse_Mot_Ori,
				conga_reverse_Mot_Tnv,
				conga_reverse_Trv_Mnk,
				conga_reverse_Trv_Pss,
				conga_reverse_Trv_Pnt,
				conga_reverse_Trv_Par,
				conga_reverse_Trv_Cir,
				conga_reverse_Trv_Sph,
				conga_reverse_Trv_Drv,
				conga_reverse_Trv_Drb,
				conga_reverse_Trv_Vec,
				conga_reverse_Trv_Biv,
				conga_reverse_Mtd_Pss,
				conga_reverse_Ori_Par,
				conga_reverse_Ori_Cir,
				conga_reverse_Ori_Sta,
				conga_reverse_Inf_Par,
				conga_reverse_Inf_Cir,
				conga_reverse_Inf_Sph,
				conga_reverse_Mnk_Pnt,
				conga_reverse_Mnk_Par,
				conga_reverse_Mnk_Cir,
				conga_reverse_Mnk_Sph,
				conga_reverse_Mnk_Sta,
				conga_reverse_Mnk_Lin,
				conga_reverse_Mnk_Pln,
				conga_reverse_Mnk_Dll,
				conga_reverse_Mnk_Dlp,
				conga_reverse_Mnk_Vec,
				conga_reverse_Mnk_Biv,
				conga_reverse_Mnk_Aff,
				conga_reverse_Mnk_Afl,
				conga_reverse_Hyp_Pss,
				conga_reverse_Hyp_Pnt,
				conga_reverse_Hyp_Par,
				conga_reverse_Hyp_Cir,
				conga_reverse_Hyp_Sph,
				conga_reverse_Hyp_Sta,
				conga_reverse_Hyp_Vec,
				conga_reverse_Hyp_Biv,
				conga_reverse_Pss_Sta,
				conga_reverse_Pss_Aff,
				conga_reverse_Pss_Afl,
				conga_reverse_Pnt_Pnt,
				conga_reverse_Pnt_Par,
				conga_reverse_Pnt_Cir,
				conga_reverse_Pnt_Sph,
				conga_reverse_Pnt_Lin,
				conga_reverse_Pnt_Dll,
				conga_reverse_Pnt_Vec,
				conga_reverse_Pnt_Biv,
				conga_reverse_Pnt_Afl,
				conga_reverse_Par_Biv,
				conga_reverse_Cir_Biv,
				conga_reverse_Sph_Vec,
				conga_reverse_Sph_Biv,
				conga_reverse_Sph_Afl,
				conga_reverse_Sta_Tri,
				conga_reverse_Drv_Tnb,
				conga_reverse_Pln_Pln,
				conga_reverse_Pln_Dlp,
				conga_reverse_Pln_Biv,
				conga_reverse_Dlp_Biv,
				conga_reverse_Vec_Aff,
				conga_reverse_Biv_Aff,
				conga_reverse_Tri_Aff,
				conga_reverse_Tri_Afl,
				conga_reverse_Rot_Trv_Mnk,
				conga_reverse_Rot_Trv_Pss,
				conga_reverse_Rot_Mnk_Pnt,
				conga_reverse_Rot_Hyp_Pss,
				conga_reverse_Trv_Mnk_Vec,
				conga_reverse_Trv_Mnk_Biv,
				conga_reverse_Mnk_Pnt_Pnt,
				conga_reverse_Mnk_Pnt_Sph,
				conga_reverse_Mnk_Pnt_Lin,
				conga_reverse_Mnk_Pnt_Dll,
				conga_reverse_Mnk_Pnt_Afl,
				conga_reverse_Mnk_Sph_Afl,
				conga_reverse_Mnk_Vec_Aff,
				conga_reverse_Mnk_Biv_Aff,
				conga_reverse_Hyp_ip_Sph,
				conga_reverse_Biv_ip_Sph,
				conga_reverse_Muv,
		
	};


	conga_selfPtr conga_involute[167] = {
				conga_involute_Sca,
				conga_involute_Ori,
				conga_involute_Inf,
				conga_involute_Mnk,
				conga_involute_Hyp,
				conga_involute_Pss,
				conga_involute_Pnt,
				conga_involute_Par,
				conga_involute_Cir,
				conga_involute_Sph,
				conga_involute_Sta,
				conga_involute_Drv,
				conga_involute_Drb,
				conga_involute_Drt,
				conga_involute_Tnv,
				conga_involute_Tnb,
				conga_involute_Tnt,
				conga_involute_Lin,
				conga_involute_Pln,
				conga_involute_Flp,
				conga_involute_Dll,
				conga_involute_Dlp,
				conga_involute_Vec,
				conga_involute_Biv,
				conga_involute_Tri,
				conga_involute_Aff,
				conga_involute_Afl,
				conga_involute_Afp,
				conga_involute_Rot,
				conga_involute_Trs,
				conga_involute_Dil,
				conga_involute_Mot,
				conga_involute_Trv,
				conga_involute_Mtd,
				conga_involute_Rot_Dil,
				conga_involute_Rot_Trv,
				conga_involute_Trs_Dil,
				conga_involute_Trs_Trv,
				conga_involute_Dil_Trv,
				conga_involute_Mot_Trv,
				conga_involute_Rot_Ori,
				conga_involute_Rot_Inf,
				conga_involute_Rot_Mnk,
				conga_involute_Rot_Hyp,
				conga_involute_Rot_Pss,
				conga_involute_Rot_Pnt,
				conga_involute_Rot_Cir,
				conga_involute_Rot_Sph,
				conga_involute_Rot_Sta,
				conga_involute_Rot_Drv,
				conga_involute_Rot_Tnv,
				conga_involute_Rot_Lin,
				conga_involute_Rot_Pln,
				conga_involute_Rot_Dlp,
				conga_involute_Rot_Vec,
				conga_involute_Rot_Aff,
				conga_involute_Trs_Ori,
				conga_involute_Trs_Hyp,
				conga_involute_Trs_Pss,
				conga_involute_Trs_Pnt,
				conga_involute_Trs_Par,
				conga_involute_Trs_Cir,
				conga_involute_Trs_Sph,
				conga_involute_Trs_Tnv,
				conga_involute_Trs_Tnb,
				conga_involute_Trs_Tnt,
				conga_involute_Trs_Lin,
				conga_involute_Trs_Pln,
				conga_involute_Trs_Dll,
				conga_involute_Trs_Dlp,
				conga_involute_Trs_Tri,
				conga_involute_Trs_Afp,
				conga_involute_Dil_Pss,
				conga_involute_Dil_Sph,
				conga_involute_Dil_Sta,
				conga_involute_Dil_Lin,
				conga_involute_Dil_Pln,
				conga_involute_Dil_Dll,
				conga_involute_Dil_Dlp,
				conga_involute_Dil_Vec,
				conga_involute_Dil_Biv,
				conga_involute_Dil_Afl,
				conga_involute_Dil_Afp,
				conga_involute_Mot_Ori,
				conga_involute_Mot_Tnv,
				conga_involute_Trv_Mnk,
				conga_involute_Trv_Pss,
				conga_involute_Trv_Pnt,
				conga_involute_Trv_Par,
				conga_involute_Trv_Cir,
				conga_involute_Trv_Sph,
				conga_involute_Trv_Drv,
				conga_involute_Trv_Drb,
				conga_involute_Trv_Vec,
				conga_involute_Trv_Biv,
				conga_involute_Mtd_Pss,
				conga_involute_Ori_Par,
				conga_involute_Ori_Cir,
				conga_involute_Ori_Sta,
				conga_involute_Inf_Par,
				conga_involute_Inf_Cir,
				conga_involute_Inf_Sph,
				conga_involute_Mnk_Pnt,
				conga_involute_Mnk_Par,
				conga_involute_Mnk_Cir,
				conga_involute_Mnk_Sph,
				conga_involute_Mnk_Sta,
				conga_involute_Mnk_Lin,
				conga_involute_Mnk_Pln,
				conga_involute_Mnk_Dll,
				conga_involute_Mnk_Dlp,
				conga_involute_Mnk_Vec,
				conga_involute_Mnk_Biv,
				conga_involute_Mnk_Aff,
				conga_involute_Mnk_Afl,
				conga_involute_Hyp_Pss,
				conga_involute_Hyp_Pnt,
				conga_involute_Hyp_Par,
				conga_involute_Hyp_Cir,
				conga_involute_Hyp_Sph,
				conga_involute_Hyp_Sta,
				conga_involute_Hyp_Vec,
				conga_involute_Hyp_Biv,
				conga_involute_Pss_Sta,
				conga_involute_Pss_Aff,
				conga_involute_Pss_Afl,
				conga_involute_Pnt_Pnt,
				conga_involute_Pnt_Par,
				conga_involute_Pnt_Cir,
				conga_involute_Pnt_Sph,
				conga_involute_Pnt_Lin,
				conga_involute_Pnt_Dll,
				conga_involute_Pnt_Vec,
				conga_involute_Pnt_Biv,
				conga_involute_Pnt_Afl,
				conga_involute_Par_Biv,
				conga_involute_Cir_Biv,
				conga_involute_Sph_Vec,
				conga_involute_Sph_Biv,
				conga_involute_Sph_Afl,
				conga_involute_Sta_Tri,
				conga_involute_Drv_Tnb,
				conga_involute_Pln_Pln,
				conga_involute_Pln_Dlp,
				conga_involute_Pln_Biv,
				conga_involute_Dlp_Biv,
				conga_involute_Vec_Aff,
				conga_involute_Biv_Aff,
				conga_involute_Tri_Aff,
				conga_involute_Tri_Afl,
				conga_involute_Rot_Trv_Mnk,
				conga_involute_Rot_Trv_Pss,
				conga_involute_Rot_Mnk_Pnt,
				conga_involute_Rot_Hyp_Pss,
				conga_involute_Trv_Mnk_Vec,
				conga_involute_Trv_Mnk_Biv,
				conga_involute_Mnk_Pnt_Pnt,
				conga_involute_Mnk_Pnt_Sph,
				conga_involute_Mnk_Pnt_Lin,
				conga_involute_Mnk_Pnt_Dll,
				conga_involute_Mnk_Pnt_Afl,
				conga_involute_Mnk_Sph_Afl,
				conga_involute_Mnk_Vec_Aff,
				conga_involute_Mnk_Biv_Aff,
				conga_involute_Hyp_ip_Sph,
				conga_involute_Biv_ip_Sph,
				conga_involute_Muv,
		
	};

	conga_selfPtr conga_conjugate[167] = {
				conga_conjugate_Sca,
				conga_conjugate_Ori,
				conga_conjugate_Inf,
				conga_conjugate_Mnk,
				conga_conjugate_Hyp,
				conga_conjugate_Pss,
				conga_conjugate_Pnt,
				conga_conjugate_Par,
				conga_conjugate_Cir,
				conga_conjugate_Sph,
				conga_conjugate_Sta,
				conga_conjugate_Drv,
				conga_conjugate_Drb,
				conga_conjugate_Drt,
				conga_conjugate_Tnv,
				conga_conjugate_Tnb,
				conga_conjugate_Tnt,
				conga_conjugate_Lin,
				conga_conjugate_Pln,
				conga_conjugate_Flp,
				conga_conjugate_Dll,
				conga_conjugate_Dlp,
				conga_conjugate_Vec,
				conga_conjugate_Biv,
				conga_conjugate_Tri,
				conga_conjugate_Aff,
				conga_conjugate_Afl,
				conga_conjugate_Afp,
				conga_conjugate_Rot,
				conga_conjugate_Trs,
				conga_conjugate_Dil,
				conga_conjugate_Mot,
				conga_conjugate_Trv,
				conga_conjugate_Mtd,
				conga_conjugate_Rot_Dil,
				conga_conjugate_Rot_Trv,
				conga_conjugate_Trs_Dil,
				conga_conjugate_Trs_Trv,
				conga_conjugate_Dil_Trv,
				conga_conjugate_Mot_Trv,
				conga_conjugate_Rot_Ori,
				conga_conjugate_Rot_Inf,
				conga_conjugate_Rot_Mnk,
				conga_conjugate_Rot_Hyp,
				conga_conjugate_Rot_Pss,
				conga_conjugate_Rot_Pnt,
				conga_conjugate_Rot_Cir,
				conga_conjugate_Rot_Sph,
				conga_conjugate_Rot_Sta,
				conga_conjugate_Rot_Drv,
				conga_conjugate_Rot_Tnv,
				conga_conjugate_Rot_Lin,
				conga_conjugate_Rot_Pln,
				conga_conjugate_Rot_Dlp,
				conga_conjugate_Rot_Vec,
				conga_conjugate_Rot_Aff,
				conga_conjugate_Trs_Ori,
				conga_conjugate_Trs_Hyp,
				conga_conjugate_Trs_Pss,
				conga_conjugate_Trs_Pnt,
				conga_conjugate_Trs_Par,
				conga_conjugate_Trs_Cir,
				conga_conjugate_Trs_Sph,
				conga_conjugate_Trs_Tnv,
				conga_conjugate_Trs_Tnb,
				conga_conjugate_Trs_Tnt,
				conga_conjugate_Trs_Lin,
				conga_conjugate_Trs_Pln,
				conga_conjugate_Trs_Dll,
				conga_conjugate_Trs_Dlp,
				conga_conjugate_Trs_Tri,
				conga_conjugate_Trs_Afp,
				conga_conjugate_Dil_Pss,
				conga_conjugate_Dil_Sph,
				conga_conjugate_Dil_Sta,
				conga_conjugate_Dil_Lin,
				conga_conjugate_Dil_Pln,
				conga_conjugate_Dil_Dll,
				conga_conjugate_Dil_Dlp,
				conga_conjugate_Dil_Vec,
				conga_conjugate_Dil_Biv,
				conga_conjugate_Dil_Afl,
				conga_conjugate_Dil_Afp,
				conga_conjugate_Mot_Ori,
				conga_conjugate_Mot_Tnv,
				conga_conjugate_Trv_Mnk,
				conga_conjugate_Trv_Pss,
				conga_conjugate_Trv_Pnt,
				conga_conjugate_Trv_Par,
				conga_conjugate_Trv_Cir,
				conga_conjugate_Trv_Sph,
				conga_conjugate_Trv_Drv,
				conga_conjugate_Trv_Drb,
				conga_conjugate_Trv_Vec,
				conga_conjugate_Trv_Biv,
				conga_conjugate_Mtd_Pss,
				conga_conjugate_Ori_Par,
				conga_conjugate_Ori_Cir,
				conga_conjugate_Ori_Sta,
				conga_conjugate_Inf_Par,
				conga_conjugate_Inf_Cir,
				conga_conjugate_Inf_Sph,
				conga_conjugate_Mnk_Pnt,
				conga_conjugate_Mnk_Par,
				conga_conjugate_Mnk_Cir,
				conga_conjugate_Mnk_Sph,
				conga_conjugate_Mnk_Sta,
				conga_conjugate_Mnk_Lin,
				conga_conjugate_Mnk_Pln,
				conga_conjugate_Mnk_Dll,
				conga_conjugate_Mnk_Dlp,
				conga_conjugate_Mnk_Vec,
				conga_conjugate_Mnk_Biv,
				conga_conjugate_Mnk_Aff,
				conga_conjugate_Mnk_Afl,
				conga_conjugate_Hyp_Pss,
				conga_conjugate_Hyp_Pnt,
				conga_conjugate_Hyp_Par,
				conga_conjugate_Hyp_Cir,
				conga_conjugate_Hyp_Sph,
				conga_conjugate_Hyp_Sta,
				conga_conjugate_Hyp_Vec,
				conga_conjugate_Hyp_Biv,
				conga_conjugate_Pss_Sta,
				conga_conjugate_Pss_Aff,
				conga_conjugate_Pss_Afl,
				conga_conjugate_Pnt_Pnt,
				conga_conjugate_Pnt_Par,
				conga_conjugate_Pnt_Cir,
				conga_conjugate_Pnt_Sph,
				conga_conjugate_Pnt_Lin,
				conga_conjugate_Pnt_Dll,
				conga_conjugate_Pnt_Vec,
				conga_conjugate_Pnt_Biv,
				conga_conjugate_Pnt_Afl,
				conga_conjugate_Par_Biv,
				conga_conjugate_Cir_Biv,
				conga_conjugate_Sph_Vec,
				conga_conjugate_Sph_Biv,
				conga_conjugate_Sph_Afl,
				conga_conjugate_Sta_Tri,
				conga_conjugate_Drv_Tnb,
				conga_conjugate_Pln_Pln,
				conga_conjugate_Pln_Dlp,
				conga_conjugate_Pln_Biv,
				conga_conjugate_Dlp_Biv,
				conga_conjugate_Vec_Aff,
				conga_conjugate_Biv_Aff,
				conga_conjugate_Tri_Aff,
				conga_conjugate_Tri_Afl,
				conga_conjugate_Rot_Trv_Mnk,
				conga_conjugate_Rot_Trv_Pss,
				conga_conjugate_Rot_Mnk_Pnt,
				conga_conjugate_Rot_Hyp_Pss,
				conga_conjugate_Trv_Mnk_Vec,
				conga_conjugate_Trv_Mnk_Biv,
				conga_conjugate_Mnk_Pnt_Pnt,
				conga_conjugate_Mnk_Pnt_Sph,
				conga_conjugate_Mnk_Pnt_Lin,
				conga_conjugate_Mnk_Pnt_Dll,
				conga_conjugate_Mnk_Pnt_Afl,
				conga_conjugate_Mnk_Sph_Afl,
				conga_conjugate_Mnk_Vec_Aff,
				conga_conjugate_Mnk_Biv_Aff,
				conga_conjugate_Hyp_ip_Sph,
				conga_conjugate_Biv_ip_Sph,
				conga_conjugate_Muv,
		
	};
	

	