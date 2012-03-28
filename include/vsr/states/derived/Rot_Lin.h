	

		#ifndef Rot_Lin_h_included
	#define Rot_Lin_h_included
	#include "State.h"
	using namespace std;

	namespace vsr {

		class Sca;
		class Ori;
		class Inf;
		class Mnk;
		class Hyp;
		class Pss;
		class Pnt;
		class Par;
		class Cir;
		class Sph;
		class Sta;
		class Drv;
		class Drb;
		class Drt;
		class Tnv;
		class Tnb;
		class Tnt;
		class Lin;
		class Pln;
		class Flp;
		class Dll;
		class Dlp;
		class Vec;
		class Biv;
		class Tri;
		class Aff;
		class Afl;
		class Afp;
		class Rot;
		class Trs;
		class Dil;
		class Mot;
		class Trv;
		class Mtd;
		class Rot_Dil;
		class Rot_Trv;
		class Trs_Dil;
		class Trs_Trv;
		class Dil_Trv;
		class Mot_Trv;
		class Rot_Ori;
		class Rot_Inf;
		class Rot_Mnk;
		class Rot_Hyp;
		class Rot_Pss;
		class Rot_Pnt;
		class Rot_Cir;
		class Rot_Sph;
		class Rot_Sta;
		class Rot_Drv;
		class Rot_Tnv;
		class Rot_Lin;
		class Rot_Pln;
		class Rot_Dlp;
		class Rot_Vec;
		class Rot_Aff;
		class Trs_Ori;
		class Trs_Hyp;
		class Trs_Pss;
		class Trs_Pnt;
		class Trs_Par;
		class Trs_Cir;
		class Trs_Sph;
		class Trs_Tnv;
		class Trs_Tnb;
		class Trs_Tnt;
		class Trs_Lin;
		class Trs_Pln;
		class Trs_Dll;
		class Trs_Dlp;
		class Trs_Tri;
		class Trs_Afp;
		class Dil_Pss;
		class Dil_Sph;
		class Dil_Sta;
		class Dil_Lin;
		class Dil_Pln;
		class Dil_Dll;
		class Dil_Dlp;
		class Dil_Vec;
		class Dil_Biv;
		class Dil_Afl;
		class Dil_Afp;
		class Mot_Ori;
		class Mot_Tnv;
		class Trv_Mnk;
		class Trv_Pss;
		class Trv_Pnt;
		class Trv_Par;
		class Trv_Cir;
		class Trv_Sph;
		class Trv_Drv;
		class Trv_Drb;
		class Trv_Vec;
		class Trv_Biv;
		class Mtd_Pss;
		class Ori_Par;
		class Ori_Cir;
		class Ori_Sta;
		class Inf_Par;
		class Inf_Cir;
		class Inf_Sph;
		class Mnk_Pnt;
		class Mnk_Par;
		class Mnk_Cir;
		class Mnk_Sph;
		class Mnk_Sta;
		class Mnk_Lin;
		class Mnk_Pln;
		class Mnk_Dll;
		class Mnk_Dlp;
		class Mnk_Vec;
		class Mnk_Biv;
		class Mnk_Aff;
		class Mnk_Afl;
		class Hyp_Pss;
		class Hyp_Pnt;
		class Hyp_Par;
		class Hyp_Cir;
		class Hyp_Sph;
		class Hyp_Sta;
		class Hyp_Vec;
		class Hyp_Biv;
		class Pss_Sta;
		class Pss_Aff;
		class Pss_Afl;
		class Pnt_Pnt;
		class Pnt_Par;
		class Pnt_Cir;
		class Pnt_Sph;
		class Pnt_Lin;
		class Pnt_Dll;
		class Pnt_Vec;
		class Pnt_Biv;
		class Pnt_Afl;
		class Par_Biv;
		class Cir_Biv;
		class Sph_Vec;
		class Sph_Biv;
		class Sph_Afl;
		class Sta_Tri;
		class Drv_Tnb;
		class Pln_Pln;
		class Pln_Dlp;
		class Pln_Biv;
		class Dlp_Biv;
		class Vec_Aff;
		class Biv_Aff;
		class Tri_Aff;
		class Tri_Afl;
		class Rot_Trv_Mnk;
		class Rot_Trv_Pss;
		class Rot_Mnk_Pnt;
		class Rot_Hyp_Pss;
		class Trv_Mnk_Vec;
		class Trv_Mnk_Biv;
		class Mnk_Pnt_Pnt;
		class Mnk_Pnt_Sph;
		class Mnk_Pnt_Lin;
		class Mnk_Pnt_Dll;
		class Mnk_Pnt_Afl;
		class Mnk_Sph_Afl;
		class Mnk_Vec_Aff;
		class Mnk_Biv_Aff;
		class Hyp_ip_Sph;
		class Biv_ip_Sph;
		class Muv;
	

	class Rot_Lin : public State {
		
		static Assign assign;
		static bool bound;	
		
	
		public:
		
			static void Bind();	
						
			Rot_Lin (double v1 = 0,double v2 = 0,double v3 = 0,double v4 = 0,double v5 = 0,double v6 = 0,double v7 = 0,double v8 = 0) : State(8, 51) {
				mW[0] =v1;mW[1] =v2;mW[2] =v3;mW[3] =v4;mW[4] =v5;mW[5] =v6;mW[6] =v7;mW[7] =v8;				
			}		
		
			Rot_Lin (const State& s) : State(8, 51) {
				assign.ptr.func(s.idx(), w(), s.w() );			
			}
		
			Rot_Lin& operator = (const State& s) {
				//mW
				assign.ptr.func(s.idx(), w(), s.w() );
				return *this;						
			}

			Rot_Lin& set(double v1 = 0,double v2 = 0,double v3 = 0,double v4 = 0,double v5 = 0,double v6 = 0,double v7 = 0,double v8 = 0) {
				mW[0] =v1;mW[1] =v2;mW[2] =v3;mW[3] =v4;mW[4] =v5;mW[5] =v6;mW[6] =v7;mW[7] =v8;
				return *this;
			}

		
			
						
	};
	} // con ::

	#endif

	
	