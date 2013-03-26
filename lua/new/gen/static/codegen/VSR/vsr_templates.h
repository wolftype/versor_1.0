	#ifndef DEST_H_INCLUDED
	#define DEST_H_INCLUDED
	
	#include <string>
	
	namespace vsr{
		#include <string>
	using std::string;
	
	enum {
		 MUV = 0,
		 ROT = 1, 
		 MOT = 2, 
		 DIL = 3, 
		 TRV = 4, 
		 MTD = 5, 
		 TRS = 6, 
		 RTC = 7, 
		 MTT = 8, 
		 RTT = 9, 
		 RTD = 10, 
		 TVD = 11, 
		 TSD = 12, 
		 TRT = 13, 
		 RVD = 14, 
		 TST = 15, 
		 TVT = 16, 
		 BST = 17, 
		 SCA = 18, 
		 ORI = 19, 
		 INF = 20, 
		 MNK = 21, 
		 HYP = 22, 
		 PSS = 23, 
		 PNT = 24, 
		 PAR = 25, 
		 CIR = 26, 
		 SPH = 27, 
		 STA = 28, 
		 DRV = 29, 
		 DRB = 30, 
		 DRT = 31, 
		 TNV = 32, 
		 TNB = 33, 
		 TNT = 34, 
		 LIN = 35, 
		 PLN = 36, 
		 FLP = 37, 
		 DFP = 38, 
		 DLL = 39, 
		 DLP = 40, 
		 VEC = 41, 
		 BIV = 42, 
		 TRI = 43, 
		 GLD = 44, 
		 ROT_ORI = 45, 
		 ROT_INF = 46, 
		 ROT_MNK = 47, 
		 ROT_HYP = 48, 
		 ROT_PSS = 49, 
		 ROT_PNT = 50, 
		 ROT_SPH = 51, 
		 ROT_STA = 52, 
		 ROT_DRV = 53, 
		 ROT_TNV = 54, 
		 ROT_LIN = 55, 
		 ROT_PLN = 56, 
		 ROT_DFP = 57, 
		 ROT_VEC = 58, 
		 MOT_ORI = 59, 
		 DIL_PSS = 60, 
		 DIL_PNT = 61, 
		 DIL_CIR = 62, 
		 DIL_SPH = 63, 
		 DIL_STA = 64, 
		 DIL_LIN = 65, 
		 DIL_PLN = 66, 
		 DIL_DFP = 67, 
		 DIL_DLL = 68, 
		 DIL_DLP = 69, 
		 DIL_VEC = 70, 
		 DIL_BIV = 71, 
		 DIL_GLD = 72, 
		 TRV_MNK = 73, 
		 TRV_PSS = 74, 
		 TRV_PNT = 75, 
		 TRV_CIR = 76, 
		 TRV_SPH = 77, 
		 TRV_DRV = 78, 
		 TRV_DRB = 79, 
		 TRV_VEC = 80, 
		 TRV_BIV = 81, 
		 TRV_TRI = 82, 
		 MTD_PSS = 83, 
		 TRS_ORI = 84, 
		 TRS_PSS = 85, 
		 TRS_PNT = 86, 
		 TRS_CIR = 87, 
		 TRS_SPH = 88, 
		 TRS_TNV = 89, 
		 TRS_TNB = 90, 
		 TRS_TNT = 91, 
		 TRS_LIN = 92, 
		 TRS_PLN = 93, 
		 TRS_DLL = 94, 
		 RTT_MNK = 95, 
		 RTT_PSS = 96, 
		 RTT_VEC = 97, 
		 RTD_PSS = 98, 
		 TVD_PSS = 99, 
		 TVD_VEC = 100, 
		 TVD_BIV = 101, 
		 TSD_PLN = 102, 
		 TRT_HYP = 103, 
		 BST_MNK = 104, 
		 BST_PSS = 105, 
		 BST_PNT = 106, 
		 BST_SPH = 107, 
		 BST_BIV = 108, 
		 BST_TRI = 109, 
		 ORI_ORI = 110, 
		 ORI_STA = 111, 
		 ORI_LIN = 112, 
		 MNK_PNT = 113, 
		 MNK_PAR = 114, 
		 MNK_CIR = 115, 
		 MNK_SPH = 116, 
		 MNK_STA = 117, 
		 MNK_LIN = 118, 
		 MNK_PLN = 119, 
		 MNK_DLL = 120, 
		 MNK_DLP = 121, 
		 MNK_VEC = 122, 
		 MNK_BIV = 123, 
		 HYP_PSS = 124, 
		 HYP_PNT = 125, 
		 HYP_CIR = 126, 
		 HYP_SPH = 127, 
		 HYP_STA = 128, 
		 HYP_VEC = 129, 
		 HYP_BIV = 130, 
		 PSS_STA = 131, 
		 PNT_LIN = 132, 
		 PNT_DLL = 133, 
		 PNT_VEC = 134, 
		 PNT_BIV = 135, 
		 CIR_BIV = 136, 
		 SPH_VEC = 137, 
		 SPH_BIV = 138, 
		 STA_TRI = 139, 
		 PLN_PLN = 140, 
		 PLN_DLP = 141, 
		 PLN_BIV = 142, 
		 DLP_BIV = 143, 
		 ROT_MNK_PNT = 144, 
		 ROT_HYP_PSS = 145, 
		 TRV_MNK_VEC = 146, 
		 TRV_MNK_BIV = 147, 
		 MNK_PNT_LIN = 148, 
		 MNK_PNT_DLL = 149, 
		 ORI_IP_PAR = 150, 
		 ORI_IP_CIR = 151, 
		 HYP_IP_SPH = 152, 
		 BIV_IP_SPH = 153, 
		 GLD_IP_TNB = 154, 
		 GLD_IP_TNT = 155, 
		 ORI_OP_PAR = 156, 
		 ORI_OP_CIR = 157, 
		 ORI_OP_GLD = 158, 
		 TNV_OP_GLD = 159, 
		 MNK_ORI_IP_PAR = 160, 
		 MNK_ORI_IP_CIR = 161, 
		 MNK_HYP_IP_SPH = 162, 
		 MNK_BIV_IP_SPH = 163, 
		 MNK_ORI_OP_PAR = 164, 
		 MNK_ORI_OP_CIR = 165, 
		 PNT_ORI_IP_CIR = 166, 
		 PNT_ORI_OP_PAR = 167, 
		 PNT_MNK_ORI_IP_CIR = 168, 
		 PNT_MNK_ORI_OP_PAR = 169, 
		 VEC_HYP_IP_SPH = 170, 
		 VEC_BIV_IP_SPH = 171, 
		 VEC_MNK_HYP_IP_SPH = 172, 
		 VEC_MNK_BIV_IP_SPH = 173 
		
	};
	
	template<int A> struct Idx{ static const int Size; static string name(); };
	
	template<> struct Idx<0>{ static const int Size = 0; inline static string name() { return "undefined"; } };
	
	template<> struct Idx<ROT>{ static const int Size = 4; inline static string name() { return "Rot"; } };
	
	template<> struct Idx<MOT>{ static const int Size = 8; inline static string name() { return "Mot"; } };
	
	template<> struct Idx<DIL>{ static const int Size = 2; inline static string name() { return "Dil"; } };
	
	template<> struct Idx<TRV>{ static const int Size = 4; inline static string name() { return "Trv"; } };
	
	template<> struct Idx<MTD>{ static const int Size = 12; inline static string name() { return "Mtd"; } };
	
	template<> struct Idx<TRS>{ static const int Size = 4; inline static string name() { return "Trs"; } };
	
	template<> struct Idx<RTC>{ static const int Size = 16; inline static string name() { return "Rtc"; } };
	
	template<> struct Idx<MTT>{ static const int Size = 16; inline static string name() { return "Mtt"; } };
	
	template<> struct Idx<RTT>{ static const int Size = 8; inline static string name() { return "Rtt"; } };
	
	template<> struct Idx<RTD>{ static const int Size = 8; inline static string name() { return "Rtd"; } };
	
	template<> struct Idx<TVD>{ static const int Size = 5; inline static string name() { return "Tvd"; } };
	
	template<> struct Idx<TSD>{ static const int Size = 5; inline static string name() { return "Tsd"; } };
	
	template<> struct Idx<TRT>{ static const int Size = 14; inline static string name() { return "Trt"; } };
	
	template<> struct Idx<RVD>{ static const int Size = 12; inline static string name() { return "Rvd"; } };
	
	template<> struct Idx<TST>{ static const int Size = 15; inline static string name() { return "Tst"; } };
	
	template<> struct Idx<TVT>{ static const int Size = 15; inline static string name() { return "Tvt"; } };
	
	template<> struct Idx<BST>{ static const int Size = 11; inline static string name() { return "Bst"; } };
	
	template<> struct Idx<SCA>{ static const int Size = 1; inline static string name() { return "Sca"; } };
	
	template<> struct Idx<ORI>{ static const int Size = 1; inline static string name() { return "Ori"; } };
	
	template<> struct Idx<INF>{ static const int Size = 1; inline static string name() { return "Inf"; } };
	
	template<> struct Idx<MNK>{ static const int Size = 1; inline static string name() { return "Mnk"; } };
	
	template<> struct Idx<HYP>{ static const int Size = 2; inline static string name() { return "Hyp"; } };
	
	template<> struct Idx<PSS>{ static const int Size = 1; inline static string name() { return "Pss"; } };
	
	template<> struct Idx<PNT>{ static const int Size = 5; inline static string name() { return "Pnt"; } };
	
	template<> struct Idx<PAR>{ static const int Size = 10; inline static string name() { return "Par"; } };
	
	template<> struct Idx<CIR>{ static const int Size = 10; inline static string name() { return "Cir"; } };
	
	template<> struct Idx<SPH>{ static const int Size = 5; inline static string name() { return "Sph"; } };
	
	template<> struct Idx<STA>{ static const int Size = 9; inline static string name() { return "Sta"; } };
	
	template<> struct Idx<DRV>{ static const int Size = 3; inline static string name() { return "Drv"; } };
	
	template<> struct Idx<DRB>{ static const int Size = 3; inline static string name() { return "Drb"; } };
	
	template<> struct Idx<DRT>{ static const int Size = 1; inline static string name() { return "Drt"; } };
	
	template<> struct Idx<TNV>{ static const int Size = 3; inline static string name() { return "Tnv"; } };
	
	template<> struct Idx<TNB>{ static const int Size = 3; inline static string name() { return "Tnb"; } };
	
	template<> struct Idx<TNT>{ static const int Size = 1; inline static string name() { return "Tnt"; } };
	
	template<> struct Idx<LIN>{ static const int Size = 6; inline static string name() { return "Lin"; } };
	
	template<> struct Idx<PLN>{ static const int Size = 4; inline static string name() { return "Pln"; } };
	
	template<> struct Idx<FLP>{ static const int Size = 4; inline static string name() { return "Flp"; } };
	
	template<> struct Idx<DFP>{ static const int Size = 4; inline static string name() { return "Dfp"; } };
	
	template<> struct Idx<DLL>{ static const int Size = 6; inline static string name() { return "Dll"; } };
	
	template<> struct Idx<DLP>{ static const int Size = 4; inline static string name() { return "Dlp"; } };
	
	template<> struct Idx<VEC>{ static const int Size = 3; inline static string name() { return "Vec"; } };
	
	template<> struct Idx<BIV>{ static const int Size = 3; inline static string name() { return "Biv"; } };
	
	template<> struct Idx<TRI>{ static const int Size = 1; inline static string name() { return "Tri"; } };
	
	template<> struct Idx<GLD>{ static const int Size = 7; inline static string name() { return "Gld"; } };
	
	template<> struct Idx<ROT_ORI>{ static const int Size = 4; inline static string name() { return "Rot_Ori"; } };
	
	template<> struct Idx<ROT_INF>{ static const int Size = 4; inline static string name() { return "Rot_Inf"; } };
	
	template<> struct Idx<ROT_MNK>{ static const int Size = 4; inline static string name() { return "Rot_Mnk"; } };
	
	template<> struct Idx<ROT_HYP>{ static const int Size = 8; inline static string name() { return "Rot_Hyp"; } };
	
	template<> struct Idx<ROT_PSS>{ static const int Size = 4; inline static string name() { return "Rot_Pss"; } };
	
	template<> struct Idx<ROT_PNT>{ static const int Size = 12; inline static string name() { return "Rot_Pnt"; } };
	
	template<> struct Idx<ROT_SPH>{ static const int Size = 12; inline static string name() { return "Rot_Sph"; } };
	
	template<> struct Idx<ROT_STA>{ static const int Size = 12; inline static string name() { return "Rot_Sta"; } };
	
	template<> struct Idx<ROT_DRV>{ static const int Size = 4; inline static string name() { return "Rot_Drv"; } };
	
	template<> struct Idx<ROT_TNV>{ static const int Size = 4; inline static string name() { return "Rot_Tnv"; } };
	
	template<> struct Idx<ROT_LIN>{ static const int Size = 8; inline static string name() { return "Rot_Lin"; } };
	
	template<> struct Idx<ROT_PLN>{ static const int Size = 8; inline static string name() { return "Rot_Pln"; } };
	
	template<> struct Idx<ROT_DFP>{ static const int Size = 8; inline static string name() { return "Rot_Dfp"; } };
	
	template<> struct Idx<ROT_VEC>{ static const int Size = 4; inline static string name() { return "Rot_Vec"; } };
	
	template<> struct Idx<MOT_ORI>{ static const int Size = 12; inline static string name() { return "Mot_Ori"; } };
	
	template<> struct Idx<DIL_PSS>{ static const int Size = 2; inline static string name() { return "Dil_Pss"; } };
	
	template<> struct Idx<DIL_PNT>{ static const int Size = 8; inline static string name() { return "Dil_Pnt"; } };
	
	template<> struct Idx<DIL_CIR>{ static const int Size = 14; inline static string name() { return "Dil_Cir"; } };
	
	template<> struct Idx<DIL_SPH>{ static const int Size = 8; inline static string name() { return "Dil_Sph"; } };
	
	template<> struct Idx<DIL_STA>{ static const int Size = 12; inline static string name() { return "Dil_Sta"; } };
	
	template<> struct Idx<DIL_LIN>{ static const int Size = 9; inline static string name() { return "Dil_Lin"; } };
	
	template<> struct Idx<DIL_PLN>{ static const int Size = 7; inline static string name() { return "Dil_Pln"; } };
	
	template<> struct Idx<DIL_DFP>{ static const int Size = 5; inline static string name() { return "Dil_Dfp"; } };
	
	template<> struct Idx<DIL_DLL>{ static const int Size = 9; inline static string name() { return "Dil_Dll"; } };
	
	template<> struct Idx<DIL_DLP>{ static const int Size = 7; inline static string name() { return "Dil_Dlp"; } };
	
	template<> struct Idx<DIL_VEC>{ static const int Size = 6; inline static string name() { return "Dil_Vec"; } };
	
	template<> struct Idx<DIL_BIV>{ static const int Size = 6; inline static string name() { return "Dil_Biv"; } };
	
	template<> struct Idx<DIL_GLD>{ static const int Size = 10; inline static string name() { return "Dil_Gld"; } };
	
	template<> struct Idx<TRV_MNK>{ static const int Size = 4; inline static string name() { return "Trv_Mnk"; } };
	
	template<> struct Idx<TRV_PSS>{ static const int Size = 4; inline static string name() { return "Trv_Pss"; } };
	
	template<> struct Idx<TRV_PNT>{ static const int Size = 11; inline static string name() { return "Trv_Pnt"; } };
	
	template<> struct Idx<TRV_CIR>{ static const int Size = 15; inline static string name() { return "Trv_Cir"; } };
	
	template<> struct Idx<TRV_SPH>{ static const int Size = 11; inline static string name() { return "Trv_Sph"; } };
	
	template<> struct Idx<TRV_DRV>{ static const int Size = 11; inline static string name() { return "Trv_Drv"; } };
	
	template<> struct Idx<TRV_DRB>{ static const int Size = 11; inline static string name() { return "Trv_Drb"; } };
	
	template<> struct Idx<TRV_VEC>{ static const int Size = 7; inline static string name() { return "Trv_Vec"; } };
	
	template<> struct Idx<TRV_BIV>{ static const int Size = 7; inline static string name() { return "Trv_Biv"; } };
	
	template<> struct Idx<TRV_TRI>{ static const int Size = 4; inline static string name() { return "Trv_Tri"; } };
	
	template<> struct Idx<MTD_PSS>{ static const int Size = 12; inline static string name() { return "Mtd_Pss"; } };
	
	template<> struct Idx<TRS_ORI>{ static const int Size = 7; inline static string name() { return "Trs_Ori"; } };
	
	template<> struct Idx<TRS_PSS>{ static const int Size = 4; inline static string name() { return "Trs_Pss"; } };
	
	template<> struct Idx<TRS_PNT>{ static const int Size = 11; inline static string name() { return "Trs_Pnt"; } };
	
	template<> struct Idx<TRS_CIR>{ static const int Size = 15; inline static string name() { return "Trs_Cir"; } };
	
	template<> struct Idx<TRS_SPH>{ static const int Size = 11; inline static string name() { return "Trs_Sph"; } };
	
	template<> struct Idx<TRS_TNV>{ static const int Size = 11; inline static string name() { return "Trs_Tnv"; } };
	
	template<> struct Idx<TRS_TNB>{ static const int Size = 11; inline static string name() { return "Trs_Tnb"; } };
	
	template<> struct Idx<TRS_TNT>{ static const int Size = 7; inline static string name() { return "Trs_Tnt"; } };
	
	template<> struct Idx<TRS_LIN>{ static const int Size = 7; inline static string name() { return "Trs_Lin"; } };
	
	template<> struct Idx<TRS_PLN>{ static const int Size = 7; inline static string name() { return "Trs_Pln"; } };
	
	template<> struct Idx<TRS_DLL>{ static const int Size = 7; inline static string name() { return "Trs_Dll"; } };
	
	template<> struct Idx<RTT_MNK>{ static const int Size = 8; inline static string name() { return "Rtt_Mnk"; } };
	
	template<> struct Idx<RTT_PSS>{ static const int Size = 8; inline static string name() { return "Rtt_Pss"; } };
	
	template<> struct Idx<RTT_VEC>{ static const int Size = 8; inline static string name() { return "Rtt_Vec"; } };
	
	template<> struct Idx<RTD_PSS>{ static const int Size = 8; inline static string name() { return "Rtd_Pss"; } };
	
	template<> struct Idx<TVD_PSS>{ static const int Size = 5; inline static string name() { return "Tvd_Pss"; } };
	
	template<> struct Idx<TVD_VEC>{ static const int Size = 10; inline static string name() { return "Tvd_Vec"; } };
	
	template<> struct Idx<TVD_BIV>{ static const int Size = 10; inline static string name() { return "Tvd_Biv"; } };
	
	template<> struct Idx<TSD_PLN>{ static const int Size = 10; inline static string name() { return "Tsd_Pln"; } };
	
	template<> struct Idx<TRT_HYP>{ static const int Size = 14; inline static string name() { return "Trt_Hyp"; } };
	
	template<> struct Idx<BST_MNK>{ static const int Size = 11; inline static string name() { return "Bst_Mnk"; } };
	
	template<> struct Idx<BST_PSS>{ static const int Size = 11; inline static string name() { return "Bst_Pss"; } };
	
	template<> struct Idx<BST_PNT>{ static const int Size = 15; inline static string name() { return "Bst_Pnt"; } };
	
	template<> struct Idx<BST_SPH>{ static const int Size = 15; inline static string name() { return "Bst_Sph"; } };
	
	template<> struct Idx<BST_BIV>{ static const int Size = 15; inline static string name() { return "Bst_Biv"; } };
	
	template<> struct Idx<BST_TRI>{ static const int Size = 11; inline static string name() { return "Bst_Tri"; } };
	
	template<> struct Idx<ORI_ORI>{ static const int Size = 0; inline static string name() { return "Ori_Ori"; } };
	
	template<> struct Idx<ORI_STA>{ static const int Size = 9; inline static string name() { return "Ori_Sta"; } };
	
	template<> struct Idx<ORI_LIN>{ static const int Size = 9; inline static string name() { return "Ori_Lin"; } };
	
	template<> struct Idx<MNK_PNT>{ static const int Size = 5; inline static string name() { return "Mnk_Pnt"; } };
	
	template<> struct Idx<MNK_PAR>{ static const int Size = 10; inline static string name() { return "Mnk_Par"; } };
	
	template<> struct Idx<MNK_CIR>{ static const int Size = 10; inline static string name() { return "Mnk_Cir"; } };
	
	template<> struct Idx<MNK_SPH>{ static const int Size = 5; inline static string name() { return "Mnk_Sph"; } };
	
	template<> struct Idx<MNK_STA>{ static const int Size = 9; inline static string name() { return "Mnk_Sta"; } };
	
	template<> struct Idx<MNK_LIN>{ static const int Size = 6; inline static string name() { return "Mnk_Lin"; } };
	
	template<> struct Idx<MNK_PLN>{ static const int Size = 4; inline static string name() { return "Mnk_Pln"; } };
	
	template<> struct Idx<MNK_DLL>{ static const int Size = 6; inline static string name() { return "Mnk_Dll"; } };
	
	template<> struct Idx<MNK_DLP>{ static const int Size = 4; inline static string name() { return "Mnk_Dlp"; } };
	
	template<> struct Idx<MNK_VEC>{ static const int Size = 3; inline static string name() { return "Mnk_Vec"; } };
	
	template<> struct Idx<MNK_BIV>{ static const int Size = 3; inline static string name() { return "Mnk_Biv"; } };
	
	template<> struct Idx<HYP_PSS>{ static const int Size = 2; inline static string name() { return "Hyp_Pss"; } };
	
	template<> struct Idx<HYP_PNT>{ static const int Size = 8; inline static string name() { return "Hyp_Pnt"; } };
	
	template<> struct Idx<HYP_CIR>{ static const int Size = 14; inline static string name() { return "Hyp_Cir"; } };
	
	template<> struct Idx<HYP_SPH>{ static const int Size = 8; inline static string name() { return "Hyp_Sph"; } };
	
	template<> struct Idx<HYP_STA>{ static const int Size = 12; inline static string name() { return "Hyp_Sta"; } };
	
	template<> struct Idx<HYP_VEC>{ static const int Size = 6; inline static string name() { return "Hyp_Vec"; } };
	
	template<> struct Idx<HYP_BIV>{ static const int Size = 6; inline static string name() { return "Hyp_Biv"; } };
	
	template<> struct Idx<PSS_STA>{ static const int Size = 9; inline static string name() { return "Pss_Sta"; } };
	
	template<> struct Idx<PNT_LIN>{ static const int Size = 14; inline static string name() { return "Pnt_Lin"; } };
	
	template<> struct Idx<PNT_DLL>{ static const int Size = 14; inline static string name() { return "Pnt_Dll"; } };
	
	template<> struct Idx<PNT_VEC>{ static const int Size = 10; inline static string name() { return "Pnt_Vec"; } };
	
	template<> struct Idx<PNT_BIV>{ static const int Size = 10; inline static string name() { return "Pnt_Biv"; } };
	
	template<> struct Idx<CIR_BIV>{ static const int Size = 15; inline static string name() { return "Cir_Biv"; } };
	
	template<> struct Idx<SPH_VEC>{ static const int Size = 10; inline static string name() { return "Sph_Vec"; } };
	
	template<> struct Idx<SPH_BIV>{ static const int Size = 10; inline static string name() { return "Sph_Biv"; } };
	
	template<> struct Idx<STA_TRI>{ static const int Size = 9; inline static string name() { return "Sta_Tri"; } };
	
	template<> struct Idx<PLN_PLN>{ static const int Size = 7; inline static string name() { return "Pln_Pln"; } };
	
	template<> struct Idx<PLN_DLP>{ static const int Size = 7; inline static string name() { return "Pln_Dlp"; } };
	
	template<> struct Idx<PLN_BIV>{ static const int Size = 7; inline static string name() { return "Pln_Biv"; } };
	
	template<> struct Idx<DLP_BIV>{ static const int Size = 7; inline static string name() { return "Dlp_Biv"; } };
	
	template<> struct Idx<ROT_MNK_PNT>{ static const int Size = 12; inline static string name() { return "Rot_Mnk_Pnt"; } };
	
	template<> struct Idx<ROT_HYP_PSS>{ static const int Size = 8; inline static string name() { return "Rot_Hyp_Pss"; } };
	
	template<> struct Idx<TRV_MNK_VEC>{ static const int Size = 7; inline static string name() { return "Trv_Mnk_Vec"; } };
	
	template<> struct Idx<TRV_MNK_BIV>{ static const int Size = 7; inline static string name() { return "Trv_Mnk_Biv"; } };
	
	template<> struct Idx<MNK_PNT_LIN>{ static const int Size = 14; inline static string name() { return "Mnk_Pnt_Lin"; } };
	
	template<> struct Idx<MNK_PNT_DLL>{ static const int Size = 14; inline static string name() { return "Mnk_Pnt_Dll"; } };
	
	template<> struct Idx<ORI_IP_PAR>{ static const int Size = 4; inline static string name() { return "Ori_ip_Par"; } };
	
	template<> struct Idx<ORI_IP_CIR>{ static const int Size = 6; inline static string name() { return "Ori_ip_Cir"; } };
	
	template<> struct Idx<HYP_IP_SPH>{ static const int Size = 7; inline static string name() { return "Hyp_ip_Sph"; } };
	
	template<> struct Idx<BIV_IP_SPH>{ static const int Size = 7; inline static string name() { return "Biv_ip_Sph"; } };
	
	template<> struct Idx<GLD_IP_TNB>{ static const int Size = 7; inline static string name() { return "Gld_ip_Tnb"; } };
	
	template<> struct Idx<GLD_IP_TNT>{ static const int Size = 7; inline static string name() { return "Gld_ip_Tnt"; } };
	
	template<> struct Idx<ORI_OP_PAR>{ static const int Size = 6; inline static string name() { return "Ori_op_Par"; } };
	
	template<> struct Idx<ORI_OP_CIR>{ static const int Size = 4; inline static string name() { return "Ori_op_Cir"; } };
	
	template<> struct Idx<ORI_OP_GLD>{ static const int Size = 7; inline static string name() { return "Ori_op_Gld"; } };
	
	template<> struct Idx<TNV_OP_GLD>{ static const int Size = 7; inline static string name() { return "Tnv_op_Gld"; } };
	
	template<> struct Idx<MNK_ORI_IP_PAR>{ static const int Size = 4; inline static string name() { return "Mnk_Ori_ip_Par"; } };
	
	template<> struct Idx<MNK_ORI_IP_CIR>{ static const int Size = 6; inline static string name() { return "Mnk_Ori_ip_Cir"; } };
	
	template<> struct Idx<MNK_HYP_IP_SPH>{ static const int Size = 7; inline static string name() { return "Mnk_Hyp_ip_Sph"; } };
	
	template<> struct Idx<MNK_BIV_IP_SPH>{ static const int Size = 7; inline static string name() { return "Mnk_Biv_ip_Sph"; } };
	
	template<> struct Idx<MNK_ORI_OP_PAR>{ static const int Size = 6; inline static string name() { return "Mnk_Ori_op_Par"; } };
	
	template<> struct Idx<MNK_ORI_OP_CIR>{ static const int Size = 4; inline static string name() { return "Mnk_Ori_op_Cir"; } };
	
	template<> struct Idx<PNT_ORI_IP_CIR>{ static const int Size = 14; inline static string name() { return "Pnt_Ori_ip_Cir"; } };
	
	template<> struct Idx<PNT_ORI_OP_PAR>{ static const int Size = 14; inline static string name() { return "Pnt_Ori_op_Par"; } };
	
	template<> struct Idx<PNT_MNK_ORI_IP_CIR>{ static const int Size = 14; inline static string name() { return "Pnt_Mnk_Ori_ip_Cir"; } };
	
	template<> struct Idx<PNT_MNK_ORI_OP_PAR>{ static const int Size = 14; inline static string name() { return "Pnt_Mnk_Ori_op_Par"; } };
	
	template<> struct Idx<VEC_HYP_IP_SPH>{ static const int Size = 11; inline static string name() { return "Vec_Hyp_ip_Sph"; } };
	
	template<> struct Idx<VEC_BIV_IP_SPH>{ static const int Size = 11; inline static string name() { return "Vec_Biv_ip_Sph"; } };
	
	template<> struct Idx<VEC_MNK_HYP_IP_SPH>{ static const int Size = 11; inline static string name() { return "Vec_Mnk_Hyp_ip_Sph"; } };
	
	template<> struct Idx<VEC_MNK_BIV_IP_SPH>{ static const int Size = 11; inline static string name() { return "Vec_Mnk_Biv_ip_Sph"; } };
	
			template<int A, int B> struct ProductIdx{
            static const int GP = MUV;
            static const int OP = MUV;
            static const int IP = MUV;
        };
		
		template<> struct ProductIdx<SCA, SCA> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SCA, ORI> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<SCA, INF> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<SCA, MNK> {
			static const int GP = MNK;
			static const int OP = MNK;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<SCA, HYP> {
			static const int GP = HYP;
			static const int OP = HYP;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<SCA, PSS> {
			static const int GP = PSS;
			static const int OP = PSS;
			static const int IP = PSS;
		};
		
		template<> struct ProductIdx<SCA, PNT> {
			static const int GP = PNT;
			static const int OP = PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<SCA, PAR> {
			static const int GP = PAR;
			static const int OP = PAR;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<SCA, CIR> {
			static const int GP = CIR;
			static const int OP = CIR;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<SCA, SPH> {
			static const int GP = SPH;
			static const int OP = SPH;
			static const int IP = SPH;
		};
		
		template<> struct ProductIdx<SCA, STA> {
			static const int GP = STA;
			static const int OP = STA;
			static const int IP = STA;
		};
		
		template<> struct ProductIdx<SCA, DRV> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<SCA, DRB> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<SCA, DRT> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = DRT;
		};
		
		template<> struct ProductIdx<SCA, TNV> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<SCA, TNB> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<SCA, TNT> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = TNT;
		};
		
		template<> struct ProductIdx<SCA, LIN> {
			static const int GP = LIN;
			static const int OP = LIN;
			static const int IP = LIN;
		};
		
		template<> struct ProductIdx<SCA, PLN> {
			static const int GP = PLN;
			static const int OP = PLN;
			static const int IP = PLN;
		};
		
		template<> struct ProductIdx<SCA, FLP> {
			static const int GP = FLP;
			static const int OP = FLP;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<SCA, DFP> {
			static const int GP = DFP;
			static const int OP = DFP;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<SCA, DLL> {
			static const int GP = DLL;
			static const int OP = DLL;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<SCA, DLP> {
			static const int GP = DLP;
			static const int OP = DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<SCA, VEC> {
			static const int GP = VEC;
			static const int OP = VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<SCA, BIV> {
			static const int GP = BIV;
			static const int OP = BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<SCA, TRI> {
			static const int GP = TRI;
			static const int OP = TRI;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<SCA, GLD> {
			static const int GP = GLD;
			static const int OP = GLD;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<SCA, ROT> {
			static const int GP = ROT;
			static const int OP = ROT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<SCA, MOT> {
			static const int GP = MOT;
			static const int OP = MOT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<SCA, DIL> {
			static const int GP = DIL;
			static const int OP = DIL;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<SCA, TRV> {
			static const int GP = TRV;
			static const int OP = TRV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<SCA, MTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<SCA, TRS> {
			static const int GP = TRS;
			static const int OP = TRS;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<SCA, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<SCA, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<SCA, RTT> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<SCA, RTD> {
			static const int GP = RTD;
			static const int OP = RTD;
			static const int IP = RTD;
		};
		
		template<> struct ProductIdx<SCA, TVD> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<SCA, TSD> {
			static const int GP = TSD;
			static const int OP = TSD;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<SCA, TRT> {
			static const int GP = TRT;
			static const int OP = TRT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<SCA, RVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<SCA, TST> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<SCA, TVT> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<SCA, BST> {
			static const int GP = BST;
			static const int OP = BST;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<ORI, SCA> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, ORI> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, INF> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, MNK> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<ORI, HYP> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, PSS> {
			static const int GP = TNT;
			static const int OP = SCA;
			static const int IP = TNT;
		};
		
		template<> struct ProductIdx<ORI, PNT> {
			static const int GP = TVD;
			static const int OP = TRV_MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, PAR> {
			static const int GP = TVD_VEC;
			static const int OP = ORI_OP_PAR;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<ORI, CIR> {
			static const int GP = TVD_BIV;
			static const int OP = ORI_OP_CIR;
			static const int IP = ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<ORI, SPH> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = TRV_TRI;
		};
		
		template<> struct ProductIdx<ORI, STA> {
			static const int GP = ORI_STA;
			static const int OP = ORI_OP_PAR;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, DRV> {
			static const int GP = DIL_VEC;
			static const int OP = MNK_VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, DRB> {
			static const int GP = DIL_BIV;
			static const int OP = MNK_BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<ORI, DRT> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<ORI, TNV> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, TNB> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, TNT> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, LIN> {
			static const int GP = ORI_LIN;
			static const int OP = MNK_BIV;
			static const int IP = ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<ORI, PLN> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = TRV_TRI;
		};
		
		template<> struct ProductIdx<ORI, FLP> {
			static const int GP = TRS_ORI;
			static const int OP = MNK_VEC;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<ORI, DFP> {
			static const int GP = TRS_TNT;
			static const int OP = ORI_OP_CIR;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<ORI, DLL> {
			static const int GP = ORI_STA;
			static const int OP = ORI_OP_PAR;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, DLP> {
			static const int GP = TVD;
			static const int OP = TRV_MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, VEC> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, BIV> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, TRI> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, GLD> {
			static const int GP = TRS_TNV;
			static const int OP = ORI_OP_GLD;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<ORI, ROT> {
			static const int GP = ROT_ORI;
			static const int OP = ROT_ORI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, MOT> {
			static const int GP = MOT_ORI;
			static const int OP = RTT_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<ORI, DIL> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<ORI, TRV> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, MTD> {
			static const int GP = MOT_ORI;
			static const int OP = RTT_PSS;
			static const int IP = RTT_VEC;
		};
		
		template<> struct ProductIdx<ORI, TRS> {
			static const int GP = TRS_ORI;
			static const int OP = MNK_ORI_IP_PAR;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, RTC> {
			static const int GP = RVD;
			static const int OP = RTT_MNK;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<ORI, MTT> {
			static const int GP = MOT_ORI;
			static const int OP = RTT_PSS;
			static const int IP = RTT_VEC;
		};
		
		template<> struct ProductIdx<ORI, RTT> {
			static const int GP = ROT_ORI;
			static const int OP = ROT_ORI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, RTD> {
			static const int GP = ROT_ORI;
			static const int OP = ROT_ORI;
			static const int IP = ROT_ORI;
		};
		
		template<> struct ProductIdx<ORI, TVD> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<ORI, TSD> {
			static const int GP = TRS_ORI;
			static const int OP = MNK_ORI_IP_PAR;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<ORI, TRT> {
			static const int GP = TVD_VEC;
			static const int OP = TRV_MNK_VEC;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<ORI, RVD> {
			static const int GP = ROT_ORI;
			static const int OP = ROT_ORI;
			static const int IP = ROT_ORI;
		};
		
		template<> struct ProductIdx<ORI, TST> {
			static const int GP = TVD_VEC;
			static const int OP = TRV_MNK_VEC;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<ORI, TVT> {
			static const int GP = MOT_ORI;
			static const int OP = RTT_PSS;
			static const int IP = RTT_VEC;
		};
		
		template<> struct ProductIdx<ORI, BST> {
			static const int GP = TVD_VEC;
			static const int OP = TRV_MNK_VEC;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<INF, SCA> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, ORI> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, INF> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, MNK> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<INF, HYP> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, PSS> {
			static const int GP = DRT;
			static const int OP = SCA;
			static const int IP = DRT;
		};
		
		template<> struct ProductIdx<INF, PNT> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, PAR> {
			static const int GP = DIL_GLD;
			static const int OP = LIN;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<INF, CIR> {
			static const int GP = TSD_PLN;
			static const int OP = PLN;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<INF, SPH> {
			static const int GP = DIL_DFP;
			static const int OP = PSS;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<INF, STA> {
			static const int GP = DIL_LIN;
			static const int OP = LIN;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<INF, DRV> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, DRB> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, DRT> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, TNV> {
			static const int GP = DIL_VEC;
			static const int OP = MNK_VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<INF, TNB> {
			static const int GP = DIL_BIV;
			static const int OP = MNK_BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<INF, TNT> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<INF, LIN> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<INF, PLN> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<INF, FLP> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<INF, DFP> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, DLL> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, DLP> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, VEC> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, BIV> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, TRI> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, GLD> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, ROT> {
			static const int GP = ROT_INF;
			static const int OP = ROT_INF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, MOT> {
			static const int GP = ROT_INF;
			static const int OP = ROT_INF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, DIL> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<INF, TRV> {
			static const int GP = DIL_DLP;
			static const int OP = MNK_DLP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<INF, MTD> {
			static const int GP = ROT_INF;
			static const int OP = ROT_INF;
			static const int IP = ROT_INF;
		};
		
		template<> struct ProductIdx<INF, TRS> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, RTC> {
			static const int GP = MTD;
			static const int OP = ROT_PLN;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<INF, MTT> {
			static const int GP = MTD_PSS;
			static const int OP = ROT_LIN;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<INF, RTT> {
			static const int GP = MTD_PSS;
			static const int OP = ROT_LIN;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<INF, RTD> {
			static const int GP = ROT_INF;
			static const int OP = ROT_INF;
			static const int IP = ROT_INF;
		};
		
		template<> struct ProductIdx<INF, TVD> {
			static const int GP = DIL_DLP;
			static const int OP = MNK_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<INF, TSD> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<INF, TRT> {
			static const int GP = DIL_GLD;
			static const int OP = TRS_LIN;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<INF, RVD> {
			static const int GP = MTD_PSS;
			static const int OP = ROT_LIN;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<INF, TST> {
			static const int GP = MTD_PSS;
			static const int OP = ROT_LIN;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<INF, TVT> {
			static const int GP = DIL_GLD;
			static const int OP = TRS_LIN;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<INF, BST> {
			static const int GP = DIL_GLD;
			static const int OP = TRS_LIN;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<MNK, SCA> {
			static const int GP = MNK;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, ORI> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, INF> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, MNK> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, HYP> {
			static const int GP = HYP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, PSS> {
			static const int GP = TRI;
			static const int OP = SCA;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<MNK, PNT> {
			static const int GP = MNK_PNT;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, PAR> {
			static const int GP = MNK_PAR;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, CIR> {
			static const int GP = MNK_CIR;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNK, SPH> {
			static const int GP = MNK_SPH;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<MNK, STA> {
			static const int GP = MNK_STA;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DRV> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DRB> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DRT> {
			static const int GP = DRT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, TNV> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, TNB> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, TNT> {
			static const int GP = TNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, LIN> {
			static const int GP = MNK_LIN;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNK, PLN> {
			static const int GP = MNK_PLN;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<MNK, FLP> {
			static const int GP = TRS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DFP> {
			static const int GP = TRS_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DLL> {
			static const int GP = MNK_DLL;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DLP> {
			static const int GP = MNK_DLP;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, VEC> {
			static const int GP = MNK_VEC;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, BIV> {
			static const int GP = MNK_BIV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, TRI> {
			static const int GP = PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, GLD> {
			static const int GP = TRS_LIN;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, ROT> {
			static const int GP = ROT_MNK;
			static const int OP = ROT_MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, MOT> {
			static const int GP = ROT_PLN;
			static const int OP = ROT_MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DIL> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, TRV> {
			static const int GP = TRV_MNK;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, MTD> {
			static const int GP = MTD;
			static const int OP = ROT_MNK;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, TRS> {
			static const int GP = FLP;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, RTC> {
			static const int GP = RTC;
			static const int OP = ROT_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<MNK, MTT> {
			static const int GP = MTT;
			static const int OP = ROT_MNK;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, RTT> {
			static const int GP = RTT_MNK;
			static const int OP = ROT_MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, RTD> {
			static const int GP = RTD;
			static const int OP = ROT_MNK;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, TVD> {
			static const int GP = TVD;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, TSD> {
			static const int GP = TSD;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, TRT> {
			static const int GP = TRT;
			static const int OP = ROT_MNK;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, RVD> {
			static const int GP = RVD;
			static const int OP = ROT_MNK;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, TST> {
			static const int GP = TST;
			static const int OP = ROT_MNK;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, TVT> {
			static const int GP = TVT;
			static const int OP = ROT_MNK;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, BST> {
			static const int GP = BST_MNK;
			static const int OP = ROT_MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, SCA> {
			static const int GP = HYP;
			static const int OP = HYP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, ORI> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, INF> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, MNK> {
			static const int GP = HYP;
			static const int OP = SCA;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<HYP, HYP> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, PSS> {
			static const int GP = HYP_PSS;
			static const int OP = SCA;
			static const int IP = HYP_PSS;
		};
		
		template<> struct ProductIdx<HYP, PNT> {
			static const int GP = HYP_PNT;
			static const int OP = BIV_IP_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, PAR> {
			static const int GP = TRT_HYP;
			static const int OP = PSS_STA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<HYP, CIR> {
			static const int GP = HYP_CIR;
			static const int OP = SPH;
			static const int IP = STA;
		};
		
		template<> struct ProductIdx<HYP, SPH> {
			static const int GP = HYP_SPH;
			static const int OP = PSS;
			static const int IP = HYP_IP_SPH;
		};
		
		template<> struct ProductIdx<HYP, STA> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, DRV> {
			static const int GP = DIL_VEC;
			static const int OP = MNK_VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, DRB> {
			static const int GP = DIL_BIV;
			static const int OP = MNK_BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<HYP, DRT> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<HYP, TNV> {
			static const int GP = DIL_VEC;
			static const int OP = MNK_VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, TNB> {
			static const int GP = DIL_BIV;
			static const int OP = MNK_BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<HYP, TNT> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<HYP, LIN> {
			static const int GP = DIL_STA;
			static const int OP = MNK_BIV;
			static const int IP = STA;
		};
		
		template<> struct ProductIdx<HYP, PLN> {
			static const int GP = HYP_SPH;
			static const int OP = PSS;
			static const int IP = HYP_IP_SPH;
		};
		
		template<> struct ProductIdx<HYP, FLP> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_VEC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<HYP, DFP> {
			static const int GP = DIL_SPH;
			static const int OP = SPH;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<HYP, DLL> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, DLP> {
			static const int GP = HYP_PNT;
			static const int OP = BIV_IP_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, VEC> {
			static const int GP = HYP_VEC;
			static const int OP = HYP_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, BIV> {
			static const int GP = HYP_BIV;
			static const int OP = HYP_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, TRI> {
			static const int GP = HYP_PSS;
			static const int OP = HYP_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, GLD> {
			static const int GP = TRT;
			static const int OP = SPH_BIV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<HYP, ROT> {
			static const int GP = ROT_HYP;
			static const int OP = ROT_HYP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, MOT> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<HYP, DIL> {
			static const int GP = HYP;
			static const int OP = HYP;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<HYP, TRV> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_PNT;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, MTD> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = ROT_PNT;
		};
		
		template<> struct ProductIdx<HYP, TRS> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_PNT;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, RTC> {
			static const int GP = MTT;
			static const int OP = ROT_SPH;
			static const int IP = ROT_STA;
		};
		
		template<> struct ProductIdx<HYP, MTT> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = ROT_PNT;
		};
		
		template<> struct ProductIdx<HYP, RTT> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<HYP, RTD> {
			static const int GP = ROT_HYP;
			static const int OP = ROT_HYP;
			static const int IP = ROT_HYP;
		};
		
		template<> struct ProductIdx<HYP, TVD> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<HYP, TSD> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<HYP, TRT> {
			static const int GP = TRT_HYP;
			static const int OP = VEC_BIV_IP_SPH;
			static const int IP = VEC_MNK_BIV_IP_SPH;
		};
		
		template<> struct ProductIdx<HYP, RVD> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = ROT_PNT;
		};
		
		template<> struct ProductIdx<HYP, TST> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = ROT_PNT;
		};
		
		template<> struct ProductIdx<HYP, TVT> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = ROT_PNT;
		};
		
		template<> struct ProductIdx<HYP, BST> {
			static const int GP = TRT_HYP;
			static const int OP = VEC_BIV_IP_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PSS, SCA> {
			static const int GP = PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, ORI> {
			static const int GP = TNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, INF> {
			static const int GP = DRT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, MNK> {
			static const int GP = TRI;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, HYP> {
			static const int GP = HYP_PSS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, PSS> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, PNT> {
			static const int GP = SPH;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, PAR> {
			static const int GP = CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, CIR> {
			static const int GP = PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, SPH> {
			static const int GP = PNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, STA> {
			static const int GP = PSS_STA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DRV> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DRB> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DRT> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TNV> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TNB> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TNT> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, LIN> {
			static const int GP = DLL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, PLN> {
			static const int GP = DLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, FLP> {
			static const int GP = DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DFP> {
			static const int GP = FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DLL> {
			static const int GP = LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DLP> {
			static const int GP = PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, VEC> {
			static const int GP = MNK_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, BIV> {
			static const int GP = MNK_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TRI> {
			static const int GP = MNK;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, GLD> {
			static const int GP = TRS_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, ROT> {
			static const int GP = ROT_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, MOT> {
			static const int GP = ROT_LIN;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DIL> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TRV> {
			static const int GP = TRV_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, MTD> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TRS> {
			static const int GP = TRS_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, RTC> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, MTT> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, RTT> {
			static const int GP = RTT_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, RTD> {
			static const int GP = RTD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TVD> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TSD> {
			static const int GP = DIL_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TRT> {
			static const int GP = DIL_CIR;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, RVD> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TST> {
			static const int GP = TRV_CIR;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TVT> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, BST> {
			static const int GP = BST_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, SCA> {
			static const int GP = PNT;
			static const int OP = PNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, ORI> {
			static const int GP = TVD;
			static const int OP = TRV_MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, INF> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, MNK> {
			static const int GP = MNK_PNT;
			static const int OP = MNK_VEC;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<PNT, HYP> {
			static const int GP = HYP_PNT;
			static const int OP = BIV_IP_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, PSS> {
			static const int GP = SPH;
			static const int OP = SCA;
			static const int IP = SPH;
		};
		
		template<> struct ProductIdx<PNT, PNT> {
			static const int GP = BST;
			static const int OP = PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, PAR> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, CIR> {
			static const int GP = BST_SPH;
			static const int OP = SPH;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PNT, SPH> {
			static const int GP = BST_PSS;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<PNT, STA> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, DRV> {
			static const int GP = DIL_GLD;
			static const int OP = LIN;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PNT, DRB> {
			static const int GP = TSD_PLN;
			static const int OP = PLN;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<PNT, DRT> {
			static const int GP = DIL_DFP;
			static const int OP = PSS;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<PNT, TNV> {
			static const int GP = TVD_VEC;
			static const int OP = ORI_OP_PAR;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<PNT, TNB> {
			static const int GP = TVD_BIV;
			static const int OP = ORI_OP_CIR;
			static const int IP = ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<PNT, TNT> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = TRV_TRI;
		};
		
		template<> struct ProductIdx<PNT, LIN> {
			static const int GP = PNT_LIN;
			static const int OP = PLN;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PNT, PLN> {
			static const int GP = BST_PSS;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<PNT, FLP> {
			static const int GP = TRS_PNT;
			static const int OP = LIN;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, DFP> {
			static const int GP = TRS_SPH;
			static const int OP = SPH;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<PNT, DLL> {
			static const int GP = PNT_DLL;
			static const int OP = CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PNT, DLP> {
			static const int GP = BST;
			static const int OP = PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, VEC> {
			static const int GP = PNT_VEC;
			static const int OP = STA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, BIV> {
			static const int GP = PNT_BIV;
			static const int OP = HYP_IP_SPH;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<PNT, TRI> {
			static const int GP = MNK_SPH;
			static const int OP = HYP_PSS;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<PNT, GLD> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<PNT, ROT> {
			static const int GP = ROT_PNT;
			static const int OP = ROT_PNT;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<PNT, MOT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<PNT, DIL> {
			static const int GP = DIL_PNT;
			static const int OP = DIL_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<PNT, TRV> {
			static const int GP = TRV_PNT;
			static const int OP = TRV_PNT;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<PNT, MTD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<PNT, TRS> {
			static const int GP = TRS_PNT;
			static const int OP = TRS_PNT;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PNT, RTC> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<PNT, MTT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<PNT, RTT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTT_VEC;
		};
		
		template<> struct ProductIdx<PNT, RTD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = TRT_HYP;
		};
		
		template<> struct ProductIdx<PNT, TVD> {
			static const int GP = TRV_PNT;
			static const int OP = TRV_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, TSD> {
			static const int GP = TRS_PNT;
			static const int OP = TRS_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, TRT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = TRT_HYP;
		};
		
		template<> struct ProductIdx<PNT, RVD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<PNT, TST> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<PNT, TVT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<PNT, BST> {
			static const int GP = BST_PNT;
			static const int OP = BST_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PAR, SCA> {
			static const int GP = PAR;
			static const int OP = PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, ORI> {
			static const int GP = TVD_VEC;
			static const int OP = ORI_OP_PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, INF> {
			static const int GP = DIL_GLD;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, MNK> {
			static const int GP = MNK_PAR;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, HYP> {
			static const int GP = TRT_HYP;
			static const int OP = PSS_STA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, PSS> {
			static const int GP = CIR;
			static const int OP = SCA;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<PAR, PNT> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, PAR> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, CIR> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PAR, SPH> {
			static const int GP = BST_SPH;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PAR, STA> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, DRV> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, DRB> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PAR, DRT> {
			static const int GP = TSD_PLN;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<PAR, TNV> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<PAR, TNT> {
			static const int GP = TVD_BIV;
			static const int OP = SCA;
			static const int IP = ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<PAR, LIN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PAR, PLN> {
			static const int GP = BST_SPH;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PAR, FLP> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, DFP> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PAR, DLL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, DLP> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, VEC> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, BIV> {
			static const int GP = BST_BIV;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TRI> {
			static const int GP = MNK_CIR;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<PAR, GLD> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PAR, ROT> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, MOT> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<PAR, DIL> {
			static const int GP = TRT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TRV> {
			static const int GP = TST;
			static const int OP = PNT_ORI_OP_PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, MTD> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, TRS> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, RTC> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<PAR, MTT> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, RTT> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = GLD_IP_TNB;
		};
		
		template<> struct ProductIdx<PAR, RTD> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, TVD> {
			static const int GP = TST;
			static const int OP = PNT_ORI_OP_PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TSD> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TRT> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, RVD> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, TST> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, TVT> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, BST> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, SCA> {
			static const int GP = CIR;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, ORI> {
			static const int GP = TVD_BIV;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, INF> {
			static const int GP = TSD_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, MNK> {
			static const int GP = MNK_CIR;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, HYP> {
			static const int GP = HYP_CIR;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, PSS> {
			static const int GP = PAR;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<CIR, PNT> {
			static const int GP = BST_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, PAR> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, CIR> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, SPH> {
			static const int GP = BST_PNT;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, STA> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DRV> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DRB> {
			static const int GP = MTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DRT> {
			static const int GP = DIL_GLD;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<CIR, TNV> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TNB> {
			static const int GP = RVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TNT> {
			static const int GP = TVD_VEC;
			static const int OP = SCA;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<CIR, LIN> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, PLN> {
			static const int GP = BST_PNT;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, FLP> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DFP> {
			static const int GP = TVT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DLL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DLP> {
			static const int GP = BST_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, VEC> {
			static const int GP = BST_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, BIV> {
			static const int GP = CIR_BIV;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TRI> {
			static const int GP = MNK_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, GLD> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, ROT> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, MOT> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<CIR, DIL> {
			static const int GP = DIL_CIR;
			static const int OP = BST_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TRV> {
			static const int GP = TRV_CIR;
			static const int OP = BST_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, MTD> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, TRS> {
			static const int GP = TRS_CIR;
			static const int OP = BST_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, RTC> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<CIR, MTT> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, RTT> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<CIR, RTD> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, TVD> {
			static const int GP = TRV_CIR;
			static const int OP = BST_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TSD> {
			static const int GP = TRS_CIR;
			static const int OP = BST_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TRT> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, RVD> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, TST> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, TVT> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, BST> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, SCA> {
			static const int GP = SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, ORI> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, INF> {
			static const int GP = DIL_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, MNK> {
			static const int GP = MNK_SPH;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, HYP> {
			static const int GP = HYP_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, PSS> {
			static const int GP = PNT;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<SPH, PNT> {
			static const int GP = BST_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, PAR> {
			static const int GP = BST_SPH;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, CIR> {
			static const int GP = BST_PNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, SPH> {
			static const int GP = BST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, STA> {
			static const int GP = BST_SPH;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DRV> {
			static const int GP = TSD_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DRB> {
			static const int GP = DIL_GLD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DRT> {
			static const int GP = TSD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TNV> {
			static const int GP = TVD_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TNB> {
			static const int GP = TVD_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TNT> {
			static const int GP = TVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, LIN> {
			static const int GP = PNT_DLL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, PLN> {
			static const int GP = BST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, FLP> {
			static const int GP = TRS_SPH;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DFP> {
			static const int GP = TRS_PNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DLL> {
			static const int GP = PNT_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DLP> {
			static const int GP = BST_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, VEC> {
			static const int GP = SPH_VEC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, BIV> {
			static const int GP = SPH_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TRI> {
			static const int GP = MNK_PNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, GLD> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, ROT> {
			static const int GP = ROT_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, MOT> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DIL> {
			static const int GP = DIL_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TRV> {
			static const int GP = TRV_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, MTD> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TRS> {
			static const int GP = TRS_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, RTC> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<SPH, MTT> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, RTT> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, RTD> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TVD> {
			static const int GP = TRV_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TSD> {
			static const int GP = TRS_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TRT> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, RVD> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TST> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TVT> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, BST> {
			static const int GP = BST_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, SCA> {
			static const int GP = STA;
			static const int OP = STA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, ORI> {
			static const int GP = ORI_STA;
			static const int OP = ORI_OP_PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, INF> {
			static const int GP = DIL_LIN;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, MNK> {
			static const int GP = MNK_STA;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, HYP> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, PSS> {
			static const int GP = PSS_STA;
			static const int OP = SCA;
			static const int IP = PSS_STA;
		};
		
		template<> struct ProductIdx<STA, PNT> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, PAR> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, CIR> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<STA, SPH> {
			static const int GP = BST_SPH;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<STA, STA> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, DRV> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, DRB> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<STA, DRT> {
			static const int GP = DIL_DLL;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<STA, TNV> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<STA, TNT> {
			static const int GP = ORI_LIN;
			static const int OP = SCA;
			static const int IP = ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<STA, LIN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<STA, PLN> {
			static const int GP = BST_SPH;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<STA, FLP> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, DFP> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<STA, DLL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, DLP> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, VEC> {
			static const int GP = ROT_PNT;
			static const int OP = HYP_IP_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, BIV> {
			static const int GP = ROT_STA;
			static const int OP = HYP_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, TRI> {
			static const int GP = STA_TRI;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<STA, GLD> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<STA, ROT> {
			static const int GP = ROT_STA;
			static const int OP = VEC_HYP_IP_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, MOT> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<STA, DIL> {
			static const int GP = DIL_STA;
			static const int OP = DIL_STA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, TRV> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, MTD> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<STA, TRS> {
			static const int GP = TVT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, RTC> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = TRT_HYP;
		};
		
		template<> struct ProductIdx<STA, MTT> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<STA, RTT> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = GLD_IP_TNB;
		};
		
		template<> struct ProductIdx<STA, RTD> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = HYP_PNT;
		};
		
		template<> struct ProductIdx<STA, TVD> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, TSD> {
			static const int GP = TVT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, TRT> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = HYP_PNT;
		};
		
		template<> struct ProductIdx<STA, RVD> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<STA, TST> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<STA, TVT> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<STA, BST> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, SCA> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, ORI> {
			static const int GP = DIL_VEC;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, INF> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, MNK> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, HYP> {
			static const int GP = DIL_VEC;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, PSS> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<DRV, PNT> {
			static const int GP = DIL_GLD;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, PAR> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, CIR> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRV, SPH> {
			static const int GP = TSD_PLN;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<DRV, STA> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DRV> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DRB> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DRT> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, TNV> {
			static const int GP = RTD;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, TNB> {
			static const int GP = RTD_PSS;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DRV, TNT> {
			static const int GP = DIL_BIV;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<DRV, LIN> {
			static const int GP = ROT_INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRV, PLN> {
			static const int GP = ROT_DRV;
			static const int OP = SCA;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DRV, FLP> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DFP> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DLL> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DLP> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, VEC> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, BIV> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, TRI> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, GLD> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, ROT> {
			static const int GP = ROT_DRV;
			static const int OP = ROT_DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, MOT> {
			static const int GP = ROT_DRV;
			static const int OP = ROT_DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DIL> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, TRV> {
			static const int GP = TRV_DRV;
			static const int OP = MNK_DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, MTD> {
			static const int GP = ROT_DRV;
			static const int OP = ROT_DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DRV, TRS> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, RTC> {
			static const int GP = MTD_PSS;
			static const int OP = PLN_DLP;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<DRV, MTT> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<DRV, RTT> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<DRV, RTD> {
			static const int GP = ROT_DRV;
			static const int OP = ROT_DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DRV, TVD> {
			static const int GP = TRV_DRV;
			static const int OP = MNK_DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, TSD> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, TRT> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<DRV, RVD> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<DRV, TST> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<DRV, TVT> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<DRV, BST> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, SCA> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, ORI> {
			static const int GP = DIL_BIV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, INF> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, MNK> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, HYP> {
			static const int GP = DIL_BIV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, PSS> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DRB, PNT> {
			static const int GP = TSD_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, PAR> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, CIR> {
			static const int GP = MTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, SPH> {
			static const int GP = DIL_GLD;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, STA> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DRV> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DRB> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DRT> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TNV> {
			static const int GP = RTD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TNB> {
			static const int GP = RTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TNT> {
			static const int GP = DIL_VEC;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DRB, LIN> {
			static const int GP = ROT_DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, PLN> {
			static const int GP = ROT_INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRB, FLP> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DFP> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DLL> {
			static const int GP = ROT_INF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DLP> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, VEC> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, BIV> {
			static const int GP = ROT_INF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TRI> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, GLD> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, ROT> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, MOT> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DIL> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TRV> {
			static const int GP = TRV_DRB;
			static const int OP = TRS_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, MTD> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRB, TRS> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, RTC> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<DRB, MTT> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, RTT> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DRB, RTD> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRB, TVD> {
			static const int GP = TRV_DRB;
			static const int OP = TRS_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TSD> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TRT> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRB, RVD> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, TST> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, TVT> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRB, BST> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, SCA> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, ORI> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, INF> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, MNK> {
			static const int GP = DRT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, HYP> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, PSS> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRT, PNT> {
			static const int GP = DIL_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, PAR> {
			static const int GP = TSD_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, CIR> {
			static const int GP = DIL_GLD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, SPH> {
			static const int GP = TSD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, STA> {
			static const int GP = DIL_DLL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DRV> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DRB> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DRT> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TNV> {
			static const int GP = DIL_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TNB> {
			static const int GP = DIL_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TNT> {
			static const int GP = DIL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, LIN> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, PLN> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, FLP> {
			static const int GP = DRT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DFP> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DLL> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DLP> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, VEC> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, BIV> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TRI> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, GLD> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, ROT> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, MOT> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DIL> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TRV> {
			static const int GP = DIL_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, MTD> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TRS> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, RTC> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRT, MTT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, RTT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, RTD> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TVD> {
			static const int GP = DIL_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TSD> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TRT> {
			static const int GP = TSD_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, RVD> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TST> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TVT> {
			static const int GP = TSD_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, BST> {
			static const int GP = TSD_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, SCA> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, ORI> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, INF> {
			static const int GP = DIL_VEC;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, MNK> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, HYP> {
			static const int GP = DIL_VEC;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, PSS> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<TNV, PNT> {
			static const int GP = TVD_VEC;
			static const int OP = ORI_OP_PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, PAR> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, CIR> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<TNV, SPH> {
			static const int GP = TVD_BIV;
			static const int OP = SCA;
			static const int IP = ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<TNV, STA> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DRV> {
			static const int GP = RTD;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DRB> {
			static const int GP = RTD_PSS;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TNV, DRT> {
			static const int GP = DIL_BIV;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TNV, TNV> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, TNB> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, TNT> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, LIN> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<TNV, PLN> {
			static const int GP = TVD_BIV;
			static const int OP = SCA;
			static const int IP = ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<TNV, FLP> {
			static const int GP = TRS_TNV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DFP> {
			static const int GP = TRS_TNB;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TNV, DLL> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DLP> {
			static const int GP = TVD_VEC;
			static const int OP = ORI_OP_PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, VEC> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, BIV> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, TRI> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, GLD> {
			static const int GP = MOT_ORI;
			static const int OP = TNV_OP_GLD;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TNV, ROT> {
			static const int GP = ROT_TNV;
			static const int OP = ROT_TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, MOT> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TNV, DIL> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, TRV> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, MTD> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = GLD_IP_TNB;
		};
		
		template<> struct ProductIdx<TNV, TRS> {
			static const int GP = TRS_TNV;
			static const int OP = MNK_ORI_IP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, RTC> {
			static const int GP = MOT_ORI;
			static const int OP = TNV_OP_GLD;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<TNV, MTT> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = GLD_IP_TNB;
		};
		
		template<> struct ProductIdx<TNV, RTT> {
			static const int GP = ROT_TNV;
			static const int OP = ROT_TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, RTD> {
			static const int GP = ROT_TNV;
			static const int OP = ROT_TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TNV, TVD> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, TSD> {
			static const int GP = TRS_TNV;
			static const int OP = MNK_ORI_IP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, TRT> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TNV, RVD> {
			static const int GP = ROT_TNV;
			static const int OP = ROT_TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TNV, TST> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TNV, TVT> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = GLD_IP_TNB;
		};
		
		template<> struct ProductIdx<TNV, BST> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, SCA> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, ORI> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, INF> {
			static const int GP = DIL_BIV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, MNK> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, HYP> {
			static const int GP = DIL_BIV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, PSS> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TNB, PNT> {
			static const int GP = TVD_BIV;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, PAR> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, CIR> {
			static const int GP = RVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, SPH> {
			static const int GP = TVD_VEC;
			static const int OP = SCA;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<TNB, STA> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DRV> {
			static const int GP = RTD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DRB> {
			static const int GP = RTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DRT> {
			static const int GP = DIL_VEC;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TNB, TNV> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, TNB> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, TNT> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, LIN> {
			static const int GP = RVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, PLN> {
			static const int GP = TVD_VEC;
			static const int OP = SCA;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<TNB, FLP> {
			static const int GP = TRS_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DFP> {
			static const int GP = TRS_TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DLL> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DLP> {
			static const int GP = TVD_BIV;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, VEC> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, BIV> {
			static const int GP = ROT_ORI;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, TRI> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, GLD> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, ROT> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, MOT> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TNB, DIL> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, TRV> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, MTD> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<TNB, TRS> {
			static const int GP = TRS_TNB;
			static const int OP = TRV_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, RTC> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TNB, MTT> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<TNB, RTT> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, RTD> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNB, TVD> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, TSD> {
			static const int GP = TRS_TNB;
			static const int OP = TRV_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, TRT> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNB, RVD> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNB, TST> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNB, TVT> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<TNB, BST> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, SCA> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, ORI> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, INF> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, MNK> {
			static const int GP = TNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, HYP> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, PSS> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNT, PNT> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, PAR> {
			static const int GP = TVD_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, CIR> {
			static const int GP = TVD_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, SPH> {
			static const int GP = TVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, STA> {
			static const int GP = ORI_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DRV> {
			static const int GP = DIL_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DRB> {
			static const int GP = DIL_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DRT> {
			static const int GP = DIL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TNV> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TNB> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TNT> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, LIN> {
			static const int GP = ORI_STA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, PLN> {
			static const int GP = TVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, FLP> {
			static const int GP = TRS_TNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DFP> {
			static const int GP = TRS_ORI;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DLL> {
			static const int GP = ORI_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DLP> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, VEC> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, BIV> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TRI> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, GLD> {
			static const int GP = TRS_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, ROT> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, MOT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DIL> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TRV> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, MTD> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TRS> {
			static const int GP = TRS_TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, RTC> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNT, MTT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, RTT> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, RTD> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TVD> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TSD> {
			static const int GP = TRS_TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TRT> {
			static const int GP = TVD_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, RVD> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TST> {
			static const int GP = TVD_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TVT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, BST> {
			static const int GP = TVD_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, SCA> {
			static const int GP = LIN;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, ORI> {
			static const int GP = ORI_LIN;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, INF> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, MNK> {
			static const int GP = MNK_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, HYP> {
			static const int GP = DIL_STA;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, PSS> {
			static const int GP = DLL;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<LIN, PNT> {
			static const int GP = PNT_LIN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, PAR> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, CIR> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, SPH> {
			static const int GP = PNT_DLL;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, STA> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DRV> {
			static const int GP = ROT_INF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DRB> {
			static const int GP = ROT_DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DRT> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TNV> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TNB> {
			static const int GP = RVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TNT> {
			static const int GP = ORI_STA;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<LIN, LIN> {
			static const int GP = MOT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, PLN> {
			static const int GP = ROT_DFP;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, FLP> {
			static const int GP = GLD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DFP> {
			static const int GP = TRS_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DLL> {
			static const int GP = ROT_LIN;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DLP> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, VEC> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, BIV> {
			static const int GP = ROT_LIN;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TRI> {
			static const int GP = MNK_DLL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, GLD> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, ROT> {
			static const int GP = ROT_LIN;
			static const int OP = PLN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, MOT> {
			static const int GP = ROT_LIN;
			static const int OP = PLN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DIL> {
			static const int GP = DIL_LIN;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TRV> {
			static const int GP = TRV_CIR;
			static const int OP = PLN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, MTD> {
			static const int GP = MTD_PSS;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, TRS> {
			static const int GP = TRS_LIN;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, RTC> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<LIN, MTT> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, RTT> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<LIN, RTD> {
			static const int GP = MTD_PSS;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, TVD> {
			static const int GP = TRV_CIR;
			static const int OP = PLN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TSD> {
			static const int GP = DIL_GLD;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TRT> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, RVD> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, TST> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, TVT> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, BST> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, SCA> {
			static const int GP = PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, ORI> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, INF> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, MNK> {
			static const int GP = MNK_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, HYP> {
			static const int GP = HYP_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, PSS> {
			static const int GP = DLP;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PLN, PNT> {
			static const int GP = BST_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, PAR> {
			static const int GP = BST_SPH;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, CIR> {
			static const int GP = BST_PNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, SPH> {
			static const int GP = BST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, STA> {
			static const int GP = BST_SPH;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DRV> {
			static const int GP = ROT_DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DRB> {
			static const int GP = ROT_INF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DRT> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TNV> {
			static const int GP = TVD_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TNB> {
			static const int GP = TVD_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TNT> {
			static const int GP = TVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, LIN> {
			static const int GP = ROT_DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, PLN> {
			static const int GP = PLN_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, FLP> {
			static const int GP = TRS_DLL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DFP> {
			static const int GP = TRS_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DLL> {
			static const int GP = ROT_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DLP> {
			static const int GP = PLN_DLP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, VEC> {
			static const int GP = PLN_DLP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, BIV> {
			static const int GP = PLN_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TRI> {
			static const int GP = MNK_DLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, GLD> {
			static const int GP = ROT_LIN;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, ROT> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, MOT> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DIL> {
			static const int GP = DIL_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TRV> {
			static const int GP = TRV_SPH;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, MTD> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TRS> {
			static const int GP = TRS_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, RTC> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PLN, MTT> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, RTT> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, RTD> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TVD> {
			static const int GP = TRV_SPH;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TSD> {
			static const int GP = TSD_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TRT> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, RVD> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TST> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TVT> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, BST> {
			static const int GP = BST_SPH;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, SCA> {
			static const int GP = FLP;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, ORI> {
			static const int GP = TRS_ORI;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, INF> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, MNK> {
			static const int GP = TRS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, HYP> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, PSS> {
			static const int GP = DFP;
			static const int OP = SCA;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<FLP, PNT> {
			static const int GP = TRS_PNT;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, PAR> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, CIR> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<FLP, SPH> {
			static const int GP = TRS_SPH;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<FLP, STA> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DRV> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DRB> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DRT> {
			static const int GP = DRT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, TNV> {
			static const int GP = TRS_TNV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, TNB> {
			static const int GP = TRS_TNB;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<FLP, TNT> {
			static const int GP = TRS_TNT;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<FLP, LIN> {
			static const int GP = GLD;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<FLP, PLN> {
			static const int GP = TRS_DLL;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<FLP, FLP> {
			static const int GP = TRS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DFP> {
			static const int GP = TRS_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DLL> {
			static const int GP = TRS_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DLP> {
			static const int GP = TRS_LIN;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, VEC> {
			static const int GP = TRS_LIN;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, BIV> {
			static const int GP = TRS_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, TRI> {
			static const int GP = TRS_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, GLD> {
			static const int GP = TRS_LIN;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, ROT> {
			static const int GP = ROT_PLN;
			static const int OP = ROT_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, MOT> {
			static const int GP = ROT_PLN;
			static const int OP = ROT_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DIL> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, TRV> {
			static const int GP = TRT;
			static const int OP = PLN_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, MTD> {
			static const int GP = MTD;
			static const int OP = ROT_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, TRS> {
			static const int GP = FLP;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, RTC> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<FLP, MTT> {
			static const int GP = MTT;
			static const int OP = ROT_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, RTT> {
			static const int GP = MTT;
			static const int OP = ROT_PLN;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<FLP, RTD> {
			static const int GP = MTD;
			static const int OP = ROT_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, TVD> {
			static const int GP = TRT;
			static const int OP = PLN_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, TSD> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, TRT> {
			static const int GP = TVT;
			static const int OP = ROT_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, RVD> {
			static const int GP = MTT;
			static const int OP = ROT_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, TST> {
			static const int GP = MTT;
			static const int OP = ROT_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, TVT> {
			static const int GP = TVT;
			static const int OP = ROT_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, BST> {
			static const int GP = TVT;
			static const int OP = ROT_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, SCA> {
			static const int GP = DFP;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, ORI> {
			static const int GP = TRS_TNT;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, INF> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, MNK> {
			static const int GP = TRS_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, HYP> {
			static const int GP = DIL_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, PSS> {
			static const int GP = FLP;
			static const int OP = SCA;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<DFP, PNT> {
			static const int GP = TRS_SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, PAR> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, CIR> {
			static const int GP = TVT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, SPH> {
			static const int GP = TRS_PNT;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DFP, STA> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DRV> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DRB> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DRT> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, TNV> {
			static const int GP = TRS_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TNB> {
			static const int GP = TRS_TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TNT> {
			static const int GP = TRS_ORI;
			static const int OP = SCA;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<DFP, LIN> {
			static const int GP = TRS_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, PLN> {
			static const int GP = TRS_LIN;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, FLP> {
			static const int GP = TRS_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DFP> {
			static const int GP = TRS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DLL> {
			static const int GP = GLD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DLP> {
			static const int GP = TRS_DLL;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, VEC> {
			static const int GP = TRS_DLL;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, BIV> {
			static const int GP = GLD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TRI> {
			static const int GP = TRS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, GLD> {
			static const int GP = TRS_DLL;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, ROT> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, MOT> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, DIL> {
			static const int GP = DIL_DFP;
			static const int OP = DIL_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TRV> {
			static const int GP = DIL_CIR;
			static const int OP = DIL_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, MTD> {
			static const int GP = MTD_PSS;
			static const int OP = DIL_DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, TRS> {
			static const int GP = DFP;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, RTC> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DFP, MTT> {
			static const int GP = RTC;
			static const int OP = DIL_DFP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DFP, RTT> {
			static const int GP = RTC;
			static const int OP = DIL_DFP;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<DFP, RTD> {
			static const int GP = MTD_PSS;
			static const int OP = DIL_DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, TVD> {
			static const int GP = DIL_CIR;
			static const int OP = DIL_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TSD> {
			static const int GP = DIL_DFP;
			static const int OP = DIL_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TRT> {
			static const int GP = TRS_CIR;
			static const int OP = DIL_DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, RVD> {
			static const int GP = RTC;
			static const int OP = DIL_DFP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DFP, TST> {
			static const int GP = RTC;
			static const int OP = DIL_DFP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DFP, TVT> {
			static const int GP = TRS_CIR;
			static const int OP = DIL_DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, BST> {
			static const int GP = TRS_CIR;
			static const int OP = DIL_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, SCA> {
			static const int GP = DLL;
			static const int OP = DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, ORI> {
			static const int GP = ORI_STA;
			static const int OP = ORI_OP_PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, INF> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, MNK> {
			static const int GP = MNK_DLL;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, HYP> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, PSS> {
			static const int GP = LIN;
			static const int OP = SCA;
			static const int IP = LIN;
		};
		
		template<> struct ProductIdx<DLL, PNT> {
			static const int GP = PNT_DLL;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, PAR> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, CIR> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DLL, SPH> {
			static const int GP = PNT_LIN;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<DLL, STA> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, DRV> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, DRB> {
			static const int GP = ROT_INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLL, DRT> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DLL, TNV> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<DLL, TNT> {
			static const int GP = ORI_LIN;
			static const int OP = SCA;
			static const int IP = ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<DLL, LIN> {
			static const int GP = ROT_LIN;
			static const int OP = PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLL, PLN> {
			static const int GP = ROT_PLN;
			static const int OP = SCA;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<DLL, FLP> {
			static const int GP = TRS_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, DFP> {
			static const int GP = GLD;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DLL, DLL> {
			static const int GP = MOT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, DLP> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, VEC> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, BIV> {
			static const int GP = MOT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TRI> {
			static const int GP = MNK_LIN;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DLL, GLD> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLL, ROT> {
			static const int GP = MOT;
			static const int OP = TRS_DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, MOT> {
			static const int GP = MOT;
			static const int OP = TRS_DLL;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<DLL, DIL> {
			static const int GP = DIL_DLL;
			static const int OP = DIL_DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TRV> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, MTD> {
			static const int GP = MTD;
			static const int OP = TSD_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DLL, TRS> {
			static const int GP = TRS_DLL;
			static const int OP = TRS_DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, RTC> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<DLL, MTT> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<DLL, RTT> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = GLD_IP_TNB;
		};
		
		template<> struct ProductIdx<DLL, RTD> {
			static const int GP = MTD;
			static const int OP = TSD_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DLL, TVD> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TSD> {
			static const int GP = TSD_PLN;
			static const int OP = TSD_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TRT> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DLL, RVD> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<DLL, TST> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<DLL, TVT> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DLL, BST> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, SCA> {
			static const int GP = DLP;
			static const int OP = DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, ORI> {
			static const int GP = TVD;
			static const int OP = TRV_MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, INF> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, MNK> {
			static const int GP = MNK_DLP;
			static const int OP = MNK_VEC;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, HYP> {
			static const int GP = HYP_PNT;
			static const int OP = BIV_IP_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, PSS> {
			static const int GP = PLN;
			static const int OP = SCA;
			static const int IP = PLN;
		};
		
		template<> struct ProductIdx<DLP, PNT> {
			static const int GP = BST;
			static const int OP = PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, PAR> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DLP, CIR> {
			static const int GP = BST_SPH;
			static const int OP = SPH;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<DLP, SPH> {
			static const int GP = BST_PSS;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<DLP, STA> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DLP, DRV> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, DRB> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DLP, DRT> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<DLP, TNV> {
			static const int GP = TVD_VEC;
			static const int OP = ORI_OP_PAR;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<DLP, TNB> {
			static const int GP = TVD_BIV;
			static const int OP = ORI_OP_CIR;
			static const int IP = ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<DLP, TNT> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = TRV_TRI;
		};
		
		template<> struct ProductIdx<DLP, LIN> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<DLP, PLN> {
			static const int GP = PLN_DLP;
			static const int OP = PSS;
			static const int IP = LIN;
		};
		
		template<> struct ProductIdx<DLP, FLP> {
			static const int GP = TRS_LIN;
			static const int OP = LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, DFP> {
			static const int GP = TRS_DLL;
			static const int OP = DRT;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<DLP, DLL> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DLP, DLP> {
			static const int GP = PLN_PLN;
			static const int OP = DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, VEC> {
			static const int GP = PLN_PLN;
			static const int OP = DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, BIV> {
			static const int GP = DLP_BIV;
			static const int OP = DFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DLP, TRI> {
			static const int GP = MNK_PLN;
			static const int OP = DRT;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<DLP, GLD> {
			static const int GP = MOT;
			static const int OP = TRS_DLL;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<DLP, ROT> {
			static const int GP = ROT_DFP;
			static const int OP = ROT_DFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DLP, MOT> {
			static const int GP = ROT_DFP;
			static const int OP = ROT_DFP;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<DLP, DIL> {
			static const int GP = DIL_DLP;
			static const int OP = DIL_DLP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, TRV> {
			static const int GP = TRV_PNT;
			static const int OP = MUV;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<DLP, MTD> {
			static const int GP = MTD_PSS;
			static const int OP = MTD_PSS;
			static const int IP = DIL_GLD;
		};
		
		template<> struct ProductIdx<DLP, TRS> {
			static const int GP = GLD;
			static const int OP = GLD;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, RTC> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<DLP, MTT> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<DLP, RTT> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = RTT_VEC;
		};
		
		template<> struct ProductIdx<DLP, RTD> {
			static const int GP = MTD_PSS;
			static const int OP = MTD_PSS;
			static const int IP = DIL_GLD;
		};
		
		template<> struct ProductIdx<DLP, TVD> {
			static const int GP = TRV_PNT;
			static const int OP = MUV;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DLP, TSD> {
			static const int GP = DIL_GLD;
			static const int OP = DIL_GLD;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, TRT> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<DLP, RVD> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<DLP, TST> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<DLP, TVT> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<DLP, BST> {
			static const int GP = BST_PNT;
			static const int OP = PNT_DLL;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<VEC, SCA> {
			static const int GP = VEC;
			static const int OP = VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, ORI> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, INF> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, MNK> {
			static const int GP = MNK_VEC;
			static const int OP = MNK_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, HYP> {
			static const int GP = HYP_VEC;
			static const int OP = HYP_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, PSS> {
			static const int GP = MNK_BIV;
			static const int OP = SCA;
			static const int IP = MNK_BIV;
		};
		
		template<> struct ProductIdx<VEC, PNT> {
			static const int GP = PNT_VEC;
			static const int OP = STA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, PAR> {
			static const int GP = BST_PNT;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<VEC, CIR> {
			static const int GP = BST_SPH;
			static const int OP = SPH;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<VEC, SPH> {
			static const int GP = SPH_VEC;
			static const int OP = PSS;
			static const int IP = PSS_STA;
		};
		
		template<> struct ProductIdx<VEC, STA> {
			static const int GP = ROT_PNT;
			static const int OP = HYP_IP_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<VEC, DRV> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<VEC, DRB> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<VEC, DRT> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<VEC, TNV> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<VEC, TNB> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<VEC, TNT> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<VEC, LIN> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<VEC, PLN> {
			static const int GP = PLN_DLP;
			static const int OP = PSS;
			static const int IP = LIN;
		};
		
		template<> struct ProductIdx<VEC, FLP> {
			static const int GP = TRS_LIN;
			static const int OP = LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<VEC, DFP> {
			static const int GP = TRS_DLL;
			static const int OP = DRT;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<VEC, DLL> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<VEC, DLP> {
			static const int GP = PLN_PLN;
			static const int OP = DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, VEC> {
			static const int GP = ROT;
			static const int OP = BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, BIV> {
			static const int GP = ROT_VEC;
			static const int OP = TRI;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<VEC, TRI> {
			static const int GP = BIV;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<VEC, GLD> {
			static const int GP = MOT;
			static const int OP = TRS_DLL;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<VEC, ROT> {
			static const int GP = ROT_VEC;
			static const int OP = ROT_VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<VEC, MOT> {
			static const int GP = ROT_DFP;
			static const int OP = DLP_BIV;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<VEC, DIL> {
			static const int GP = DIL_VEC;
			static const int OP = DIL_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, TRV> {
			static const int GP = TRV_VEC;
			static const int OP = MNK_ORI_OP_PAR;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<VEC, MTD> {
			static const int GP = MTD_PSS;
			static const int OP = TRV_DRB;
			static const int IP = DIL_GLD;
		};
		
		template<> struct ProductIdx<VEC, TRS> {
			static const int GP = GLD;
			static const int OP = MNK_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<VEC, RTC> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<VEC, MTT> {
			static const int GP = RTC;
			static const int OP = DIL_CIR;
			static const int IP = TRT_HYP;
		};
		
		template<> struct ProductIdx<VEC, RTT> {
			static const int GP = RTT_VEC;
			static const int OP = GLD_IP_TNT;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<VEC, RTD> {
			static const int GP = RTD_PSS;
			static const int OP = RTD_PSS;
			static const int IP = DIL_VEC;
		};
		
		template<> struct ProductIdx<VEC, TVD> {
			static const int GP = TVD_VEC;
			static const int OP = ORI_STA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<VEC, TSD> {
			static const int GP = DIL_GLD;
			static const int OP = DIL_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<VEC, TRT> {
			static const int GP = RTC;
			static const int OP = DIL_CIR;
			static const int IP = DIL_PNT;
		};
		
		template<> struct ProductIdx<VEC, RVD> {
			static const int GP = MOT_ORI;
			static const int OP = TRS_TNB;
			static const int IP = TVD_VEC;
		};
		
		template<> struct ProductIdx<VEC, TST> {
			static const int GP = RTC;
			static const int OP = DIL_CIR;
			static const int IP = TRV_PNT;
		};
		
		template<> struct ProductIdx<VEC, TVT> {
			static const int GP = RTC;
			static const int OP = DIL_CIR;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<VEC, BST> {
			static const int GP = BST_PNT;
			static const int OP = MUV;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<BIV, SCA> {
			static const int GP = BIV;
			static const int OP = BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, ORI> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, INF> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, MNK> {
			static const int GP = MNK_BIV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, HYP> {
			static const int GP = HYP_BIV;
			static const int OP = HYP_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, PSS> {
			static const int GP = MNK_VEC;
			static const int OP = SCA;
			static const int IP = MNK_VEC;
		};
		
		template<> struct ProductIdx<BIV, PNT> {
			static const int GP = PNT_BIV;
			static const int OP = HYP_IP_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, PAR> {
			static const int GP = BST_BIV;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, CIR> {
			static const int GP = CIR_BIV;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<BIV, SPH> {
			static const int GP = SPH_BIV;
			static const int OP = SCA;
			static const int IP = BIV_IP_SPH;
		};
		
		template<> struct ProductIdx<BIV, STA> {
			static const int GP = ROT_STA;
			static const int OP = HYP_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DRV> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DRB> {
			static const int GP = ROT_INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<BIV, DRT> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<BIV, TNV> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TNB> {
			static const int GP = ROT_ORI;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<BIV, TNT> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<BIV, LIN> {
			static const int GP = ROT_LIN;
			static const int OP = PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<BIV, PLN> {
			static const int GP = PLN_BIV;
			static const int OP = SCA;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<BIV, FLP> {
			static const int GP = TRS_PLN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DFP> {
			static const int GP = GLD;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<BIV, DLL> {
			static const int GP = MOT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DLP> {
			static const int GP = DLP_BIV;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, VEC> {
			static const int GP = ROT_VEC;
			static const int OP = TRI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, BIV> {
			static const int GP = ROT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TRI> {
			static const int GP = VEC;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<BIV, GLD> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<BIV, ROT> {
			static const int GP = ROT;
			static const int OP = BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, MOT> {
			static const int GP = MOT;
			static const int OP = MNK_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<BIV, DIL> {
			static const int GP = DIL_BIV;
			static const int OP = DIL_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TRV> {
			static const int GP = TRV_BIV;
			static const int OP = MNK_ORI_OP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, MTD> {
			static const int GP = MTD;
			static const int OP = DIL_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<BIV, TRS> {
			static const int GP = TRS_DLL;
			static const int OP = MNK_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, RTC> {
			static const int GP = RTC;
			static const int OP = HYP_SPH;
			static const int IP = DIL_PNT;
		};
		
		template<> struct ProductIdx<BIV, MTT> {
			static const int GP = MTT;
			static const int OP = DIL_SPH;
			static const int IP = HYP_PNT;
		};
		
		template<> struct ProductIdx<BIV, RTT> {
			static const int GP = RTT;
			static const int OP = MNK_ORI_OP_CIR;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<BIV, RTD> {
			static const int GP = RTD;
			static const int OP = DIL_BIV;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<BIV, TVD> {
			static const int GP = TVD_BIV;
			static const int OP = TRS_TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TSD> {
			static const int GP = TSD_PLN;
			static const int OP = DIL_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TRT> {
			static const int GP = MTT;
			static const int OP = DIL_SPH;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<BIV, RVD> {
			static const int GP = RVD;
			static const int OP = TRS_TNT;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<BIV, TST> {
			static const int GP = MTT;
			static const int OP = DIL_SPH;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<BIV, TVT> {
			static const int GP = MTT;
			static const int OP = DIL_SPH;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<BIV, BST> {
			static const int GP = BST_BIV;
			static const int OP = DIL_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, SCA> {
			static const int GP = TRI;
			static const int OP = TRI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, ORI> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, INF> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, MNK> {
			static const int GP = PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, HYP> {
			static const int GP = HYP_PSS;
			static const int OP = HYP_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, PSS> {
			static const int GP = MNK;
			static const int OP = SCA;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<TRI, PNT> {
			static const int GP = MNK_SPH;
			static const int OP = HYP_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, PAR> {
			static const int GP = MNK_CIR;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, CIR> {
			static const int GP = MNK_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, SPH> {
			static const int GP = MNK_PNT;
			static const int OP = SCA;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRI, STA> {
			static const int GP = STA_TRI;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, DRV> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, DRB> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, DRT> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRI, TNV> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TNB> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TNT> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRI, LIN> {
			static const int GP = MNK_DLL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, PLN> {
			static const int GP = MNK_DLP;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRI, FLP> {
			static const int GP = TRS_PSS;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, DFP> {
			static const int GP = TRS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, DLL> {
			static const int GP = MNK_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, DLP> {
			static const int GP = MNK_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, VEC> {
			static const int GP = BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, BIV> {
			static const int GP = VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TRI> {
			static const int GP = SCA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, GLD> {
			static const int GP = TRS_DLL;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, ROT> {
			static const int GP = ROT_VEC;
			static const int OP = TRI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, MOT> {
			static const int GP = ROT_DFP;
			static const int OP = TRI;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRI, DIL> {
			static const int GP = DIL_PSS;
			static const int OP = DIL_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TRV> {
			static const int GP = TRV_TRI;
			static const int OP = TRI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, MTD> {
			static const int GP = MTD_PSS;
			static const int OP = DIL_PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRI, TRS> {
			static const int GP = DFP;
			static const int OP = TRI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, RTC> {
			static const int GP = MTT;
			static const int OP = HYP_PSS;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TRI, MTT> {
			static const int GP = RTC;
			static const int OP = DIL_PSS;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRI, RTT> {
			static const int GP = RTT_VEC;
			static const int OP = TRI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRI, RTD> {
			static const int GP = RTD_PSS;
			static const int OP = DIL_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TVD> {
			static const int GP = TVD_PSS;
			static const int OP = DIL_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TSD> {
			static const int GP = DIL_DFP;
			static const int OP = DIL_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TRT> {
			static const int GP = DIL_CIR;
			static const int OP = DIL_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, RVD> {
			static const int GP = MOT_ORI;
			static const int OP = DIL_PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRI, TST> {
			static const int GP = TRV_CIR;
			static const int OP = DIL_PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRI, TVT> {
			static const int GP = TRS_CIR;
			static const int OP = DIL_PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRI, BST> {
			static const int GP = BST_TRI;
			static const int OP = DIL_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<GLD, SCA> {
			static const int GP = GLD;
			static const int OP = GLD;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<GLD, ORI> {
			static const int GP = TRS_TNV;
			static const int OP = ORI_OP_GLD;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<GLD, INF> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<GLD, MNK> {
			static const int GP = TRS_LIN;
			static const int OP = MNK_VEC;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<GLD, HYP> {
			static const int GP = TRT;
			static const int OP = SPH_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<GLD, PSS> {
			static const int GP = TRS_PLN;
			static const int OP = SCA;
			static const int IP = TRS_PLN;
		};
		
		template<> struct ProductIdx<GLD, PNT> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<GLD, PAR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<GLD, CIR> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<GLD, SPH> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = PNT_DLL;
		};
		
		template<> struct ProductIdx<GLD, STA> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<GLD, DRV> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<GLD, DRB> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<GLD, DRT> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<GLD, TNV> {
			static const int GP = MOT_ORI;
			static const int OP = TNV_OP_GLD;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<GLD, TNB> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = GLD_IP_TNB;
		};
		
		template<> struct ProductIdx<GLD, TNT> {
			static const int GP = TRS_TNB;
			static const int OP = PSS;
			static const int IP = GLD_IP_TNT;
		};
		
		template<> struct ProductIdx<GLD, LIN> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<GLD, PLN> {
			static const int GP = ROT_LIN;
			static const int OP = PSS;
			static const int IP = TRS_LIN;
		};
		
		template<> struct ProductIdx<GLD, FLP> {
			static const int GP = TRS_LIN;
			static const int OP = LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<GLD, DFP> {
			static const int GP = TRS_DLL;
			static const int OP = DRT;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<GLD, DLL> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<GLD, DLP> {
			static const int GP = MOT;
			static const int OP = TRS_DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<GLD, VEC> {
			static const int GP = MOT;
			static const int OP = TRS_DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<GLD, BIV> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<GLD, TRI> {
			static const int GP = TRS_DLL;
			static const int OP = DRT;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<GLD, GLD> {
			static const int GP = MOT;
			static const int OP = TRS_DLL;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<GLD, ROT> {
			static const int GP = ROT_DFP;
			static const int OP = ROT_DFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<GLD, MOT> {
			static const int GP = ROT_DFP;
			static const int OP = ROT_DFP;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<GLD, DIL> {
			static const int GP = DIL_GLD;
			static const int OP = DIL_GLD;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<GLD, TRV> {
			static const int GP = RTC;
			static const int OP = MNK_PNT_DLL;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<GLD, MTD> {
			static const int GP = MTD_PSS;
			static const int OP = MTD_PSS;
			static const int IP = DIL_GLD;
		};
		
		template<> struct ProductIdx<GLD, TRS> {
			static const int GP = GLD;
			static const int OP = GLD;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<GLD, RTC> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<GLD, MTT> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<GLD, RTT> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = RTT_VEC;
		};
		
		template<> struct ProductIdx<GLD, RTD> {
			static const int GP = MTD_PSS;
			static const int OP = MTD_PSS;
			static const int IP = DIL_GLD;
		};
		
		template<> struct ProductIdx<GLD, TVD> {
			static const int GP = RTC;
			static const int OP = MNK_PNT_DLL;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<GLD, TSD> {
			static const int GP = DIL_GLD;
			static const int OP = DIL_GLD;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<GLD, TRT> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<GLD, RVD> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<GLD, TST> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<GLD, TVT> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<GLD, BST> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<ROT, SCA> {
			static const int GP = ROT;
			static const int OP = ROT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ROT, ORI> {
			static const int GP = ROT_ORI;
			static const int OP = ROT_ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<ROT, INF> {
			static const int GP = ROT_INF;
			static const int OP = ROT_INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<ROT, MNK> {
			static const int GP = ROT_MNK;
			static const int OP = ROT_MNK;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<ROT, HYP> {
			static const int GP = ROT_HYP;
			static const int OP = ROT_HYP;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<ROT, PSS> {
			static const int GP = ROT_PSS;
			static const int OP = PSS;
			static const int IP = ROT_PSS;
		};
		
		template<> struct ProductIdx<ROT, PNT> {
			static const int GP = ROT_PNT;
			static const int OP = ROT_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<ROT, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<ROT, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<ROT, SPH> {
			static const int GP = ROT_SPH;
			static const int OP = SPH;
			static const int IP = ROT_SPH;
		};
		
		template<> struct ProductIdx<ROT, STA> {
			static const int GP = ROT_STA;
			static const int OP = VEC_HYP_IP_SPH;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<ROT, DRV> {
			static const int GP = ROT_DRV;
			static const int OP = ROT_DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<ROT, DRB> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = ROT_INF;
		};
		
		template<> struct ProductIdx<ROT, DRT> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = ROT_DRV;
		};
		
		template<> struct ProductIdx<ROT, TNV> {
			static const int GP = ROT_TNV;
			static const int OP = ROT_TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<ROT, TNB> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = ROT_ORI;
		};
		
		template<> struct ProductIdx<ROT, TNT> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = ROT_TNV;
		};
		
		template<> struct ProductIdx<ROT, LIN> {
			static const int GP = ROT_LIN;
			static const int OP = PLN_DLP;
			static const int IP = TRS_LIN;
		};
		
		template<> struct ProductIdx<ROT, PLN> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = ROT_PLN;
		};
		
		template<> struct ProductIdx<ROT, FLP> {
			static const int GP = ROT_PLN;
			static const int OP = ROT_PLN;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<ROT, DFP> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<ROT, DLL> {
			static const int GP = MOT;
			static const int OP = TRS_DLL;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<ROT, DLP> {
			static const int GP = ROT_DFP;
			static const int OP = ROT_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<ROT, VEC> {
			static const int GP = ROT_VEC;
			static const int OP = ROT_VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ROT, BIV> {
			static const int GP = ROT;
			static const int OP = BIV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<ROT, TRI> {
			static const int GP = ROT_VEC;
			static const int OP = TRI;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<ROT, GLD> {
			static const int GP = ROT_DFP;
			static const int OP = ROT_DFP;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<ROT, ROT> {
			static const int GP = ROT;
			static const int OP = ROT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<ROT, MOT> {
			static const int GP = MOT;
			static const int OP = MOT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<ROT, DIL> {
			static const int GP = RTD;
			static const int OP = RTD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<ROT, TRV> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<ROT, MTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<ROT, TRS> {
			static const int GP = MOT;
			static const int OP = MOT;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<ROT, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<ROT, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<ROT, RTT> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<ROT, RTD> {
			static const int GP = RTD;
			static const int OP = RTD;
			static const int IP = RTD;
		};
		
		template<> struct ProductIdx<ROT, TVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<ROT, TSD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<ROT, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<ROT, RVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<ROT, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<ROT, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<ROT, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<MOT, SCA> {
			static const int GP = MOT;
			static const int OP = MOT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MOT, ORI> {
			static const int GP = MOT_ORI;
			static const int OP = RTT_PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<MOT, INF> {
			static const int GP = ROT_INF;
			static const int OP = ROT_INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<MOT, MNK> {
			static const int GP = ROT_PLN;
			static const int OP = ROT_MNK;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<MOT, HYP> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<MOT, PSS> {
			static const int GP = ROT_LIN;
			static const int OP = PSS;
			static const int IP = ROT_LIN;
		};
		
		template<> struct ProductIdx<MOT, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<MOT, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<MOT, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<MOT, SPH> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<MOT, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<MOT, DRV> {
			static const int GP = ROT_DRV;
			static const int OP = ROT_DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<MOT, DRB> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = ROT_INF;
		};
		
		template<> struct ProductIdx<MOT, DRT> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = ROT_DRV;
		};
		
		template<> struct ProductIdx<MOT, TNV> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<MOT, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<MOT, TNT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MOT, LIN> {
			static const int GP = ROT_LIN;
			static const int OP = PLN_DLP;
			static const int IP = TRS_LIN;
		};
		
		template<> struct ProductIdx<MOT, PLN> {
			static const int GP = ROT_PLN;
			static const int OP = PLN;
			static const int IP = ROT_PLN;
		};
		
		template<> struct ProductIdx<MOT, FLP> {
			static const int GP = ROT_PLN;
			static const int OP = ROT_PLN;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<MOT, DFP> {
			static const int GP = ROT_DFP;
			static const int OP = DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<MOT, DLL> {
			static const int GP = MOT;
			static const int OP = TRS_DLL;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<MOT, DLP> {
			static const int GP = ROT_DFP;
			static const int OP = ROT_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<MOT, VEC> {
			static const int GP = ROT_DFP;
			static const int OP = DLP_BIV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MOT, BIV> {
			static const int GP = MOT;
			static const int OP = MNK_PLN;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MOT, TRI> {
			static const int GP = ROT_DFP;
			static const int OP = TRI;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<MOT, GLD> {
			static const int GP = ROT_DFP;
			static const int OP = ROT_DFP;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<MOT, ROT> {
			static const int GP = MOT;
			static const int OP = MOT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MOT, MOT> {
			static const int GP = MOT;
			static const int OP = MOT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<MOT, DIL> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<MOT, TRV> {
			static const int GP = MTT;
			static const int OP = BST_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<MOT, MTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<MOT, TRS> {
			static const int GP = MOT;
			static const int OP = MOT;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<MOT, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<MOT, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<MOT, RTT> {
			static const int GP = MTT;
			static const int OP = BST_BIV;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MOT, RTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TRV_DRV;
		};
		
		template<> struct ProductIdx<MOT, TVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<MOT, TSD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<MOT, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<MOT, RVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<MOT, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<MOT, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<MOT, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<DIL, SCA> {
			static const int GP = DIL;
			static const int OP = DIL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DIL, ORI> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<DIL, INF> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DIL, MNK> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<DIL, HYP> {
			static const int GP = HYP;
			static const int OP = HYP;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<DIL, PSS> {
			static const int GP = DIL_PSS;
			static const int OP = PSS;
			static const int IP = DIL_PSS;
		};
		
		template<> struct ProductIdx<DIL, PNT> {
			static const int GP = DIL_PNT;
			static const int OP = DIL_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DIL, PAR> {
			static const int GP = TRT;
			static const int OP = MUV;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<DIL, CIR> {
			static const int GP = DIL_CIR;
			static const int OP = BST_PSS;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<DIL, SPH> {
			static const int GP = DIL_SPH;
			static const int OP = SPH;
			static const int IP = DIL_SPH;
		};
		
		template<> struct ProductIdx<DIL, STA> {
			static const int GP = DIL_STA;
			static const int OP = DIL_STA;
			static const int IP = STA;
		};
		
		template<> struct ProductIdx<DIL, DRV> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DIL, DRB> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<DIL, DRT> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = DRT;
		};
		
		template<> struct ProductIdx<DIL, TNV> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<DIL, TNB> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<DIL, TNT> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = TNT;
		};
		
		template<> struct ProductIdx<DIL, LIN> {
			static const int GP = DIL_LIN;
			static const int OP = LIN;
			static const int IP = DIL_LIN;
		};
		
		template<> struct ProductIdx<DIL, PLN> {
			static const int GP = DIL_PLN;
			static const int OP = PLN;
			static const int IP = DIL_PLN;
		};
		
		template<> struct ProductIdx<DIL, FLP> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DIL, DFP> {
			static const int GP = DIL_DFP;
			static const int OP = DIL_DFP;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<DIL, DLL> {
			static const int GP = DIL_DLL;
			static const int OP = DIL_DLL;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<DIL, DLP> {
			static const int GP = DIL_DLP;
			static const int OP = DIL_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DIL, VEC> {
			static const int GP = DIL_VEC;
			static const int OP = DIL_VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DIL, BIV> {
			static const int GP = DIL_BIV;
			static const int OP = DIL_BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<DIL, TRI> {
			static const int GP = DIL_PSS;
			static const int OP = DIL_PSS;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<DIL, GLD> {
			static const int GP = DIL_GLD;
			static const int OP = DIL_GLD;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<DIL, ROT> {
			static const int GP = RTD;
			static const int OP = RTD;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<DIL, MOT> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<DIL, DIL> {
			static const int GP = DIL;
			static const int OP = DIL;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<DIL, TRV> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<DIL, MTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<DIL, TRS> {
			static const int GP = TSD;
			static const int OP = TSD;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<DIL, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<DIL, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<DIL, RTT> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<DIL, RTD> {
			static const int GP = RTD;
			static const int OP = RTD;
			static const int IP = RTD;
		};
		
		template<> struct ProductIdx<DIL, TVD> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<DIL, TSD> {
			static const int GP = TSD;
			static const int OP = TSD;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DIL, TRT> {
			static const int GP = TRT;
			static const int OP = TRT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<DIL, RVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<DIL, TST> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<DIL, TVT> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<DIL, BST> {
			static const int GP = TRT;
			static const int OP = TRT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TRV, SCA> {
			static const int GP = TRV;
			static const int OP = TRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRV, ORI> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRV, INF> {
			static const int GP = DIL_DLP;
			static const int OP = MNK_DLP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRV, MNK> {
			static const int GP = TRV_MNK;
			static const int OP = MNK;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<TRV, HYP> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRV, PSS> {
			static const int GP = TRV_PSS;
			static const int OP = PSS;
			static const int IP = TRV_PSS;
		};
		
		template<> struct ProductIdx<TRV, PNT> {
			static const int GP = TRV_PNT;
			static const int OP = TRV_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TRV, PAR> {
			static const int GP = TST;
			static const int OP = PNT_ORI_OP_PAR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TRV, CIR> {
			static const int GP = TRV_CIR;
			static const int OP = BST_PSS;
			static const int IP = PNT_ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<TRV, SPH> {
			static const int GP = TRV_SPH;
			static const int OP = SPH;
			static const int IP = TRV_SPH;
		};
		
		template<> struct ProductIdx<TRV, STA> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<TRV, DRV> {
			static const int GP = TRV_DRV;
			static const int OP = MNK_DLL;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TRV, DRB> {
			static const int GP = TRV_DRB;
			static const int OP = TRS_PSS;
			static const int IP = MNK_LIN;
		};
		
		template<> struct ProductIdx<TRV, DRT> {
			static const int GP = DIL_PLN;
			static const int OP = DRT;
			static const int IP = MNK_PLN;
		};
		
		template<> struct ProductIdx<TRV, TNV> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TRV, TNB> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<TRV, TNT> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = TNT;
		};
		
		template<> struct ProductIdx<TRV, LIN> {
			static const int GP = TRV_CIR;
			static const int OP = PLN_DLP;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TRV, PLN> {
			static const int GP = TRV_SPH;
			static const int OP = PLN;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TRV, FLP> {
			static const int GP = TRT;
			static const int OP = PLN_BIV;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TRV, DFP> {
			static const int GP = DIL_CIR;
			static const int OP = DIL_DFP;
			static const int IP = DLP_BIV;
		};
		
		template<> struct ProductIdx<TRV, DLL> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TRV, DLP> {
			static const int GP = TRV_PNT;
			static const int OP = MUV;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TRV, VEC> {
			static const int GP = TRV_VEC;
			static const int OP = MNK_ORI_OP_PAR;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TRV, BIV> {
			static const int GP = TRV_BIV;
			static const int OP = MNK_ORI_OP_CIR;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TRV, TRI> {
			static const int GP = TRV_TRI;
			static const int OP = TRI;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<TRV, GLD> {
			static const int GP = RTC;
			static const int OP = MNK_PNT_DLL;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TRV, ROT> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TRV, MOT> {
			static const int GP = MTT;
			static const int OP = BST_BIV;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<TRV, DIL> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TRV, TRV> {
			static const int GP = TRV;
			static const int OP = TRV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TRV, MTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TRV, TRS> {
			static const int GP = TRT;
			static const int OP = MNK_PAR;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TRV, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<TRV, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TRV, RTT> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TRV, RTD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TRS_TNV;
		};
		
		template<> struct ProductIdx<TRV, TVD> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TRV, TSD> {
			static const int GP = TRT;
			static const int OP = BST_MNK;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TRV, TRT> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TRV, RVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<TRV, TST> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TRV, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TRV, BST> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<MTD, SCA> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MTD, ORI> {
			static const int GP = MOT_ORI;
			static const int OP = RTT_PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<MTD, INF> {
			static const int GP = ROT_INF;
			static const int OP = ROT_INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<MTD, MNK> {
			static const int GP = MTD;
			static const int OP = ROT_MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<MTD, HYP> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<MTD, PSS> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = MTD_PSS;
		};
		
		template<> struct ProductIdx<MTD, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<MTD, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<MTD, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<MTD, SPH> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<MTD, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<MTD, DRV> {
			static const int GP = ROT_DRV;
			static const int OP = ROT_DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<MTD, DRB> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = ROT_INF;
		};
		
		template<> struct ProductIdx<MTD, DRT> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = ROT_DRV;
		};
		
		template<> struct ProductIdx<MTD, TNV> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<MTD, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<MTD, TNT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MTD, LIN> {
			static const int GP = MTD_PSS;
			static const int OP = PLN_DLP;
			static const int IP = DIL_GLD;
		};
		
		template<> struct ProductIdx<MTD, PLN> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<MTD, FLP> {
			static const int GP = MTD;
			static const int OP = ROT_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<MTD, DFP> {
			static const int GP = MTD_PSS;
			static const int OP = DIL_DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<MTD, DLL> {
			static const int GP = MTD;
			static const int OP = TSD_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<MTD, DLP> {
			static const int GP = MTD_PSS;
			static const int OP = MTD_PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<MTD, VEC> {
			static const int GP = MTD_PSS;
			static const int OP = TRV_DRB;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MTD, BIV> {
			static const int GP = MTD;
			static const int OP = DIL_PLN;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MTD, TRI> {
			static const int GP = MTD_PSS;
			static const int OP = DIL_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<MTD, GLD> {
			static const int GP = MTD_PSS;
			static const int OP = MTD_PSS;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<MTD, ROT> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MTD, MOT> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<MTD, DIL> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<MTD, TRV> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<MTD, MTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<MTD, TRS> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<MTD, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<MTD, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<MTD, RTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MTD, RTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TRV_DRV;
		};
		
		template<> struct ProductIdx<MTD, TVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<MTD, TSD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<MTD, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<MTD, RVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<MTD, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<MTD, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<MTD, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TRS, SCA> {
			static const int GP = TRS;
			static const int OP = TRS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRS, ORI> {
			static const int GP = TRS_ORI;
			static const int OP = MNK_ORI_IP_PAR;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRS, INF> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRS, MNK> {
			static const int GP = FLP;
			static const int OP = MNK;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<TRS, HYP> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRS, PSS> {
			static const int GP = TRS_PSS;
			static const int OP = PSS;
			static const int IP = TRS_PSS;
		};
		
		template<> struct ProductIdx<TRS, PNT> {
			static const int GP = TRS_PNT;
			static const int OP = TRS_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TRS, PAR> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TRS, CIR> {
			static const int GP = TRS_CIR;
			static const int OP = BST_PSS;
			static const int IP = PNT_DLL;
		};
		
		template<> struct ProductIdx<TRS, SPH> {
			static const int GP = TRS_SPH;
			static const int OP = SPH;
			static const int IP = TRS_SPH;
		};
		
		template<> struct ProductIdx<TRS, STA> {
			static const int GP = TVT;
			static const int OP = MUV;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<TRS, DRV> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<TRS, DRB> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<TRS, DRT> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = DRT;
		};
		
		template<> struct ProductIdx<TRS, TNV> {
			static const int GP = TRS_TNV;
			static const int OP = MNK_ORI_IP_CIR;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TRS, TNB> {
			static const int GP = TRS_TNB;
			static const int OP = TRV_PSS;
			static const int IP = MNK_ORI_OP_PAR;
		};
		
		template<> struct ProductIdx<TRS, TNT> {
			static const int GP = TRS_TNT;
			static const int OP = TNT;
			static const int IP = MNK_ORI_OP_CIR;
		};
		
		template<> struct ProductIdx<TRS, LIN> {
			static const int GP = TRS_LIN;
			static const int OP = LIN;
			static const int IP = TRS_LIN;
		};
		
		template<> struct ProductIdx<TRS, PLN> {
			static const int GP = TRS_PLN;
			static const int OP = PLN;
			static const int IP = TRS_PLN;
		};
		
		template<> struct ProductIdx<TRS, FLP> {
			static const int GP = FLP;
			static const int OP = FLP;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<TRS, DFP> {
			static const int GP = DFP;
			static const int OP = DFP;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<TRS, DLL> {
			static const int GP = TRS_DLL;
			static const int OP = TRS_DLL;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<TRS, DLP> {
			static const int GP = GLD;
			static const int OP = GLD;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TRS, VEC> {
			static const int GP = GLD;
			static const int OP = MNK_LIN;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TRS, BIV> {
			static const int GP = TRS_DLL;
			static const int OP = MNK_PLN;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TRS, TRI> {
			static const int GP = DFP;
			static const int OP = TRI;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<TRS, GLD> {
			static const int GP = GLD;
			static const int OP = GLD;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TRS, ROT> {
			static const int GP = MOT;
			static const int OP = MOT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TRS, MOT> {
			static const int GP = MOT;
			static const int OP = MOT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<TRS, DIL> {
			static const int GP = TSD;
			static const int OP = TSD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TRS, TRV> {
			static const int GP = TRT;
			static const int OP = MNK_PAR;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TRS, MTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<TRS, TRS> {
			static const int GP = TRS;
			static const int OP = TRS;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TRS, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<TRS, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TRS, RTT> {
			static const int GP = MTT;
			static const int OP = BST_BIV;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TRS, RTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TRV_DRV;
		};
		
		template<> struct ProductIdx<TRS, TVD> {
			static const int GP = TRT;
			static const int OP = BST_MNK;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TRS, TSD> {
			static const int GP = TSD;
			static const int OP = TSD;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TRS, TRT> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TRS, RVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TRS, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TRS, TVT> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TRS, BST> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTC, SCA> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, ORI> {
			static const int GP = RVD;
			static const int OP = RTT_MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, INF> {
			static const int GP = MTD;
			static const int OP = ROT_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, MNK> {
			static const int GP = RTC;
			static const int OP = ROT_PSS;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RTC, HYP> {
			static const int GP = MTT;
			static const int OP = ROT_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, PSS> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RTC, PNT> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, PAR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTC, CIR> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTC, SPH> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RTC, STA> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTC, DRV> {
			static const int GP = MTD_PSS;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTC, DRB> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RTC, DRT> {
			static const int GP = MTD_PSS;
			static const int OP = PSS;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<RTC, TNV> {
			static const int GP = MOT_ORI;
			static const int OP = TNV_OP_GLD;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<RTC, TNB> {
			static const int GP = RVD;
			static const int OP = ORI_OP_CIR;
			static const int IP = GLD_IP_TNB;
		};
		
		template<> struct ProductIdx<RTC, TNT> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = RTT_VEC;
		};
		
		template<> struct ProductIdx<RTC, LIN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTC, PLN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RTC, FLP> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTC, DFP> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RTC, DLL> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTC, DLP> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, VEC> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, BIV> {
			static const int GP = RTC;
			static const int OP = HYP_SPH;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<RTC, TRI> {
			static const int GP = MTT;
			static const int OP = HYP_PSS;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RTC, GLD> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RTC, ROT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<RTC, MOT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<RTC, DIL> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RTC, TRV> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = ORI_IP_PAR;
		};
		
		template<> struct ProductIdx<RTC, MTD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RTC, TRS> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTC, RTC> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RTC, MTT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RTC, RTT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTT_VEC;
		};
		
		template<> struct ProductIdx<RTC, RTD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = TRT_HYP;
		};
		
		template<> struct ProductIdx<RTC, TVD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTC, TSD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTC, TRT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = TRT_HYP;
		};
		
		template<> struct ProductIdx<RTC, RVD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RTC, TST> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RTC, TVT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RTC, BST> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<MTT, SCA> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MTT, ORI> {
			static const int GP = MOT_ORI;
			static const int OP = RTT_PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<MTT, INF> {
			static const int GP = MTD_PSS;
			static const int OP = ROT_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<MTT, MNK> {
			static const int GP = MTT;
			static const int OP = ROT_MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<MTT, HYP> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<MTT, PSS> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<MTT, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<MTT, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<MTT, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<MTT, SPH> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<MTT, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<MTT, DRV> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<MTT, DRB> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<MTT, DRT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<MTT, TNV> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<MTT, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<MTT, TNT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MTT, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<MTT, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<MTT, FLP> {
			static const int GP = MTT;
			static const int OP = ROT_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<MTT, DFP> {
			static const int GP = RTC;
			static const int OP = DIL_DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<MTT, DLL> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<MTT, DLP> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<MTT, VEC> {
			static const int GP = RTC;
			static const int OP = DIL_CIR;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MTT, BIV> {
			static const int GP = MTT;
			static const int OP = DIL_SPH;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MTT, TRI> {
			static const int GP = RTC;
			static const int OP = DIL_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<MTT, GLD> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<MTT, ROT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MTT, MOT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<MTT, DIL> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<MTT, TRV> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<MTT, MTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<MTT, TRS> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<MTT, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<MTT, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<MTT, RTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MTT, RTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<MTT, TVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<MTT, TSD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<MTT, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<MTT, RVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<MTT, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<MTT, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<MTT, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTT, SCA> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTT, ORI> {
			static const int GP = ROT_ORI;
			static const int OP = ROT_ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<RTT, INF> {
			static const int GP = MTD_PSS;
			static const int OP = ROT_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<RTT, MNK> {
			static const int GP = RTT_MNK;
			static const int OP = ROT_MNK;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<RTT, HYP> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RTT, PSS> {
			static const int GP = RTT_PSS;
			static const int OP = PSS;
			static const int IP = RTT_PSS;
		};
		
		template<> struct ProductIdx<RTT, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTT, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTT, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RTT, SPH> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RTT, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<RTT, DRV> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<RTT, DRB> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<RTT, DRT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<RTT, TNV> {
			static const int GP = ROT_TNV;
			static const int OP = ROT_TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<RTT, TNB> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = ROT_ORI;
		};
		
		template<> struct ProductIdx<RTT, TNT> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = ROT_TNV;
		};
		
		template<> struct ProductIdx<RTT, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<RTT, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<RTT, FLP> {
			static const int GP = MTT;
			static const int OP = ROT_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<RTT, DFP> {
			static const int GP = RTC;
			static const int OP = DIL_DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<RTT, DLL> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RTT, DLP> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTT, VEC> {
			static const int GP = RTT_VEC;
			static const int OP = GLD_IP_TNT;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<RTT, BIV> {
			static const int GP = RTT;
			static const int OP = MNK_ORI_OP_CIR;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RTT, TRI> {
			static const int GP = RTT_VEC;
			static const int OP = TRI;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<RTT, GLD> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<RTT, ROT> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RTT, MOT> {
			static const int GP = MTT;
			static const int OP = BST_BIV;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<RTT, DIL> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<RTT, TRV> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<RTT, MTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<RTT, TRS> {
			static const int GP = MTT;
			static const int OP = BST_BIV;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<RTT, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<RTT, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RTT, RTT> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<RTT, RTD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TRS_TNV;
		};
		
		template<> struct ProductIdx<RTT, TVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<RTT, TSD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<RTT, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<RTT, RVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<RTT, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<RTT, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<RTT, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTD, SCA> {
			static const int GP = RTD;
			static const int OP = RTD;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTD, ORI> {
			static const int GP = ROT_ORI;
			static const int OP = ROT_ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<RTD, INF> {
			static const int GP = ROT_INF;
			static const int OP = ROT_INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<RTD, MNK> {
			static const int GP = RTD;
			static const int OP = ROT_MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<RTD, HYP> {
			static const int GP = ROT_HYP;
			static const int OP = ROT_HYP;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RTD, PSS> {
			static const int GP = RTD_PSS;
			static const int OP = PSS;
			static const int IP = RTD_PSS;
		};
		
		template<> struct ProductIdx<RTD, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTD, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTD, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RTD, SPH> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RTD, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<RTD, DRV> {
			static const int GP = ROT_DRV;
			static const int OP = ROT_DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<RTD, DRB> {
			static const int GP = ROT_INF;
			static const int OP = DRB;
			static const int IP = ROT_INF;
		};
		
		template<> struct ProductIdx<RTD, DRT> {
			static const int GP = ROT_DRV;
			static const int OP = DRT;
			static const int IP = ROT_DRV;
		};
		
		template<> struct ProductIdx<RTD, TNV> {
			static const int GP = ROT_TNV;
			static const int OP = ROT_TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<RTD, TNB> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = ROT_ORI;
		};
		
		template<> struct ProductIdx<RTD, TNT> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = ROT_TNV;
		};
		
		template<> struct ProductIdx<RTD, LIN> {
			static const int GP = MTD_PSS;
			static const int OP = PLN_DLP;
			static const int IP = DIL_GLD;
		};
		
		template<> struct ProductIdx<RTD, PLN> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<RTD, FLP> {
			static const int GP = MTD;
			static const int OP = ROT_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<RTD, DFP> {
			static const int GP = MTD_PSS;
			static const int OP = DIL_DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<RTD, DLL> {
			static const int GP = MTD;
			static const int OP = TSD_PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RTD, DLP> {
			static const int GP = MTD_PSS;
			static const int OP = MTD_PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTD, VEC> {
			static const int GP = RTD_PSS;
			static const int OP = RTD_PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<RTD, BIV> {
			static const int GP = RTD;
			static const int OP = DIL_BIV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RTD, TRI> {
			static const int GP = RTD_PSS;
			static const int OP = DIL_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<RTD, GLD> {
			static const int GP = MTD_PSS;
			static const int OP = MTD_PSS;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<RTD, ROT> {
			static const int GP = RTD;
			static const int OP = RTD;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RTD, MOT> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<RTD, DIL> {
			static const int GP = RTD;
			static const int OP = RTD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<RTD, TRV> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<RTD, MTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<RTD, TRS> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<RTD, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<RTD, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RTD, RTT> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<RTD, RTD> {
			static const int GP = RTD;
			static const int OP = RTD;
			static const int IP = RTD;
		};
		
		template<> struct ProductIdx<RTD, TVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<RTD, TSD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<RTD, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<RTD, RVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<RTD, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<RTD, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<RTD, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TVD, SCA> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TVD, ORI> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TVD, INF> {
			static const int GP = DIL_DLP;
			static const int OP = MNK_DLP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TVD, MNK> {
			static const int GP = TVD;
			static const int OP = MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TVD, HYP> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TVD, PSS> {
			static const int GP = TVD_PSS;
			static const int OP = PSS;
			static const int IP = TVD_PSS;
		};
		
		template<> struct ProductIdx<TVD, PNT> {
			static const int GP = TRV_PNT;
			static const int OP = TRV_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TVD, PAR> {
			static const int GP = TST;
			static const int OP = PNT_ORI_OP_PAR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TVD, CIR> {
			static const int GP = TRV_CIR;
			static const int OP = BST_PSS;
			static const int IP = PNT_ORI_IP_CIR;
		};
		
		template<> struct ProductIdx<TVD, SPH> {
			static const int GP = TRV_SPH;
			static const int OP = SPH;
			static const int IP = TRV_SPH;
		};
		
		template<> struct ProductIdx<TVD, STA> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<TVD, DRV> {
			static const int GP = TRV_DRV;
			static const int OP = MNK_DLL;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TVD, DRB> {
			static const int GP = TRV_DRB;
			static const int OP = TRS_PSS;
			static const int IP = MNK_LIN;
		};
		
		template<> struct ProductIdx<TVD, DRT> {
			static const int GP = DIL_PLN;
			static const int OP = DRT;
			static const int IP = MNK_PLN;
		};
		
		template<> struct ProductIdx<TVD, TNV> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TVD, TNB> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<TVD, TNT> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = TNT;
		};
		
		template<> struct ProductIdx<TVD, LIN> {
			static const int GP = TRV_CIR;
			static const int OP = PLN_DLP;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TVD, PLN> {
			static const int GP = TRV_SPH;
			static const int OP = PLN;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TVD, FLP> {
			static const int GP = TRT;
			static const int OP = PLN_BIV;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TVD, DFP> {
			static const int GP = DIL_CIR;
			static const int OP = DIL_DFP;
			static const int IP = DLP_BIV;
		};
		
		template<> struct ProductIdx<TVD, DLL> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TVD, DLP> {
			static const int GP = TRV_PNT;
			static const int OP = MUV;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TVD, VEC> {
			static const int GP = TVD_VEC;
			static const int OP = ORI_STA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TVD, BIV> {
			static const int GP = TVD_BIV;
			static const int OP = TRS_TNT;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TVD, TRI> {
			static const int GP = TVD_PSS;
			static const int OP = DIL_PSS;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<TVD, GLD> {
			static const int GP = RTC;
			static const int OP = MNK_PNT_DLL;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TVD, ROT> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TVD, MOT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<TVD, DIL> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TVD, TRV> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TVD, MTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TVD, TRS> {
			static const int GP = TRT;
			static const int OP = BST_MNK;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TVD, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<TVD, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TVD, RTT> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TVD, RTD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TRS_TNV;
		};
		
		template<> struct ProductIdx<TVD, TVD> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TVD, TSD> {
			static const int GP = TRT;
			static const int OP = BST_MNK;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TVD, TRT> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TVD, RVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<TVD, TST> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TVD, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TVD, BST> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TSD, SCA> {
			static const int GP = TSD;
			static const int OP = TSD;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TSD, ORI> {
			static const int GP = TRS_ORI;
			static const int OP = MNK_ORI_IP_PAR;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TSD, INF> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TSD, MNK> {
			static const int GP = TSD;
			static const int OP = MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TSD, HYP> {
			static const int GP = DIL_PNT;
			static const int OP = MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TSD, PSS> {
			static const int GP = DIL_DFP;
			static const int OP = PSS;
			static const int IP = DIL_DFP;
		};
		
		template<> struct ProductIdx<TSD, PNT> {
			static const int GP = TRS_PNT;
			static const int OP = TRS_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TSD, PAR> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TSD, CIR> {
			static const int GP = TRS_CIR;
			static const int OP = BST_PSS;
			static const int IP = PNT_DLL;
		};
		
		template<> struct ProductIdx<TSD, SPH> {
			static const int GP = TRS_SPH;
			static const int OP = SPH;
			static const int IP = TRS_SPH;
		};
		
		template<> struct ProductIdx<TSD, STA> {
			static const int GP = TVT;
			static const int OP = MUV;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<TSD, DRV> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<TSD, DRB> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<TSD, DRT> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = DRT;
		};
		
		template<> struct ProductIdx<TSD, TNV> {
			static const int GP = TRS_TNV;
			static const int OP = MNK_ORI_IP_CIR;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TSD, TNB> {
			static const int GP = TRS_TNB;
			static const int OP = TRV_PSS;
			static const int IP = MNK_ORI_OP_PAR;
		};
		
		template<> struct ProductIdx<TSD, TNT> {
			static const int GP = TRS_TNT;
			static const int OP = TNT;
			static const int IP = MNK_ORI_OP_CIR;
		};
		
		template<> struct ProductIdx<TSD, LIN> {
			static const int GP = DIL_GLD;
			static const int OP = LIN;
			static const int IP = DIL_GLD;
		};
		
		template<> struct ProductIdx<TSD, PLN> {
			static const int GP = TSD_PLN;
			static const int OP = PLN;
			static const int IP = TSD_PLN;
		};
		
		template<> struct ProductIdx<TSD, FLP> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TSD, DFP> {
			static const int GP = DIL_DFP;
			static const int OP = DIL_DFP;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<TSD, DLL> {
			static const int GP = TSD_PLN;
			static const int OP = TSD_PLN;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<TSD, DLP> {
			static const int GP = DIL_GLD;
			static const int OP = DIL_GLD;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TSD, VEC> {
			static const int GP = DIL_GLD;
			static const int OP = DIL_LIN;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TSD, BIV> {
			static const int GP = TSD_PLN;
			static const int OP = DIL_PLN;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TSD, TRI> {
			static const int GP = DIL_DFP;
			static const int OP = DIL_PSS;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<TSD, GLD> {
			static const int GP = DIL_GLD;
			static const int OP = DIL_GLD;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TSD, ROT> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TSD, MOT> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<TSD, DIL> {
			static const int GP = TSD;
			static const int OP = TSD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TSD, TRV> {
			static const int GP = TRT;
			static const int OP = BST_MNK;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TSD, MTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<TSD, TRS> {
			static const int GP = TSD;
			static const int OP = TSD;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TSD, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<TSD, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TSD, RTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TSD, RTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = TRV_DRV;
		};
		
		template<> struct ProductIdx<TSD, TVD> {
			static const int GP = TRT;
			static const int OP = BST_MNK;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TSD, TSD> {
			static const int GP = TSD;
			static const int OP = TSD;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TSD, TRT> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TSD, RVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TSD, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TSD, TVT> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TSD, BST> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TRT, SCA> {
			static const int GP = TRT;
			static const int OP = TRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRT, ORI> {
			static const int GP = TVD_VEC;
			static const int OP = TRV_MNK_VEC;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRT, INF> {
			static const int GP = DIL_GLD;
			static const int OP = TRS_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRT, MNK> {
			static const int GP = TRT;
			static const int OP = ROT_MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TRT, HYP> {
			static const int GP = TRT_HYP;
			static const int OP = VEC_BIV_IP_SPH;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRT, PSS> {
			static const int GP = DIL_CIR;
			static const int OP = PSS;
			static const int IP = DIL_CIR;
		};
		
		template<> struct ProductIdx<TRT, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TRT, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TRT, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<TRT, SPH> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TRT, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<TRT, DRV> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TRT, DRB> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TRT, DRT> {
			static const int GP = TSD_PLN;
			static const int OP = DRT;
			static const int IP = TRS_DLL;
		};
		
		template<> struct ProductIdx<TRT, TNV> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TRT, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<TRT, TNT> {
			static const int GP = TVD_BIV;
			static const int OP = TNT;
			static const int IP = TRV_BIV;
		};
		
		template<> struct ProductIdx<TRT, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<TRT, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TRT, FLP> {
			static const int GP = TVT;
			static const int OP = ROT_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TRT, DFP> {
			static const int GP = TRS_CIR;
			static const int OP = DIL_DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<TRT, DLL> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TRT, DLP> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TRT, VEC> {
			static const int GP = RTC;
			static const int OP = DIL_CIR;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TRT, BIV> {
			static const int GP = MTT;
			static const int OP = DIL_SPH;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TRT, TRI> {
			static const int GP = DIL_CIR;
			static const int OP = DIL_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<TRT, GLD> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TRT, ROT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TRT, MOT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<TRT, DIL> {
			static const int GP = TRT;
			static const int OP = TRT;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TRT, TRV> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TRT, MTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TRT, TRS> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TRT, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<TRT, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TRT, RTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TRT, RTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TRT, TVD> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TRT, TSD> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TRT, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TRT, RVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TRT, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TRT, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TRT, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RVD, SCA> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RVD, ORI> {
			static const int GP = ROT_ORI;
			static const int OP = ROT_ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<RVD, INF> {
			static const int GP = MTD_PSS;
			static const int OP = ROT_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<RVD, MNK> {
			static const int GP = RVD;
			static const int OP = ROT_MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<RVD, HYP> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RVD, PSS> {
			static const int GP = MOT_ORI;
			static const int OP = PSS;
			static const int IP = MOT_ORI;
		};
		
		template<> struct ProductIdx<RVD, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RVD, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RVD, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<RVD, SPH> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RVD, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<RVD, DRV> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<RVD, DRB> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<RVD, DRT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<RVD, TNV> {
			static const int GP = ROT_TNV;
			static const int OP = ROT_TNV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<RVD, TNB> {
			static const int GP = ROT_ORI;
			static const int OP = TNB;
			static const int IP = ROT_ORI;
		};
		
		template<> struct ProductIdx<RVD, TNT> {
			static const int GP = ROT_TNV;
			static const int OP = TNT;
			static const int IP = ROT_TNV;
		};
		
		template<> struct ProductIdx<RVD, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<RVD, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<RVD, FLP> {
			static const int GP = MTT;
			static const int OP = ROT_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<RVD, DFP> {
			static const int GP = RTC;
			static const int OP = DIL_DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<RVD, DLL> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RVD, DLP> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RVD, VEC> {
			static const int GP = MOT_ORI;
			static const int OP = TRS_TNB;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<RVD, BIV> {
			static const int GP = RVD;
			static const int OP = TRS_TNT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RVD, TRI> {
			static const int GP = MOT_ORI;
			static const int OP = DIL_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<RVD, GLD> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<RVD, ROT> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RVD, MOT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<RVD, DIL> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<RVD, TRV> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<RVD, MTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<RVD, TRS> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<RVD, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<RVD, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RVD, RTT> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<RVD, RTD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TRS_TNV;
		};
		
		template<> struct ProductIdx<RVD, TVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<RVD, TSD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<RVD, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<RVD, RVD> {
			static const int GP = RVD;
			static const int OP = RVD;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<RVD, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<RVD, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<RVD, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TST, SCA> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TST, ORI> {
			static const int GP = TVD_VEC;
			static const int OP = TRV_MNK_VEC;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TST, INF> {
			static const int GP = MTD_PSS;
			static const int OP = ROT_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TST, MNK> {
			static const int GP = TST;
			static const int OP = ROT_MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TST, HYP> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TST, PSS> {
			static const int GP = TRV_CIR;
			static const int OP = PSS;
			static const int IP = TRV_CIR;
		};
		
		template<> struct ProductIdx<TST, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TST, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TST, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<TST, SPH> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TST, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<TST, DRV> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TST, DRB> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TST, DRT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<TST, TNV> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TST, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<TST, TNT> {
			static const int GP = TVD_BIV;
			static const int OP = TNT;
			static const int IP = TRV_BIV;
		};
		
		template<> struct ProductIdx<TST, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<TST, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TST, FLP> {
			static const int GP = MTT;
			static const int OP = ROT_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TST, DFP> {
			static const int GP = RTC;
			static const int OP = DIL_DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<TST, DLL> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TST, DLP> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TST, VEC> {
			static const int GP = RTC;
			static const int OP = DIL_CIR;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TST, BIV> {
			static const int GP = MTT;
			static const int OP = DIL_SPH;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TST, TRI> {
			static const int GP = TRV_CIR;
			static const int OP = DIL_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<TST, GLD> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TST, ROT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TST, MOT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<TST, DIL> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TST, TRV> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TST, MTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TST, TRS> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TST, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<TST, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TST, RTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TST, RTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TST, TVD> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TST, TSD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TST, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TST, RVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TST, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TST, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TST, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TVT, SCA> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TVT, ORI> {
			static const int GP = MOT_ORI;
			static const int OP = RTT_PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TVT, INF> {
			static const int GP = DIL_GLD;
			static const int OP = TRS_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TVT, MNK> {
			static const int GP = TVT;
			static const int OP = ROT_MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TVT, HYP> {
			static const int GP = RTC;
			static const int OP = ROT_MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TVT, PSS> {
			static const int GP = TRS_CIR;
			static const int OP = PSS;
			static const int IP = TRS_CIR;
		};
		
		template<> struct ProductIdx<TVT, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TVT, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TVT, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<TVT, SPH> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TVT, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<TVT, DRV> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TVT, DRB> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TVT, DRT> {
			static const int GP = TSD_PLN;
			static const int OP = DRT;
			static const int IP = TRS_DLL;
		};
		
		template<> struct ProductIdx<TVT, TNV> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TVT, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<TVT, TNT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TVT, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<TVT, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TVT, FLP> {
			static const int GP = TVT;
			static const int OP = ROT_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TVT, DFP> {
			static const int GP = TRS_CIR;
			static const int OP = DIL_DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<TVT, DLL> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TVT, DLP> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TVT, VEC> {
			static const int GP = RTC;
			static const int OP = DIL_CIR;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TVT, BIV> {
			static const int GP = MTT;
			static const int OP = DIL_SPH;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TVT, TRI> {
			static const int GP = TRS_CIR;
			static const int OP = DIL_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<TVT, GLD> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<TVT, ROT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TVT, MOT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<TVT, DIL> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TVT, TRV> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TVT, MTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TVT, TRS> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TVT, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<TVT, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<TVT, RTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TVT, RTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TVT, TVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TVT, TSD> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TVT, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<TVT, RVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TVT, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TVT, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TVT, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<BST, SCA> {
			static const int GP = BST;
			static const int OP = BST;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BST, ORI> {
			static const int GP = TVD_VEC;
			static const int OP = TRV_MNK_VEC;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<BST, INF> {
			static const int GP = DIL_GLD;
			static const int OP = TRS_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<BST, MNK> {
			static const int GP = BST_MNK;
			static const int OP = ROT_MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<BST, HYP> {
			static const int GP = TRT_HYP;
			static const int OP = VEC_BIV_IP_SPH;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<BST, PSS> {
			static const int GP = BST_PSS;
			static const int OP = PSS;
			static const int IP = BST_PSS;
		};
		
		template<> struct ProductIdx<BST, PNT> {
			static const int GP = BST_PNT;
			static const int OP = BST_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<BST, PAR> {
			static const int GP = MTT;
			static const int OP = BST_SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<BST, CIR> {
			static const int GP = RTC;
			static const int OP = BST_PSS;
			static const int IP = BST_PNT;
		};
		
		template<> struct ProductIdx<BST, SPH> {
			static const int GP = BST_SPH;
			static const int OP = SPH;
			static const int IP = BST_SPH;
		};
		
		template<> struct ProductIdx<BST, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<BST, DRV> {
			static const int GP = MTD;
			static const int OP = TRS_PLN;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<BST, DRB> {
			static const int GP = MTD_PSS;
			static const int OP = TRS_PSS;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<BST, DRT> {
			static const int GP = TSD_PLN;
			static const int OP = DRT;
			static const int IP = TRS_DLL;
		};
		
		template<> struct ProductIdx<BST, TNV> {
			static const int GP = RVD;
			static const int OP = TRV_MNK_BIV;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<BST, TNB> {
			static const int GP = MOT_ORI;
			static const int OP = TRV_PSS;
			static const int IP = TRV_VEC;
		};
		
		template<> struct ProductIdx<BST, TNT> {
			static const int GP = TVD_BIV;
			static const int OP = TNT;
			static const int IP = TRV_BIV;
		};
		
		template<> struct ProductIdx<BST, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = TRS_PNT;
		};
		
		template<> struct ProductIdx<BST, PLN> {
			static const int GP = BST_SPH;
			static const int OP = PLN;
			static const int IP = PNT_LIN;
		};
		
		template<> struct ProductIdx<BST, FLP> {
			static const int GP = TVT;
			static const int OP = ROT_PLN;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<BST, DFP> {
			static const int GP = TRS_CIR;
			static const int OP = DIL_DFP;
			static const int IP = ROT_DFP;
		};
		
		template<> struct ProductIdx<BST, DLL> {
			static const int GP = MTT;
			static const int OP = TRS_SPH;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<BST, DLP> {
			static const int GP = BST_PNT;
			static const int OP = PNT_DLL;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<BST, VEC> {
			static const int GP = BST_PNT;
			static const int OP = MUV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<BST, BIV> {
			static const int GP = BST_BIV;
			static const int OP = DIL_SPH;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<BST, TRI> {
			static const int GP = BST_TRI;
			static const int OP = DIL_PSS;
			static const int IP = ROT_VEC;
		};
		
		template<> struct ProductIdx<BST, GLD> {
			static const int GP = RTC;
			static const int OP = TRS_CIR;
			static const int IP = GLD;
		};
		
		template<> struct ProductIdx<BST, ROT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<BST, MOT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<BST, DIL> {
			static const int GP = TRT;
			static const int OP = TRT;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<BST, TRV> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<BST, MTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<BST, TRS> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<BST, RTC> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = RTC;
		};
		
		template<> struct ProductIdx<BST, MTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<BST, RTT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<BST, RTD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<BST, TVD> {
			static const int GP = TST;
			static const int OP = TST;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<BST, TSD> {
			static const int GP = TVT;
			static const int OP = TVT;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<BST, TRT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TRT;
		};
		
		template<> struct ProductIdx<BST, RVD> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<BST, TST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<BST, TVT> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<BST, BST> {
			static const int GP = MTT;
			static const int OP = MTT;
			static const int IP = BST;
		};
		
		
	} //vsr::
	#endif
	