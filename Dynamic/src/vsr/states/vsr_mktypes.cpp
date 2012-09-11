	#include "vsr_mktypes.h"
	
	namespace vsr {

		State Mk::sca (const State& s) { return Sca(s); }
		State Mk::ori (const State& s) { return Ori(s); }
		State Mk::inf (const State& s) { return Inf(s); }
		State Mk::mnk (const State& s) { return Mnk(s); }
		State Mk::hyp (const State& s) { return Hyp(s); }
		State Mk::pss (const State& s) { return Pss(s); }
		State Mk::pnt (const State& s) { return Pnt(s); }
		State Mk::par (const State& s) { return Par(s); }
		State Mk::cir (const State& s) { return Cir(s); }
		State Mk::sph (const State& s) { return Sph(s); }
		State Mk::sta (const State& s) { return Sta(s); }
		State Mk::drv (const State& s) { return Drv(s); }
		State Mk::drb (const State& s) { return Drb(s); }
		State Mk::drt (const State& s) { return Drt(s); }
		State Mk::tnv (const State& s) { return Tnv(s); }
		State Mk::tnb (const State& s) { return Tnb(s); }
		State Mk::tnt (const State& s) { return Tnt(s); }
		State Mk::lin (const State& s) { return Lin(s); }
		State Mk::pln (const State& s) { return Pln(s); }
		State Mk::flp (const State& s) { return Flp(s); }
		State Mk::dll (const State& s) { return Dll(s); }
		State Mk::dlp (const State& s) { return Dlp(s); }
		State Mk::vec (const State& s) { return Vec(s); }
		State Mk::biv (const State& s) { return Biv(s); }
		State Mk::tri (const State& s) { return Tri(s); }
		State Mk::aff (const State& s) { return Aff(s); }
		State Mk::afl (const State& s) { return Afl(s); }
		State Mk::afp (const State& s) { return Afp(s); }
		State Mk::rot (const State& s) { return Rot(s); }
		State Mk::trs (const State& s) { return Trs(s); }
		State Mk::dil (const State& s) { return Dil(s); }
		State Mk::mot (const State& s) { return Mot(s); }
		State Mk::trv (const State& s) { return Trv(s); }
		State Mk::mtd (const State& s) { return Mtd(s); }
	
	


		//constructor ptr functions to Mk::...
		CXR Mk::cxr[34] = {
		
					Mk::sca,
					Mk::ori,
					Mk::inf,
					Mk::mnk,
					Mk::hyp,
					Mk::pss,
					Mk::pnt,
					Mk::par,
					Mk::cir,
					Mk::sph,
					Mk::sta,
					Mk::drv,
					Mk::drb,
					Mk::drt,
					Mk::tnv,
					Mk::tnb,
					Mk::tnt,
					Mk::lin,
					Mk::pln,
					Mk::flp,
					Mk::dll,
					Mk::dlp,
					Mk::vec,
					Mk::biv,
					Mk::tri,
					Mk::aff,
					Mk::afl,
					Mk::afp,
					Mk::rot,
					Mk::trs,
					Mk::dil,
					Mk::mot,
					Mk::trv,
					Mk::mtd,
			
	
		};
	
		IdxMap Mk::type;
		
		char Mk::dummy = (Mk::init(), 0);
		
		void Mk::init(){
					Mk::type["Sca"] = 0;
					Mk::type["Ori"] = 1;
					Mk::type["Inf"] = 2;
					Mk::type["Mnk"] = 3;
					Mk::type["Hyp"] = 4;
					Mk::type["Pss"] = 5;
					Mk::type["Pnt"] = 6;
					Mk::type["Par"] = 7;
					Mk::type["Cir"] = 8;
					Mk::type["Sph"] = 9;
					Mk::type["Sta"] = 10;
					Mk::type["Drv"] = 11;
					Mk::type["Drb"] = 12;
					Mk::type["Drt"] = 13;
					Mk::type["Tnv"] = 14;
					Mk::type["Tnb"] = 15;
					Mk::type["Tnt"] = 16;
					Mk::type["Lin"] = 17;
					Mk::type["Pln"] = 18;
					Mk::type["Flp"] = 19;
					Mk::type["Dll"] = 20;
					Mk::type["Dlp"] = 21;
					Mk::type["Vec"] = 22;
					Mk::type["Biv"] = 23;
					Mk::type["Tri"] = 24;
					Mk::type["Aff"] = 25;
					Mk::type["Afl"] = 26;
					Mk::type["Afp"] = 27;
					Mk::type["Rot"] = 28;
					Mk::type["Trs"] = 29;
					Mk::type["Dil"] = 30;
					Mk::type["Mot"] = 31;
					Mk::type["Trv"] = 32;
					Mk::type["Mtd"] = 33;
					Mk::type["Rot_Dil"] = 34;
					Mk::type["Rot_Trv"] = 35;
					Mk::type["Trs_Dil"] = 36;
					Mk::type["Trs_Trv"] = 37;
					Mk::type["Dil_Trv"] = 38;
					Mk::type["Mot_Trv"] = 39;
					Mk::type["Rot_Ori"] = 40;
					Mk::type["Rot_Inf"] = 41;
					Mk::type["Rot_Mnk"] = 42;
					Mk::type["Rot_Hyp"] = 43;
					Mk::type["Rot_Pss"] = 44;
					Mk::type["Rot_Pnt"] = 45;
					Mk::type["Rot_Cir"] = 46;
					Mk::type["Rot_Sph"] = 47;
					Mk::type["Rot_Sta"] = 48;
					Mk::type["Rot_Drv"] = 49;
					Mk::type["Rot_Tnv"] = 50;
					Mk::type["Rot_Lin"] = 51;
					Mk::type["Rot_Pln"] = 52;
					Mk::type["Rot_Dlp"] = 53;
					Mk::type["Rot_Vec"] = 54;
					Mk::type["Rot_Aff"] = 55;
					Mk::type["Trs_Ori"] = 56;
					Mk::type["Trs_Hyp"] = 57;
					Mk::type["Trs_Pss"] = 58;
					Mk::type["Trs_Pnt"] = 59;
					Mk::type["Trs_Par"] = 60;
					Mk::type["Trs_Cir"] = 61;
					Mk::type["Trs_Sph"] = 62;
					Mk::type["Trs_Tnv"] = 63;
					Mk::type["Trs_Tnb"] = 64;
					Mk::type["Trs_Tnt"] = 65;
					Mk::type["Trs_Lin"] = 66;
					Mk::type["Trs_Pln"] = 67;
					Mk::type["Trs_Dll"] = 68;
					Mk::type["Trs_Dlp"] = 69;
					Mk::type["Trs_Tri"] = 70;
					Mk::type["Trs_Afp"] = 71;
					Mk::type["Dil_Pss"] = 72;
					Mk::type["Dil_Sph"] = 73;
					Mk::type["Dil_Sta"] = 74;
					Mk::type["Dil_Lin"] = 75;
					Mk::type["Dil_Pln"] = 76;
					Mk::type["Dil_Dll"] = 77;
					Mk::type["Dil_Dlp"] = 78;
					Mk::type["Dil_Vec"] = 79;
					Mk::type["Dil_Biv"] = 80;
					Mk::type["Dil_Afl"] = 81;
					Mk::type["Dil_Afp"] = 82;
					Mk::type["Mot_Ori"] = 83;
					Mk::type["Mot_Tnv"] = 84;
					Mk::type["Trv_Mnk"] = 85;
					Mk::type["Trv_Pss"] = 86;
					Mk::type["Trv_Pnt"] = 87;
					Mk::type["Trv_Par"] = 88;
					Mk::type["Trv_Cir"] = 89;
					Mk::type["Trv_Sph"] = 90;
					Mk::type["Trv_Drv"] = 91;
					Mk::type["Trv_Drb"] = 92;
					Mk::type["Trv_Vec"] = 93;
					Mk::type["Trv_Biv"] = 94;
					Mk::type["Mtd_Pss"] = 95;
					Mk::type["Ori_Par"] = 96;
					Mk::type["Ori_Cir"] = 97;
					Mk::type["Ori_Sta"] = 98;
					Mk::type["Inf_Par"] = 99;
					Mk::type["Inf_Cir"] = 100;
					Mk::type["Inf_Sph"] = 101;
					Mk::type["Mnk_Pnt"] = 102;
					Mk::type["Mnk_Par"] = 103;
					Mk::type["Mnk_Cir"] = 104;
					Mk::type["Mnk_Sph"] = 105;
					Mk::type["Mnk_Sta"] = 106;
					Mk::type["Mnk_Lin"] = 107;
					Mk::type["Mnk_Pln"] = 108;
					Mk::type["Mnk_Dll"] = 109;
					Mk::type["Mnk_Dlp"] = 110;
					Mk::type["Mnk_Vec"] = 111;
					Mk::type["Mnk_Biv"] = 112;
					Mk::type["Mnk_Aff"] = 113;
					Mk::type["Mnk_Afl"] = 114;
					Mk::type["Hyp_Pss"] = 115;
					Mk::type["Hyp_Pnt"] = 116;
					Mk::type["Hyp_Par"] = 117;
					Mk::type["Hyp_Cir"] = 118;
					Mk::type["Hyp_Sph"] = 119;
					Mk::type["Hyp_Sta"] = 120;
					Mk::type["Hyp_Vec"] = 121;
					Mk::type["Hyp_Biv"] = 122;
					Mk::type["Pss_Sta"] = 123;
					Mk::type["Pss_Aff"] = 124;
					Mk::type["Pss_Afl"] = 125;
					Mk::type["Pnt_Pnt"] = 126;
					Mk::type["Pnt_Par"] = 127;
					Mk::type["Pnt_Cir"] = 128;
					Mk::type["Pnt_Sph"] = 129;
					Mk::type["Pnt_Lin"] = 130;
					Mk::type["Pnt_Dll"] = 131;
					Mk::type["Pnt_Vec"] = 132;
					Mk::type["Pnt_Biv"] = 133;
					Mk::type["Pnt_Afl"] = 134;
					Mk::type["Par_Biv"] = 135;
					Mk::type["Cir_Biv"] = 136;
					Mk::type["Sph_Vec"] = 137;
					Mk::type["Sph_Biv"] = 138;
					Mk::type["Sph_Afl"] = 139;
					Mk::type["Sta_Tri"] = 140;
					Mk::type["Drv_Tnb"] = 141;
					Mk::type["Pln_Pln"] = 142;
					Mk::type["Pln_Dlp"] = 143;
					Mk::type["Pln_Biv"] = 144;
					Mk::type["Dlp_Biv"] = 145;
					Mk::type["Vec_Aff"] = 146;
					Mk::type["Biv_Aff"] = 147;
					Mk::type["Tri_Aff"] = 148;
					Mk::type["Tri_Afl"] = 149;
					Mk::type["Rot_Trv_Mnk"] = 150;
					Mk::type["Rot_Trv_Pss"] = 151;
					Mk::type["Rot_Mnk_Pnt"] = 152;
					Mk::type["Rot_Hyp_Pss"] = 153;
					Mk::type["Trv_Mnk_Vec"] = 154;
					Mk::type["Trv_Mnk_Biv"] = 155;
					Mk::type["Mnk_Pnt_Pnt"] = 156;
					Mk::type["Mnk_Pnt_Sph"] = 157;
					Mk::type["Mnk_Pnt_Lin"] = 158;
					Mk::type["Mnk_Pnt_Dll"] = 159;
					Mk::type["Mnk_Pnt_Afl"] = 160;
					Mk::type["Mnk_Sph_Afl"] = 161;
					Mk::type["Mnk_Vec_Aff"] = 162;
					Mk::type["Mnk_Biv_Aff"] = 163;
					Mk::type["Hyp_ip_Sph"] = 164;
					Mk::type["Biv_ip_Sph"] = 165;
					Mk::type["Muv"] = 166;
			
		}

	} //con::
	
	