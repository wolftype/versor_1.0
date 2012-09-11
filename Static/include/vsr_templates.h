	#ifndef VSR_TEMPLATES_H_INCLUDED
	#define VSR_TEMPLATES_H_INCLUDED
	
	#include <string>
	
	namespace vsr{
		
	using namespace std;
	
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
		 AFF = 44, 
		 AFL = 45, 
		 AFP = 46, 
		 DAP = 47, 
		 DAF = 48, 
		 DAL = 49, 
		 MNV = 50, 
		 ORI_ORI = 51, 
		 ORI_PAR = 52, 
		 ORI_CIR = 53, 
		 ORI_SPH = 54, 
		 ORI_STA = 55, 
		 ORI_DRV = 56, 
		 ORI_DRB = 57, 
		 ORI_DRT = 58, 
		 ORI_LIN = 59, 
		 ORI_FLP = 60, 
		 ORI_DFP = 61, 
		 INF_PAR = 62, 
		 INF_CIR = 63, 
		 INF_SPH = 64, 
		 INF_STA = 65, 
		 INF_AFP = 66, 
		 INF_DAP = 67, 
		 INF_DAL = 68, 
		 MNK_PNT = 69, 
		 MNK_PAR = 70, 
		 MNK_CIR = 71, 
		 MNK_SPH = 72, 
		 MNK_STA = 73, 
		 MNK_LIN = 74, 
		 MNK_PLN = 75, 
		 MNK_DFP = 76, 
		 MNK_DLL = 77, 
		 MNK_DLP = 78, 
		 MNK_BIV = 79, 
		 MNK_AFF = 80, 
		 MNK_AFL = 81, 
		 MNK_AFP = 82, 
		 MNK_DAF = 83, 
		 MNK_DAL = 84, 
		 HYP_PSS = 85, 
		 HYP_PNT = 86, 
		 HYP_PAR = 87, 
		 HYP_CIR = 88, 
		 HYP_SPH = 89, 
		 HYP_STA = 90, 
		 HYP_LIN = 91, 
		 HYP_FLP = 92, 
		 HYP_DFP = 93, 
		 HYP_VEC = 94, 
		 HYP_BIV = 95, 
		 PSS_STA = 96, 
		 PNT_PAR = 97, 
		 PNT_CIR = 98, 
		 PNT_SPH = 99, 
		 PNT_LIN = 100, 
		 PNT_FLP = 101, 
		 PNT_DFP = 102, 
		 PNT_DLL = 103, 
		 PNT_VEC = 104, 
		 PNT_BIV = 105, 
		 PNT_AFL = 106, 
		 PNT_AFP = 107, 
		 PNT_DAP = 108, 
		 PNT_DAL = 109, 
		 PNT_MNV = 110, 
		 PAR_DRB = 111, 
		 PAR_TNB = 112, 
		 PAR_DFP = 113, 
		 PAR_BIV = 114, 
		 PAR_AFP = 115, 
		 PAR_MNV = 116, 
		 SPH_VEC = 117, 
		 STA_VEC = 118, 
		 STA_BIV = 119, 
		 STA_TRI = 120, 
		 STA_MNV = 121, 
		 DRV_TNB = 122, 
		 DRV_LIN = 123, 
		 DRV_PLN = 124, 
		 DRV_AFP = 125, 
		 DRV_DAP = 126, 
		 TNV_FLP = 127, 
		 TNV_DFP = 128, 
		 TNV_VEC = 129, 
		 TNV_BIV = 130, 
		 LIN_PLN = 131, 
		 LIN_FLP = 132, 
		 LIN_DFP = 133, 
		 LIN_DLL = 134, 
		 LIN_DLP = 135, 
		 PLN_PLN = 136, 
		 PLN_FLP = 137, 
		 PLN_DFP = 138, 
		 PLN_DLP = 139, 
		 PLN_BIV = 140, 
		 PLN_MNV = 141, 
		 FLP_AFP = 142, 
		 VEC_BIV = 143, 
		 VEC_AFF = 144, 
		 VEC_AFL = 145, 
		 VEC_AFP = 146, 
		 VEC_DAP = 147, 
		 VEC_DAF = 148, 
		 VEC_DAL = 149, 
		 VEC_MNV = 150, 
		 BIV_AFF = 151, 
		 BIV_AFP = 152, 
		 BIV_DAP = 153, 
		 BIV_DAF = 154, 
		 BIV_DAL = 155, 
		 BIV_MNV = 156, 
		 MNK_PNT_SPH = 157, 
		 MNK_PNT_LIN = 158, 
		 MNK_PNT_DLL = 159, 
		 MNK_PNT_AFL = 160, 
		 MNK_PNT_DAL = 161, 
		 MNK_STA_BIV = 162, 
		 HYP_DRV_TNB = 163, 
		 HYP_VEC_MNV = 164, 
		 PSS_MNK_PNT_SPH = 165 
		
	};
	
	template<int A> struct Idx{ static const int Size = 0; static string name; };
	template<> struct Idx<0>{ static const int Size = 0; static string name;};
	
	template<> struct Idx<ROT>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<MOT>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<DIL>{ static const int Size = 2; static string name;};
	
	template<> struct Idx<TRV>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<MTD>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<TRS>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<RTC>{ static const int Size = 16; static string name;};
	
	template<> struct Idx<MTT>{ static const int Size = 16; static string name;};
	
	template<> struct Idx<RTT>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<RTD>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<TVD>{ static const int Size = 5; static string name;};
	
	template<> struct Idx<TSD>{ static const int Size = 5; static string name;};
	
	template<> struct Idx<TRT>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<RVD>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<TST>{ static const int Size = 15; static string name;};
	
	template<> struct Idx<TVT>{ static const int Size = 15; static string name;};
	
	template<> struct Idx<BST>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<SCA>{ static const int Size = 1; static string name;};
	
	template<> struct Idx<ORI>{ static const int Size = 1; static string name;};
	
	template<> struct Idx<INF>{ static const int Size = 1; static string name;};
	
	template<> struct Idx<MNK>{ static const int Size = 1; static string name;};
	
	template<> struct Idx<HYP>{ static const int Size = 2; static string name;};
	
	template<> struct Idx<PSS>{ static const int Size = 1; static string name;};
	
	template<> struct Idx<PNT>{ static const int Size = 5; static string name;};
	
	template<> struct Idx<PAR>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<CIR>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<SPH>{ static const int Size = 5; static string name;};
	
	template<> struct Idx<STA>{ static const int Size = 9; static string name;};
	
	template<> struct Idx<DRV>{ static const int Size = 3; static string name;};
	
	template<> struct Idx<DRB>{ static const int Size = 3; static string name;};
	
	template<> struct Idx<DRT>{ static const int Size = 1; static string name;};
	
	template<> struct Idx<TNV>{ static const int Size = 3; static string name;};
	
	template<> struct Idx<TNB>{ static const int Size = 3; static string name;};
	
	template<> struct Idx<TNT>{ static const int Size = 1; static string name;};
	
	template<> struct Idx<LIN>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<PLN>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<FLP>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<DFP>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<DLL>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<DLP>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<VEC>{ static const int Size = 3; static string name;};
	
	template<> struct Idx<BIV>{ static const int Size = 3; static string name;};
	
	template<> struct Idx<TRI>{ static const int Size = 1; static string name;};
	
	template<> struct Idx<AFF>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<AFL>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<AFP>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<DAP>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<DAF>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<DAL>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<MNV>{ static const int Size = 3; static string name;};
	
	template<> struct Idx<ORI_ORI>{ static const int Size = 0; static string name;};
	
	template<> struct Idx<ORI_PAR>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<ORI_CIR>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<ORI_SPH>{ static const int Size = 5; static string name;};
	
	template<> struct Idx<ORI_STA>{ static const int Size = 9; static string name;};
	
	template<> struct Idx<ORI_DRV>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<ORI_DRB>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<ORI_DRT>{ static const int Size = 2; static string name;};
	
	template<> struct Idx<ORI_LIN>{ static const int Size = 9; static string name;};
	
	template<> struct Idx<ORI_FLP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<ORI_DFP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<INF_PAR>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<INF_CIR>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<INF_SPH>{ static const int Size = 5; static string name;};
	
	template<> struct Idx<INF_STA>{ static const int Size = 9; static string name;};
	
	template<> struct Idx<INF_AFP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<INF_DAP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<INF_DAL>{ static const int Size = 9; static string name;};
	
	template<> struct Idx<MNK_PNT>{ static const int Size = 5; static string name;};
	
	template<> struct Idx<MNK_PAR>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<MNK_CIR>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<MNK_SPH>{ static const int Size = 5; static string name;};
	
	template<> struct Idx<MNK_STA>{ static const int Size = 9; static string name;};
	
	template<> struct Idx<MNK_LIN>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<MNK_PLN>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<MNK_DFP>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<MNK_DLL>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<MNK_DLP>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<MNK_BIV>{ static const int Size = 3; static string name;};
	
	template<> struct Idx<MNK_AFF>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<MNK_AFL>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<MNK_AFP>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<MNK_DAF>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<MNK_DAL>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<HYP_PSS>{ static const int Size = 2; static string name;};
	
	template<> struct Idx<HYP_PNT>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<HYP_PAR>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<HYP_CIR>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<HYP_SPH>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<HYP_STA>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<HYP_LIN>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<HYP_FLP>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<HYP_DFP>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<HYP_VEC>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<HYP_BIV>{ static const int Size = 6; static string name;};
	
	template<> struct Idx<PSS_STA>{ static const int Size = 9; static string name;};
	
	template<> struct Idx<PNT_PAR>{ static const int Size = 15; static string name;};
	
	template<> struct Idx<PNT_CIR>{ static const int Size = 15; static string name;};
	
	template<> struct Idx<PNT_SPH>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<PNT_LIN>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<PNT_FLP>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<PNT_DFP>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<PNT_DLL>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<PNT_VEC>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<PNT_BIV>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<PNT_AFL>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<PNT_AFP>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<PNT_DAP>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<PNT_DAL>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<PNT_MNV>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<PAR_DRB>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<PAR_TNB>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<PAR_DFP>{ static const int Size = 15; static string name;};
	
	template<> struct Idx<PAR_BIV>{ static const int Size = 15; static string name;};
	
	template<> struct Idx<PAR_AFP>{ static const int Size = 15; static string name;};
	
	template<> struct Idx<PAR_MNV>{ static const int Size = 15; static string name;};
	
	template<> struct Idx<SPH_VEC>{ static const int Size = 10; static string name;};
	
	template<> struct Idx<STA_VEC>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<STA_BIV>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<STA_TRI>{ static const int Size = 9; static string name;};
	
	template<> struct Idx<STA_MNV>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<DRV_TNB>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<DRV_LIN>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<DRV_PLN>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<DRV_AFP>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<DRV_DAP>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<TNV_FLP>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<TNV_DFP>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<TNV_VEC>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<TNV_BIV>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<LIN_PLN>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<LIN_FLP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<LIN_DFP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<LIN_DLL>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<LIN_DLP>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<PLN_PLN>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<PLN_FLP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<PLN_DFP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<PLN_DLP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<PLN_BIV>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<PLN_MNV>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<FLP_AFP>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<VEC_BIV>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<VEC_AFF>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<VEC_AFL>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<VEC_AFP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<VEC_DAP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<VEC_DAF>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<VEC_DAL>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<VEC_MNV>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<BIV_AFF>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<BIV_AFP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<BIV_DAP>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<BIV_DAF>{ static const int Size = 7; static string name;};
	
	template<> struct Idx<BIV_DAL>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<BIV_MNV>{ static const int Size = 4; static string name;};
	
	template<> struct Idx<MNK_PNT_SPH>{ static const int Size = 11; static string name;};
	
	template<> struct Idx<MNK_PNT_LIN>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<MNK_PNT_DLL>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<MNK_PNT_AFL>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<MNK_PNT_DAL>{ static const int Size = 14; static string name;};
	
	template<> struct Idx<MNK_STA_BIV>{ static const int Size = 12; static string name;};
	
	template<> struct Idx<HYP_DRV_TNB>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<HYP_VEC_MNV>{ static const int Size = 8; static string name;};
	
	template<> struct Idx<PSS_MNK_PNT_SPH>{ static const int Size = 11; static string name;};
	
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
		
		template<> struct ProductIdx<SCA, AFF> {
			static const int GP = AFF;
			static const int OP = AFF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<SCA, AFL> {
			static const int GP = AFL;
			static const int OP = AFL;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<SCA, AFP> {
			static const int GP = AFP;
			static const int OP = AFP;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<SCA, DAP> {
			static const int GP = DAP;
			static const int OP = DAP;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<SCA, DAF> {
			static const int GP = DAF;
			static const int OP = DAF;
			static const int IP = DAF;
		};
		
		template<> struct ProductIdx<SCA, DAL> {
			static const int GP = DAL;
			static const int OP = DAL;
			static const int IP = DAL;
		};
		
		template<> struct ProductIdx<SCA, MNV> {
			static const int GP = MNV;
			static const int OP = MNV;
			static const int IP = MNV;
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
			static const int OP = DAP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, PAR> {
			static const int GP = ORI_PAR;
			static const int OP = DAL;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<ORI, CIR> {
			static const int GP = ORI_CIR;
			static const int OP = DAF;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<ORI, SPH> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<ORI, STA> {
			static const int GP = ORI_STA;
			static const int OP = DAL;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, DRV> {
			static const int GP = ORI_DRV;
			static const int OP = MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, DRB> {
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<ORI, DRT> {
			static const int GP = ORI_DRT;
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
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<ORI, PLN> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<ORI, FLP> {
			static const int GP = ORI_FLP;
			static const int OP = MNV;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<ORI, DFP> {
			static const int GP = ORI_DFP;
			static const int OP = DAF;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<ORI, DLL> {
			static const int GP = ORI_STA;
			static const int OP = DAL;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, DLP> {
			static const int GP = TVD;
			static const int OP = DAP;
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
		
		template<> struct ProductIdx<ORI, AFF> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, AFL> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, AFP> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, DAP> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<ORI, DAF> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<ORI, DAL> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<ORI, MNV> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<ORI, ROT> {
			static const int GP = TNV_VEC;
			static const int OP = TNV_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, MOT> {
			static const int GP = PAR_TNB;
			static const int OP = BIV_DAL;
			static const int IP = VEC_BIV;
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
			static const int GP = PAR_TNB;
			static const int OP = BIV_DAL;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<ORI, TRS> {
			static const int GP = ORI_FLP;
			static const int OP = MNK_AFF;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, RTC> {
			static const int GP = RVD;
			static const int OP = VEC_DAL;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<ORI, MTT> {
			static const int GP = PAR_TNB;
			static const int OP = BIV_DAL;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<ORI, RTT> {
			static const int GP = TNV_VEC;
			static const int OP = TNV_VEC;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, RTD> {
			static const int GP = TNV_VEC;
			static const int OP = TNV_VEC;
			static const int IP = TNV_VEC;
		};
		
		template<> struct ProductIdx<ORI, TVD> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<ORI, TSD> {
			static const int GP = ORI_FLP;
			static const int OP = MNK_AFF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<ORI, TRT> {
			static const int GP = ORI_PAR;
			static const int OP = VEC_DAP;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<ORI, RVD> {
			static const int GP = TNV_VEC;
			static const int OP = TNV_VEC;
			static const int IP = TNV_VEC;
		};
		
		template<> struct ProductIdx<ORI, TST> {
			static const int GP = ORI_PAR;
			static const int OP = VEC_DAP;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<ORI, TVT> {
			static const int GP = PAR_TNB;
			static const int OP = BIV_DAL;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<ORI, BST> {
			static const int GP = ORI_PAR;
			static const int OP = VEC_DAP;
			static const int IP = AFF;
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
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<INF, CIR> {
			static const int GP = INF_CIR;
			static const int OP = PLN;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<INF, SPH> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<INF, STA> {
			static const int GP = INF_STA;
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
			static const int GP = ORI_DRV;
			static const int OP = MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<INF, TNB> {
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<INF, TNT> {
			static const int GP = ORI_DRT;
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
		
		template<> struct ProductIdx<INF, AFF> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, AFL> {
			static const int GP = INF_STA;
			static const int OP = LIN;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<INF, AFP> {
			static const int GP = INF_AFP;
			static const int OP = PLN;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<INF, DAP> {
			static const int GP = INF_DAP;
			static const int OP = MNV;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<INF, DAF> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<INF, DAL> {
			static const int GP = INF_DAL;
			static const int OP = MNK_BIV;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<INF, MNV> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<INF, ROT> {
			static const int GP = DRV_LIN;
			static const int OP = DRV_LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, MOT> {
			static const int GP = DRV_LIN;
			static const int OP = DRV_LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, DIL> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<INF, TRV> {
			static const int GP = INF_DAP;
			static const int OP = MNK_DLP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<INF, MTD> {
			static const int GP = DRV_LIN;
			static const int OP = DRV_LIN;
			static const int IP = DRV_LIN;
		};
		
		template<> struct ProductIdx<INF, TRS> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, RTC> {
			static const int GP = MTD;
			static const int OP = LIN_DLP;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<INF, MTT> {
			static const int GP = PAR_DRB;
			static const int OP = LIN_DLL;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<INF, RTT> {
			static const int GP = PAR_DRB;
			static const int OP = LIN_DLL;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<INF, RTD> {
			static const int GP = DRV_LIN;
			static const int OP = DRV_LIN;
			static const int IP = DRV_LIN;
		};
		
		template<> struct ProductIdx<INF, TVD> {
			static const int GP = INF_DAP;
			static const int OP = MNK_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<INF, TSD> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<INF, TRT> {
			static const int GP = INF_PAR;
			static const int OP = PLN_DFP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<INF, RVD> {
			static const int GP = PAR_DRB;
			static const int OP = LIN_DLL;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<INF, TST> {
			static const int GP = PAR_DRB;
			static const int OP = LIN_DLL;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<INF, TVT> {
			static const int GP = INF_PAR;
			static const int OP = PLN_DFP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<INF, BST> {
			static const int GP = INF_PAR;
			static const int OP = PLN_DFP;
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
			static const int OP = MNV;
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
			static const int GP = MNK_DFP;
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
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, VEC> {
			static const int GP = MNV;
			static const int OP = MNV;
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
		
		template<> struct ProductIdx<MNK, AFF> {
			static const int GP = MNK_AFF;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, AFL> {
			static const int GP = MNK_AFL;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, AFP> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DAP> {
			static const int GP = TRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DAF> {
			static const int GP = MNK_DAF;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<MNK, DAL> {
			static const int GP = MNK_DAL;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNK, MNV> {
			static const int GP = VEC;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNK, ROT> {
			static const int GP = VEC_MNV;
			static const int OP = VEC_MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, MOT> {
			static const int GP = LIN_DLP;
			static const int OP = VEC_MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DIL> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, TRV> {
			static const int GP = DAP;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, MTD> {
			static const int GP = MTD;
			static const int OP = VEC_MNV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, TRS> {
			static const int GP = FLP;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, RTC> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<MNK, MTT> {
			static const int GP = MTT;
			static const int OP = VEC_MNV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, RTT> {
			static const int GP = VEC_DAL;
			static const int OP = VEC_MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, RTD> {
			static const int GP = RTD;
			static const int OP = VEC_MNV;
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
			static const int OP = VEC_MNV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, RVD> {
			static const int GP = RVD;
			static const int OP = VEC_MNV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, TST> {
			static const int GP = TST;
			static const int OP = VEC_MNV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, TVT> {
			static const int GP = TVT;
			static const int OP = VEC_MNV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNK, BST> {
			static const int GP = PSS_MNK_PNT_SPH;
			static const int OP = VEC_MNV;
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
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, PAR> {
			static const int GP = HYP_PAR;
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
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<HYP, STA> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, DRV> {
			static const int GP = ORI_DRV;
			static const int OP = MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, DRB> {
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<HYP, DRT> {
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<HYP, TNV> {
			static const int GP = ORI_DRV;
			static const int OP = MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, TNB> {
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<HYP, TNT> {
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<HYP, LIN> {
			static const int GP = HYP_LIN;
			static const int OP = MNK_BIV;
			static const int IP = STA;
		};
		
		template<> struct ProductIdx<HYP, PLN> {
			static const int GP = HYP_SPH;
			static const int OP = PSS;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<HYP, FLP> {
			static const int GP = HYP_FLP;
			static const int OP = MNV;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<HYP, DFP> {
			static const int GP = HYP_DFP;
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
			static const int OP = MUV;
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
		
		template<> struct ProductIdx<HYP, AFF> {
			static const int GP = HYP_PNT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, AFL> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, AFP> {
			static const int GP = HYP_DFP;
			static const int OP = SPH;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<HYP, DAP> {
			static const int GP = HYP_FLP;
			static const int OP = MNV;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<HYP, DAF> {
			static const int GP = HYP_SPH;
			static const int OP = PSS;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<HYP, DAL> {
			static const int GP = HYP_LIN;
			static const int OP = MNK_BIV;
			static const int IP = STA;
		};
		
		template<> struct ProductIdx<HYP, MNV> {
			static const int GP = HYP_VEC;
			static const int OP = SCA;
			static const int IP = HYP_VEC;
		};
		
		template<> struct ProductIdx<HYP, ROT> {
			static const int GP = HYP_VEC_MNV;
			static const int OP = HYP_VEC_MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, MOT> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<HYP, DIL> {
			static const int GP = HYP;
			static const int OP = HYP;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<HYP, TRV> {
			static const int GP = HYP_FLP;
			static const int OP = MNK_PNT;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, MTD> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = STA_VEC;
		};
		
		template<> struct ProductIdx<HYP, TRS> {
			static const int GP = HYP_FLP;
			static const int OP = MNK_PNT;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<HYP, RTC> {
			static const int GP = MTT;
			static const int OP = MNK_STA_BIV;
			static const int IP = STA_BIV;
		};
		
		template<> struct ProductIdx<HYP, MTT> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = STA_VEC;
		};
		
		template<> struct ProductIdx<HYP, RTT> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<HYP, RTD> {
			static const int GP = HYP_VEC_MNV;
			static const int OP = HYP_VEC_MNV;
			static const int IP = HYP_VEC_MNV;
		};
		
		template<> struct ProductIdx<HYP, TVD> {
			static const int GP = HYP_FLP;
			static const int OP = MNK_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<HYP, TSD> {
			static const int GP = HYP_FLP;
			static const int OP = MNK_PNT;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<HYP, TRT> {
			static const int GP = HYP_PAR;
			static const int OP = MUV;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<HYP, RVD> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = STA_VEC;
		};
		
		template<> struct ProductIdx<HYP, TST> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = STA_VEC;
		};
		
		template<> struct ProductIdx<HYP, TVT> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = STA_VEC;
		};
		
		template<> struct ProductIdx<HYP, BST> {
			static const int GP = HYP_PAR;
			static const int OP = MUV;
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
			static const int GP = MNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TRI> {
			static const int GP = MNK;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, AFF> {
			static const int GP = DAF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, AFL> {
			static const int GP = DAL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, AFP> {
			static const int GP = DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DAP> {
			static const int GP = AFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DAF> {
			static const int GP = AFF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DAL> {
			static const int GP = AFL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, MNV> {
			static const int GP = BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, ROT> {
			static const int GP = BIV_MNV;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, MOT> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, DIL> {
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TRV> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, MTD> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TRS> {
			static const int GP = MNK_DFP;
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
			static const int GP = BIV_DAL;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, RTD> {
			static const int GP = DRV_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TVD> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TSD> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TRT> {
			static const int GP = FLP_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, RVD> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TST> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, TVT> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, BST> {
			static const int GP = PNT_SPH;
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
			static const int OP = DAP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, INF> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, MNK> {
			static const int GP = MNK_PNT;
			static const int OP = MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<PNT, HYP> {
			static const int GP = HYP_PNT;
			static const int OP = MUV;
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
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, CIR> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PNT, SPH> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<PNT, STA> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, DRV> {
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PNT, DRB> {
			static const int GP = INF_CIR;
			static const int OP = PLN;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<PNT, DRT> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<PNT, TNV> {
			static const int GP = ORI_PAR;
			static const int OP = DAL;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<PNT, TNB> {
			static const int GP = ORI_CIR;
			static const int OP = DAF;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<PNT, TNT> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<PNT, LIN> {
			static const int GP = PNT_LIN;
			static const int OP = PLN;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PNT, PLN> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<PNT, FLP> {
			static const int GP = PNT_FLP;
			static const int OP = LIN;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, DFP> {
			static const int GP = PNT_DFP;
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
			static const int OP = MUV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<PNT, TRI> {
			static const int GP = MNK_SPH;
			static const int OP = HYP_PSS;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<PNT, AFF> {
			static const int GP = BST;
			static const int OP = PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, AFL> {
			static const int GP = PNT_AFL;
			static const int OP = CIR;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<PNT, AFP> {
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<PNT, DAP> {
			static const int GP = PNT_DAP;
			static const int OP = DAL;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, DAF> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<PNT, DAL> {
			static const int GP = PNT_DAL;
			static const int OP = DAF;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PNT, MNV> {
			static const int GP = PNT_MNV;
			static const int OP = MNK_BIV;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<PNT, ROT> {
			static const int GP = STA_VEC;
			static const int OP = STA_VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<PNT, MOT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<PNT, DIL> {
			static const int GP = HYP_FLP;
			static const int OP = HYP_FLP;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<PNT, TRV> {
			static const int GP = PNT_DAP;
			static const int OP = PNT_DAP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<PNT, MTD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<PNT, TRS> {
			static const int GP = PNT_FLP;
			static const int OP = PNT_FLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PNT, RTC> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<PNT, MTT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<PNT, RTT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<PNT, RTD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = HYP_PAR;
		};
		
		template<> struct ProductIdx<PNT, TVD> {
			static const int GP = PNT_DAP;
			static const int OP = PNT_DAP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, TSD> {
			static const int GP = PNT_FLP;
			static const int OP = PNT_FLP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PNT, TRT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = HYP_PAR;
		};
		
		template<> struct ProductIdx<PNT, RVD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<PNT, TST> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<PNT, TVT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<PNT, BST> {
			static const int GP = PNT_PAR;
			static const int OP = PNT_PAR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PAR, SCA> {
			static const int GP = PAR;
			static const int OP = PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, ORI> {
			static const int GP = ORI_PAR;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, INF> {
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, MNK> {
			static const int GP = MNK_PAR;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, HYP> {
			static const int GP = HYP_PAR;
			static const int OP = PSS_STA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, PSS> {
			static const int GP = CIR;
			static const int OP = SCA;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<PAR, PNT> {
			static const int GP = PNT_PAR;
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
			static const int GP = PNT_CIR;
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
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PAR, DRT> {
			static const int GP = INF_CIR;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<PAR, TNV> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<PAR, TNT> {
			static const int GP = ORI_CIR;
			static const int OP = SCA;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<PAR, LIN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PAR, PLN> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PAR, FLP> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, DFP> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PAR, DLL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, DLP> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, VEC> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, BIV> {
			static const int GP = PAR_BIV;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TRI> {
			static const int GP = MNK_CIR;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<PAR, AFF> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, AFL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, AFP> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<PAR, DAP> {
			static const int GP = TST;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, DAF> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PAR, DAL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PAR, MNV> {
			static const int GP = PAR_MNV;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PAR, ROT> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, MOT> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<PAR, DIL> {
			static const int GP = TRT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TRV> {
			static const int GP = TST;
			static const int OP = PNT_DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, MTD> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, TRS> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, RTC> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<PAR, MTT> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, RTT> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<PAR, RTD> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, TVD> {
			static const int GP = TST;
			static const int OP = PNT_DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TSD> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TRT> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, RVD> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, TST> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, TVT> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<PAR, BST> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, SCA> {
			static const int GP = CIR;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, ORI> {
			static const int GP = ORI_CIR;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, INF> {
			static const int GP = INF_CIR;
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
			static const int GP = PNT_CIR;
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
			static const int GP = PNT_PAR;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, STA> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DRV> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DRB> {
			static const int GP = MTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DRT> {
			static const int GP = INF_PAR;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<CIR, TNV> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TNB> {
			static const int GP = RVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TNT> {
			static const int GP = ORI_PAR;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<CIR, LIN> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, PLN> {
			static const int GP = PNT_PAR;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, FLP> {
			static const int GP = PAR_DFP;
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
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, VEC> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, BIV> {
			static const int GP = PAR_MNV;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TRI> {
			static const int GP = MNK_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, AFF> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, AFL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, AFP> {
			static const int GP = TST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DAP> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DAF> {
			static const int GP = PNT_PAR;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, DAL> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, MNV> {
			static const int GP = PAR_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, ROT> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, MOT> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<CIR, DIL> {
			static const int GP = FLP_AFP;
			static const int OP = PNT_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TRV> {
			static const int GP = PAR_AFP;
			static const int OP = PNT_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, MTD> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, TRS> {
			static const int GP = PAR_DFP;
			static const int OP = PNT_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, RTC> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<CIR, MTT> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, RTT> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<CIR, RTD> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, TVD> {
			static const int GP = PAR_AFP;
			static const int OP = PNT_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TSD> {
			static const int GP = PAR_DFP;
			static const int OP = PNT_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TRT> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, RVD> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, TST> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, TVT> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, BST> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, SCA> {
			static const int GP = SPH;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, ORI> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, INF> {
			static const int GP = INF_SPH;
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
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, PAR> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, CIR> {
			static const int GP = PNT_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, SPH> {
			static const int GP = BST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, STA> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DRV> {
			static const int GP = INF_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DRB> {
			static const int GP = INF_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DRT> {
			static const int GP = TSD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TNV> {
			static const int GP = ORI_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TNB> {
			static const int GP = ORI_PAR;
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
			static const int GP = PNT_DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DFP> {
			static const int GP = PNT_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DLL> {
			static const int GP = PNT_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DLP> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, VEC> {
			static const int GP = SPH_VEC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, BIV> {
			static const int GP = PNT_MNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TRI> {
			static const int GP = MNK_PNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, AFF> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, AFL> {
			static const int GP = PNT_DAL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, AFP> {
			static const int GP = PNT_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DAP> {
			static const int GP = PNT_AFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DAF> {
			static const int GP = BST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DAL> {
			static const int GP = PNT_AFL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, MNV> {
			static const int GP = PNT_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, ROT> {
			static const int GP = MNK_STA_BIV;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, MOT> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, DIL> {
			static const int GP = HYP_DFP;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TRV> {
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, MTD> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TRS> {
			static const int GP = PNT_DFP;
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
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TSD> {
			static const int GP = PNT_DFP;
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
			static const int GP = PNT_CIR;
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
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, INF> {
			static const int GP = INF_STA;
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
			static const int GP = PNT_PAR;
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
			static const int GP = PNT_CIR;
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
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<STA, DRT> {
			static const int GP = INF_DAL;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<STA, TNV> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<STA, TNT> {
			static const int GP = ORI_LIN;
			static const int OP = SCA;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<STA, LIN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<STA, PLN> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<STA, FLP> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, DFP> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<STA, DLL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, DLP> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, VEC> {
			static const int GP = STA_VEC;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, BIV> {
			static const int GP = STA_BIV;
			static const int OP = HYP_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, TRI> {
			static const int GP = STA_TRI;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<STA, AFF> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, AFL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, AFP> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<STA, DAP> {
			static const int GP = TST;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, DAF> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<STA, DAL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<STA, MNV> {
			static const int GP = STA_MNV;
			static const int OP = PSS;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<STA, ROT> {
			static const int GP = STA_BIV;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, MOT> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<STA, DIL> {
			static const int GP = HYP_LIN;
			static const int OP = HYP_LIN;
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
			static const int OP = PNT_SPH;
			static const int IP = HYP_PAR;
		};
		
		template<> struct ProductIdx<STA, MTT> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<STA, RTT> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = VEC_AFF;
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
			static const int GP = ORI_DRV;
			static const int OP = MNV;
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
			static const int GP = ORI_DRV;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, PSS> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<DRV, PNT> {
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, PAR> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, CIR> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRV, SPH> {
			static const int GP = INF_CIR;
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
			static const int GP = DRV_TNB;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DRV, TNT> {
			static const int GP = ORI_DRB;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<DRV, LIN> {
			static const int GP = DRV_LIN;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRV, PLN> {
			static const int GP = DRV_PLN;
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
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DLP> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, VEC> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, BIV> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, TRI> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, AFF> {
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, AFL> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, AFP> {
			static const int GP = DRV_AFP;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DRV, DAP> {
			static const int GP = DRV_DAP;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DAF> {
			static const int GP = INF_CIR;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<DRV, DAL> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRV, MNV> {
			static const int GP = DRV_LIN;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRV, ROT> {
			static const int GP = DRV_PLN;
			static const int OP = DRV_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, MOT> {
			static const int GP = DRV_PLN;
			static const int OP = DRV_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DIL> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, TRV> {
			static const int GP = DRV_DAP;
			static const int OP = MNK_DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, MTD> {
			static const int GP = DRV_PLN;
			static const int OP = DRV_PLN;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DRV, TRS> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, RTC> {
			static const int GP = PAR_DRB;
			static const int OP = PLN_DLP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<DRV, MTT> {
			static const int GP = MTD;
			static const int OP = LIN_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<DRV, RTT> {
			static const int GP = MTD;
			static const int OP = LIN_DFP;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<DRV, RTD> {
			static const int GP = DRV_PLN;
			static const int OP = DRV_PLN;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DRV, TVD> {
			static const int GP = DRV_DAP;
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
			static const int OP = LIN_DFP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<DRV, RVD> {
			static const int GP = MTD;
			static const int OP = LIN_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<DRV, TST> {
			static const int GP = MTD;
			static const int OP = LIN_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<DRV, TVT> {
			static const int GP = MTD;
			static const int OP = LIN_DFP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<DRV, BST> {
			static const int GP = MTD;
			static const int OP = LIN_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, SCA> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, ORI> {
			static const int GP = ORI_DRB;
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
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, PSS> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DRB, PNT> {
			static const int GP = INF_CIR;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, PAR> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, CIR> {
			static const int GP = MTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, SPH> {
			static const int GP = INF_PAR;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, STA> {
			static const int GP = PAR_DRB;
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
			static const int GP = DRV_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TNB> {
			static const int GP = RTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TNT> {
			static const int GP = ORI_DRV;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DRB, LIN> {
			static const int GP = DRV_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, PLN> {
			static const int GP = DRV_LIN;
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
			static const int GP = DRV_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DLP> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, VEC> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, BIV> {
			static const int GP = DRV_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TRI> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, AFF> {
			static const int GP = INF_CIR;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, AFL> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, AFP> {
			static const int GP = DRV_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DAP> {
			static const int GP = DRV_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DAF> {
			static const int GP = INF_PAR;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, DAL> {
			static const int GP = MTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, MNV> {
			static const int GP = DRV_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, ROT> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, MOT> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, DIL> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TRV> {
			static const int GP = DRV_AFP;
			static const int OP = MNK_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, MTD> {
			static const int GP = DRV_LIN;
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
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, RTT> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DRB, RTD> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRB, TVD> {
			static const int GP = DRV_AFP;
			static const int OP = MNK_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TSD> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TRT> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRB, RVD> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, TST> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, TVT> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRB, BST> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, SCA> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, ORI> {
			static const int GP = ORI_DRT;
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
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, PSS> {
			static const int GP = INF;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRT, PNT> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, PAR> {
			static const int GP = INF_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, CIR> {
			static const int GP = INF_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, SPH> {
			static const int GP = TSD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, STA> {
			static const int GP = INF_DAL;
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
			static const int GP = ORI_DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TNB> {
			static const int GP = ORI_DRV;
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
		
		template<> struct ProductIdx<DRT, AFF> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, AFL> {
			static const int GP = INF_DAL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, AFP> {
			static const int GP = INF_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DAP> {
			static const int GP = INF_AFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DAF> {
			static const int GP = TSD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DAL> {
			static const int GP = INF_STA;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, MNV> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, ROT> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, MOT> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, DIL> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TRV> {
			static const int GP = INF_AFP;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, MTD> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TRS> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, RTC> {
			static const int GP = PAR_DRB;
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
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TVD> {
			static const int GP = INF_AFP;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TSD> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, TRT> {
			static const int GP = INF_CIR;
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
			static const int GP = INF_CIR;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, BST> {
			static const int GP = INF_CIR;
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
			static const int GP = ORI_DRV;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, MNK> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, HYP> {
			static const int GP = ORI_DRV;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, PSS> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<TNV, PNT> {
			static const int GP = ORI_PAR;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, PAR> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, CIR> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNV, SPH> {
			static const int GP = ORI_CIR;
			static const int OP = SCA;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<TNV, STA> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DRV> {
			static const int GP = RTD;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DRB> {
			static const int GP = DRV_TNB;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TNV, DRT> {
			static const int GP = ORI_DRB;
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
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNV, PLN> {
			static const int GP = ORI_CIR;
			static const int OP = SCA;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<TNV, FLP> {
			static const int GP = TNV_FLP;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DFP> {
			static const int GP = TNV_DFP;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TNV, DLL> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DLP> {
			static const int GP = ORI_PAR;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, VEC> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, BIV> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, TRI> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, AFF> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, AFL> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, AFP> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DAP> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DAF> {
			static const int GP = TNV_BIV;
			static const int OP = SCA;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TNV, DAL> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNV, MNV> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNV, ROT> {
			static const int GP = TNV_BIV;
			static const int OP = TNV_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, MOT> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
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
			static const int OP = BIV_DAP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<TNV, TRS> {
			static const int GP = TNV_FLP;
			static const int OP = MNK_AFL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, RTC> {
			static const int GP = PAR_TNB;
			static const int OP = VEC_DAF;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<TNV, MTT> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<TNV, RTT> {
			static const int GP = TNV_BIV;
			static const int OP = TNV_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, RTD> {
			static const int GP = TNV_BIV;
			static const int OP = TNV_BIV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TNV, TVD> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, TSD> {
			static const int GP = TNV_FLP;
			static const int OP = MNK_AFL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, TRT> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TNV, RVD> {
			static const int GP = TNV_BIV;
			static const int OP = TNV_BIV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TNV, TST> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TNV, TVT> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<TNV, BST> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
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
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, MNK> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, HYP> {
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, PSS> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TNB, PNT> {
			static const int GP = ORI_CIR;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, PAR> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, CIR> {
			static const int GP = RVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, SPH> {
			static const int GP = ORI_PAR;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNB, STA> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DRV> {
			static const int GP = DRV_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DRB> {
			static const int GP = RTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DRT> {
			static const int GP = ORI_DRV;
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
			static const int GP = ORI_PAR;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNB, FLP> {
			static const int GP = TNV_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DFP> {
			static const int GP = TNV_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DLL> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DLP> {
			static const int GP = ORI_CIR;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, VEC> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, BIV> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, TRI> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, AFF> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, AFL> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, AFP> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DAP> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DAF> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNB, DAL> {
			static const int GP = TNV_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, MNV> {
			static const int GP = TNV_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, ROT> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, MOT> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
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
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNB, TRS> {
			static const int GP = TNV_DFP;
			static const int OP = MNK_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, RTC> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TNB, MTT> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNB, RTT> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, RTD> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNB, TVD> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, TSD> {
			static const int GP = TNV_DFP;
			static const int OP = MNK_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, TRT> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNB, RVD> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNB, TST> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNB, TVT> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNB, BST> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
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
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, MNK> {
			static const int GP = TNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, HYP> {
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, PSS> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNT, PNT> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, PAR> {
			static const int GP = ORI_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, CIR> {
			static const int GP = ORI_PAR;
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
			static const int GP = ORI_DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DRB> {
			static const int GP = ORI_DRV;
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
			static const int GP = ORI_DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DFP> {
			static const int GP = ORI_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DLL> {
			static const int GP = ORI_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DLP> {
			static const int GP = ORI_SPH;
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
		
		template<> struct ProductIdx<TNT, AFF> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, AFL> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, AFP> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DAP> {
			static const int GP = TNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DAF> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, DAL> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, MNV> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, ROT> {
			static const int GP = TNV_BIV;
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
			static const int GP = ORI_DFP;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, RTC> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNT, MTT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, RTT> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, RTD> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TVD> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TSD> {
			static const int GP = ORI_DFP;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TRT> {
			static const int GP = ORI_CIR;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, RVD> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TST> {
			static const int GP = ORI_CIR;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TVT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, BST> {
			static const int GP = ORI_CIR;
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
			static const int GP = HYP_LIN;
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
			static const int GP = DRV_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DRB> {
			static const int GP = DRV_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DRT> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TNV> {
			static const int GP = PAR_TNB;
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
			static const int GP = LIN_PLN;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, FLP> {
			static const int GP = LIN_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DFP> {
			static const int GP = LIN_DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DLL> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DLP> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, VEC> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, BIV> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TRI> {
			static const int GP = MNK_DLL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, AFF> {
			static const int GP = PNT_LIN;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, AFL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, AFP> {
			static const int GP = TST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DAP> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DAF> {
			static const int GP = PNT_DLL;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, DAL> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, MNV> {
			static const int GP = MOT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, ROT> {
			static const int GP = LIN_DLL;
			static const int OP = PLN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, MOT> {
			static const int GP = LIN_DLL;
			static const int OP = PLN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, DIL> {
			static const int GP = INF_STA;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TRV> {
			static const int GP = PAR_AFP;
			static const int OP = PLN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, MTD> {
			static const int GP = PAR_DRB;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, TRS> {
			static const int GP = PLN_DFP;
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
			static const int GP = PAR_DRB;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, TVD> {
			static const int GP = PAR_AFP;
			static const int OP = PLN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TSD> {
			static const int GP = INF_PAR;
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
			static const int GP = ORI_SPH;
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
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, PAR> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, CIR> {
			static const int GP = PNT_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, SPH> {
			static const int GP = BST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, STA> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DRV> {
			static const int GP = DRV_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DRB> {
			static const int GP = DRV_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DRT> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TNV> {
			static const int GP = ORI_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TNB> {
			static const int GP = ORI_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TNT> {
			static const int GP = TVD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, LIN> {
			static const int GP = LIN_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, PLN> {
			static const int GP = PLN_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, FLP> {
			static const int GP = PLN_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DFP> {
			static const int GP = PLN_DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DLL> {
			static const int GP = LIN_DLP;
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
		
		template<> struct ProductIdx<PLN, AFF> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, AFL> {
			static const int GP = PNT_DAL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, AFP> {
			static const int GP = PNT_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DAP> {
			static const int GP = PNT_AFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DAF> {
			static const int GP = BST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DAL> {
			static const int GP = PNT_AFL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, MNV> {
			static const int GP = PLN_MNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, ROT> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, MOT> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, DIL> {
			static const int GP = INF_AFP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TRV> {
			static const int GP = PNT_AFP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, MTD> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TRS> {
			static const int GP = LIN_DFP;
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
			static const int GP = PNT_AFP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, TSD> {
			static const int GP = INF_CIR;
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
			static const int GP = PNT_CIR;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, SCA> {
			static const int GP = FLP;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, ORI> {
			static const int GP = ORI_FLP;
			static const int OP = MNV;
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
			static const int GP = HYP_FLP;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, PSS> {
			static const int GP = DFP;
			static const int OP = SCA;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<FLP, PNT> {
			static const int GP = PNT_FLP;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, PAR> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, CIR> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<FLP, SPH> {
			static const int GP = PNT_DFP;
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
			static const int GP = TNV_FLP;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, TNB> {
			static const int GP = TNV_DFP;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<FLP, TNT> {
			static const int GP = ORI_DFP;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<FLP, LIN> {
			static const int GP = LIN_FLP;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<FLP, PLN> {
			static const int GP = PLN_FLP;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<FLP, FLP> {
			static const int GP = TRS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DFP> {
			static const int GP = MNK_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DLL> {
			static const int GP = LIN_DFP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DLP> {
			static const int GP = PLN_DFP;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, VEC> {
			static const int GP = PLN_DFP;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, BIV> {
			static const int GP = LIN_DFP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, TRI> {
			static const int GP = MNK_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, AFF> {
			static const int GP = PNT_FLP;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, AFL> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, AFP> {
			static const int GP = FLP_AFP;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<FLP, DAP> {
			static const int GP = TRT;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DAF> {
			static const int GP = PNT_DFP;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<FLP, DAL> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<FLP, MNV> {
			static const int GP = LIN_FLP;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<FLP, ROT> {
			static const int GP = LIN_DLP;
			static const int OP = LIN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, MOT> {
			static const int GP = LIN_DLP;
			static const int OP = LIN_DLP;
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
			static const int OP = LIN_DLP;
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
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<FLP, MTT> {
			static const int GP = MTT;
			static const int OP = LIN_DLP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, RTT> {
			static const int GP = MTT;
			static const int OP = LIN_DLP;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<FLP, RTD> {
			static const int GP = MTD;
			static const int OP = LIN_DLP;
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
			static const int OP = LIN_DLP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, RVD> {
			static const int GP = MTT;
			static const int OP = LIN_DLP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, TST> {
			static const int GP = MTT;
			static const int OP = LIN_DLP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, TVT> {
			static const int GP = TVT;
			static const int OP = LIN_DLP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<FLP, BST> {
			static const int GP = TVT;
			static const int OP = LIN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, SCA> {
			static const int GP = DFP;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, ORI> {
			static const int GP = ORI_DFP;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, INF> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, MNK> {
			static const int GP = MNK_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, HYP> {
			static const int GP = HYP_DFP;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, PSS> {
			static const int GP = FLP;
			static const int OP = SCA;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<DFP, PNT> {
			static const int GP = PNT_DFP;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, PAR> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, CIR> {
			static const int GP = TVT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, SPH> {
			static const int GP = PNT_FLP;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DFP, STA> {
			static const int GP = PAR_DFP;
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
			static const int GP = TNV_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TNB> {
			static const int GP = TNV_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TNT> {
			static const int GP = ORI_FLP;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DFP, LIN> {
			static const int GP = LIN_DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, PLN> {
			static const int GP = PLN_DFP;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, FLP> {
			static const int GP = MNK_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DFP> {
			static const int GP = TRS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DLL> {
			static const int GP = LIN_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DLP> {
			static const int GP = PLN_FLP;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, VEC> {
			static const int GP = PLN_FLP;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, BIV> {
			static const int GP = LIN_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TRI> {
			static const int GP = TRS;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, AFF> {
			static const int GP = PNT_DFP;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, AFL> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, AFP> {
			static const int GP = TRT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DAP> {
			static const int GP = FLP_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, DAF> {
			static const int GP = PNT_FLP;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DFP, DAL> {
			static const int GP = TVT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, MNV> {
			static const int GP = LIN_DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, ROT> {
			static const int GP = LIN_PLN;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, MOT> {
			static const int GP = LIN_PLN;
			static const int OP = DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, DIL> {
			static const int GP = INF_SPH;
			static const int OP = INF_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TRV> {
			static const int GP = FLP_AFP;
			static const int OP = INF_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, MTD> {
			static const int GP = PAR_DRB;
			static const int OP = INF_SPH;
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
			static const int OP = INF_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DFP, RTT> {
			static const int GP = RTC;
			static const int OP = INF_SPH;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DFP, RTD> {
			static const int GP = PAR_DRB;
			static const int OP = INF_SPH;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, TVD> {
			static const int GP = FLP_AFP;
			static const int OP = INF_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TSD> {
			static const int GP = INF_SPH;
			static const int OP = INF_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DFP, TRT> {
			static const int GP = PAR_DFP;
			static const int OP = INF_SPH;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, RVD> {
			static const int GP = RTC;
			static const int OP = INF_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DFP, TST> {
			static const int GP = RTC;
			static const int OP = INF_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DFP, TVT> {
			static const int GP = PAR_DFP;
			static const int OP = INF_SPH;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DFP, BST> {
			static const int GP = PAR_DFP;
			static const int OP = INF_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, SCA> {
			static const int GP = DLL;
			static const int OP = DLL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, ORI> {
			static const int GP = ORI_STA;
			static const int OP = DAL;
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
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, DRB> {
			static const int GP = DRV_LIN;
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
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DLL, TNT> {
			static const int GP = ORI_LIN;
			static const int OP = SCA;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<DLL, LIN> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLL, PLN> {
			static const int GP = LIN_DLP;
			static const int OP = SCA;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<DLL, FLP> {
			static const int GP = LIN_DFP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, DFP> {
			static const int GP = LIN_FLP;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DLL, DLL> {
			static const int GP = MOT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, DLP> {
			static const int GP = LIN_PLN;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, VEC> {
			static const int GP = LIN_PLN;
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
		
		template<> struct ProductIdx<DLL, AFF> {
			static const int GP = PNT_DLL;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, AFL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, AFP> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DLL, DAP> {
			static const int GP = TST;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, DAF> {
			static const int GP = PNT_LIN;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<DLL, DAL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DLL, MNV> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLL, ROT> {
			static const int GP = MOT;
			static const int OP = PLN_FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, MOT> {
			static const int GP = MOT;
			static const int OP = PLN_FLP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<DLL, DIL> {
			static const int GP = INF_DAL;
			static const int OP = INF_DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TRV> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, MTD> {
			static const int GP = MTD;
			static const int OP = INF_CIR;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DLL, TRS> {
			static const int GP = PLN_FLP;
			static const int OP = PLN_FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, RTC> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<DLL, MTT> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<DLL, RTT> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<DLL, RTD> {
			static const int GP = MTD;
			static const int OP = INF_CIR;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DLL, TVD> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TSD> {
			static const int GP = INF_CIR;
			static const int OP = INF_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TRT> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DLL, RVD> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<DLL, TST> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<DLL, TVT> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DLL, BST> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, SCA> {
			static const int GP = DLP;
			static const int OP = DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, ORI> {
			static const int GP = TVD;
			static const int OP = DAP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, INF> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, MNK> {
			static const int GP = MNK_DLP;
			static const int OP = MNV;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, HYP> {
			static const int GP = HYP_PNT;
			static const int OP = MUV;
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
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DLP, CIR> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<DLP, SPH> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<DLP, STA> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DLP, DRV> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, DRB> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DLP, DRT> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<DLP, TNV> {
			static const int GP = ORI_PAR;
			static const int OP = DAL;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DLP, TNB> {
			static const int GP = ORI_CIR;
			static const int OP = DAF;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<DLP, TNT> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<DLP, LIN> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<DLP, PLN> {
			static const int GP = PLN_DLP;
			static const int OP = PSS;
			static const int IP = LIN;
		};
		
		template<> struct ProductIdx<DLP, FLP> {
			static const int GP = PLN_DFP;
			static const int OP = LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, DFP> {
			static const int GP = PLN_FLP;
			static const int OP = DRT;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<DLP, DLL> {
			static const int GP = LIN_PLN;
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
			static const int GP = PLN_MNV;
			static const int OP = DFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DLP, TRI> {
			static const int GP = MNK_PLN;
			static const int OP = DRT;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<DLP, AFF> {
			static const int GP = BST;
			static const int OP = PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, AFL> {
			static const int GP = PNT_AFL;
			static const int OP = CIR;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DLP, AFP> {
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<DLP, DAP> {
			static const int GP = PNT_DAP;
			static const int OP = DAL;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DLP, DAF> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<DLP, DAL> {
			static const int GP = PNT_DAL;
			static const int OP = DAF;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<DLP, MNV> {
			static const int GP = PLN_BIV;
			static const int OP = MNK_BIV;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<DLP, ROT> {
			static const int GP = LIN_PLN;
			static const int OP = LIN_PLN;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DLP, MOT> {
			static const int GP = LIN_PLN;
			static const int OP = LIN_PLN;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<DLP, DIL> {
			static const int GP = INF_DAP;
			static const int OP = INF_DAP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, TRV> {
			static const int GP = PNT_DAP;
			static const int OP = MUV;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DLP, MTD> {
			static const int GP = PAR_DRB;
			static const int OP = PAR_DRB;
			static const int IP = INF_PAR;
		};
		
		template<> struct ProductIdx<DLP, TRS> {
			static const int GP = LIN_FLP;
			static const int OP = LIN_FLP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, RTC> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<DLP, MTT> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<DLP, RTT> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<DLP, RTD> {
			static const int GP = PAR_DRB;
			static const int OP = PAR_DRB;
			static const int IP = INF_PAR;
		};
		
		template<> struct ProductIdx<DLP, TVD> {
			static const int GP = PNT_DAP;
			static const int OP = MUV;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DLP, TSD> {
			static const int GP = INF_PAR;
			static const int OP = INF_PAR;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, TRT> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<DLP, RVD> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<DLP, TST> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<DLP, TVT> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<DLP, BST> {
			static const int GP = PNT_PAR;
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
			static const int GP = MNV;
			static const int OP = MNV;
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
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<VEC, CIR> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<VEC, SPH> {
			static const int GP = SPH_VEC;
			static const int OP = PSS;
			static const int IP = PSS_STA;
		};
		
		template<> struct ProductIdx<VEC, STA> {
			static const int GP = STA_VEC;
			static const int OP = MUV;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<VEC, DRV> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<VEC, DRB> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<VEC, DRT> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<VEC, TNV> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<VEC, TNB> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<VEC, TNT> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<VEC, LIN> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<VEC, PLN> {
			static const int GP = PLN_DLP;
			static const int OP = PSS;
			static const int IP = LIN;
		};
		
		template<> struct ProductIdx<VEC, FLP> {
			static const int GP = PLN_DFP;
			static const int OP = LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<VEC, DFP> {
			static const int GP = PLN_FLP;
			static const int OP = DRT;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<VEC, DLL> {
			static const int GP = LIN_PLN;
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
			static const int GP = VEC_BIV;
			static const int OP = TRI;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<VEC, TRI> {
			static const int GP = BIV;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<VEC, AFF> {
			static const int GP = VEC_AFF;
			static const int OP = AFL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, AFL> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<VEC, AFP> {
			static const int GP = VEC_AFP;
			static const int OP = TNT;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<VEC, DAP> {
			static const int GP = VEC_DAP;
			static const int OP = DAL;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<VEC, DAF> {
			static const int GP = VEC_DAF;
			static const int OP = PSS;
			static const int IP = DAL;
		};
		
		template<> struct ProductIdx<VEC, DAL> {
			static const int GP = VEC_DAL;
			static const int OP = DAF;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<VEC, MNV> {
			static const int GP = VEC_MNV;
			static const int OP = MNK_BIV;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<VEC, ROT> {
			static const int GP = VEC_BIV;
			static const int OP = VEC_BIV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<VEC, MOT> {
			static const int GP = LIN_PLN;
			static const int OP = PLN_MNV;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<VEC, DIL> {
			static const int GP = ORI_DRV;
			static const int OP = ORI_DRV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<VEC, TRV> {
			static const int GP = BIV_AFP;
			static const int OP = MNK_DAL;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<VEC, MTD> {
			static const int GP = PAR_DRB;
			static const int OP = DRV_AFP;
			static const int IP = INF_PAR;
		};
		
		template<> struct ProductIdx<VEC, TRS> {
			static const int GP = LIN_FLP;
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
			static const int OP = FLP_AFP;
			static const int IP = HYP_PAR;
		};
		
		template<> struct ProductIdx<VEC, RTT> {
			static const int GP = VEC_AFL;
			static const int OP = BIV_AFF;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<VEC, RTD> {
			static const int GP = DRV_TNB;
			static const int OP = DRV_TNB;
			static const int IP = ORI_DRV;
		};
		
		template<> struct ProductIdx<VEC, TVD> {
			static const int GP = ORI_PAR;
			static const int OP = ORI_STA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<VEC, TSD> {
			static const int GP = INF_PAR;
			static const int OP = INF_STA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<VEC, TRT> {
			static const int GP = RTC;
			static const int OP = FLP_AFP;
			static const int IP = HYP_FLP;
		};
		
		template<> struct ProductIdx<VEC, RVD> {
			static const int GP = PAR_TNB;
			static const int OP = TNV_DFP;
			static const int IP = ORI_PAR;
		};
		
		template<> struct ProductIdx<VEC, TST> {
			static const int GP = RTC;
			static const int OP = FLP_AFP;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<VEC, TVT> {
			static const int GP = RTC;
			static const int OP = FLP_AFP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<VEC, BST> {
			static const int GP = PNT_PAR;
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
			static const int GP = MNV;
			static const int OP = SCA;
			static const int IP = MNV;
		};
		
		template<> struct ProductIdx<BIV, PNT> {
			static const int GP = PNT_BIV;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, PAR> {
			static const int GP = PAR_BIV;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, CIR> {
			static const int GP = PAR_MNV;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<BIV, SPH> {
			static const int GP = PNT_MNV;
			static const int OP = SCA;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<BIV, STA> {
			static const int GP = STA_BIV;
			static const int OP = HYP_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DRV> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DRB> {
			static const int GP = DRV_LIN;
			static const int OP = SCA;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<BIV, DRT> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<BIV, TNV> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TNB> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<BIV, TNT> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<BIV, LIN> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<BIV, PLN> {
			static const int GP = PLN_BIV;
			static const int OP = SCA;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<BIV, FLP> {
			static const int GP = LIN_DFP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DFP> {
			static const int GP = LIN_FLP;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<BIV, DLL> {
			static const int GP = MOT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DLP> {
			static const int GP = PLN_MNV;
			static const int OP = DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, VEC> {
			static const int GP = VEC_BIV;
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
		
		template<> struct ProductIdx<BIV, AFF> {
			static const int GP = BIV_AFF;
			static const int OP = AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, AFL> {
			static const int GP = RTT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, AFP> {
			static const int GP = BIV_AFP;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<BIV, DAP> {
			static const int GP = BIV_DAP;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DAF> {
			static const int GP = BIV_DAF;
			static const int OP = SCA;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<BIV, DAL> {
			static const int GP = BIV_DAL;
			static const int OP = PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<BIV, MNV> {
			static const int GP = BIV_MNV;
			static const int OP = PSS;
			static const int IP = SCA;
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
			static const int GP = ORI_DRB;
			static const int OP = ORI_DRB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TRV> {
			static const int GP = VEC_AFP;
			static const int OP = MNK_DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, MTD> {
			static const int GP = MTD;
			static const int OP = INF_AFP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<BIV, TRS> {
			static const int GP = PLN_FLP;
			static const int OP = MNK_PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, RTC> {
			static const int GP = RTC;
			static const int OP = HYP_SPH;
			static const int IP = HYP_FLP;
		};
		
		template<> struct ProductIdx<BIV, MTT> {
			static const int GP = MTT;
			static const int OP = HYP_DFP;
			static const int IP = HYP_PNT;
		};
		
		template<> struct ProductIdx<BIV, RTT> {
			static const int GP = RTT;
			static const int OP = MNK_DAF;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<BIV, RTD> {
			static const int GP = RTD;
			static const int OP = ORI_DRB;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<BIV, TVD> {
			static const int GP = ORI_CIR;
			static const int OP = ORI_DFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TSD> {
			static const int GP = INF_CIR;
			static const int OP = INF_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TRT> {
			static const int GP = MTT;
			static const int OP = HYP_DFP;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<BIV, RVD> {
			static const int GP = RVD;
			static const int OP = ORI_DFP;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<BIV, TST> {
			static const int GP = MTT;
			static const int OP = HYP_DFP;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<BIV, TVT> {
			static const int GP = MTT;
			static const int OP = HYP_DFP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<BIV, BST> {
			static const int GP = PAR_BIV;
			static const int OP = HYP_DFP;
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
			static const int GP = MNK_DFP;
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
		
		template<> struct ProductIdx<TRI, AFF> {
			static const int GP = MNK_DAF;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, AFL> {
			static const int GP = MNK_DAL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, AFP> {
			static const int GP = TRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, DAP> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, DAF> {
			static const int GP = MNK_AFF;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRI, DAL> {
			static const int GP = MNK_AFL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, MNV> {
			static const int GP = MNK_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, ROT> {
			static const int GP = VEC_BIV;
			static const int OP = TRI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, MOT> {
			static const int GP = LIN_PLN;
			static const int OP = TRI;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRI, DIL> {
			static const int GP = ORI_DRT;
			static const int OP = ORI_DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TRV> {
			static const int GP = AFP;
			static const int OP = TRI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, MTD> {
			static const int GP = PAR_DRB;
			static const int OP = ORI_DRT;
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
			static const int OP = ORI_DRT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRI, RTT> {
			static const int GP = VEC_AFL;
			static const int OP = TRI;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRI, RTD> {
			static const int GP = DRV_TNB;
			static const int OP = ORI_DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TVD> {
			static const int GP = ORI_SPH;
			static const int OP = ORI_DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TSD> {
			static const int GP = INF_SPH;
			static const int OP = ORI_DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, TRT> {
			static const int GP = FLP_AFP;
			static const int OP = ORI_DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, RVD> {
			static const int GP = PAR_TNB;
			static const int OP = ORI_DRT;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRI, TST> {
			static const int GP = PAR_AFP;
			static const int OP = ORI_DRT;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRI, TVT> {
			static const int GP = PAR_DFP;
			static const int OP = ORI_DRT;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRI, BST> {
			static const int GP = MNK_PNT_SPH;
			static const int OP = ORI_DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, SCA> {
			static const int GP = AFF;
			static const int OP = AFF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, ORI> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, INF> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, MNK> {
			static const int GP = MNK_AFF;
			static const int OP = MNV;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFF, HYP> {
			static const int GP = HYP_PNT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, PSS> {
			static const int GP = DAF;
			static const int OP = SCA;
			static const int IP = DAF;
		};
		
		template<> struct ProductIdx<AFF, PNT> {
			static const int GP = BST;
			static const int OP = PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, PAR> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFF, CIR> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<AFF, SPH> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<AFF, STA> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFF, DRV> {
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<AFF, DRB> {
			static const int GP = INF_CIR;
			static const int OP = PLN;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<AFF, DRT> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<AFF, TNV> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFF, TNB> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<AFF, TNT> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<AFF, LIN> {
			static const int GP = PNT_LIN;
			static const int OP = PLN;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<AFF, PLN> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<AFF, FLP> {
			static const int GP = PNT_FLP;
			static const int OP = LIN;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFF, DFP> {
			static const int GP = PNT_DFP;
			static const int OP = SPH;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<AFF, DLL> {
			static const int GP = PNT_DLL;
			static const int OP = CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<AFF, DLP> {
			static const int GP = BST;
			static const int OP = PAR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, VEC> {
			static const int GP = VEC_AFF;
			static const int OP = AFL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, BIV> {
			static const int GP = BIV_AFF;
			static const int OP = AFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<AFF, TRI> {
			static const int GP = MNK_DAF;
			static const int OP = TNT;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<AFF, AFF> {
			static const int GP = VEC_AFF;
			static const int OP = AFL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, AFL> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<AFF, AFP> {
			static const int GP = VEC_AFP;
			static const int OP = TNT;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<AFF, DAP> {
			static const int GP = VEC_DAP;
			static const int OP = DAL;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFF, DAF> {
			static const int GP = VEC_DAF;
			static const int OP = PSS;
			static const int IP = DAL;
		};
		
		template<> struct ProductIdx<AFF, DAL> {
			static const int GP = VEC_DAL;
			static const int OP = DAF;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<AFF, MNV> {
			static const int GP = BIV_DAF;
			static const int OP = MNK_BIV;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<AFF, ROT> {
			static const int GP = VEC_AFL;
			static const int OP = VEC_AFL;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<AFF, MOT> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<AFF, DIL> {
			static const int GP = ORI_FLP;
			static const int OP = ORI_FLP;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFF, TRV> {
			static const int GP = BIV_AFP;
			static const int OP = BIV_AFP;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFF, MTD> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<AFF, TRS> {
			static const int GP = PNT_FLP;
			static const int OP = MUV;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<AFF, RTC> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<AFF, MTT> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<AFF, RTT> {
			static const int GP = VEC_AFL;
			static const int OP = VEC_AFL;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<AFF, RTD> {
			static const int GP = PAR_TNB;
			static const int OP = PAR_TNB;
			static const int IP = ORI_PAR;
		};
		
		template<> struct ProductIdx<AFF, TVD> {
			static const int GP = ORI_PAR;
			static const int OP = ORI_PAR;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFF, TSD> {
			static const int GP = PNT_FLP;
			static const int OP = MUV;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFF, TRT> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<AFF, RVD> {
			static const int GP = PAR_TNB;
			static const int OP = PAR_TNB;
			static const int IP = ORI_PAR;
		};
		
		template<> struct ProductIdx<AFF, TST> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<AFF, TVT> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<AFF, BST> {
			static const int GP = PNT_PAR;
			static const int OP = PNT_AFL;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFL, SCA> {
			static const int GP = AFL;
			static const int OP = AFL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, ORI> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, INF> {
			static const int GP = INF_STA;
			static const int OP = LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, MNK> {
			static const int GP = MNK_AFL;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, HYP> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, PSS> {
			static const int GP = DAL;
			static const int OP = SCA;
			static const int IP = DAL;
		};
		
		template<> struct ProductIdx<AFL, PNT> {
			static const int GP = PNT_AFL;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, PAR> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, CIR> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFL, SPH> {
			static const int GP = PNT_DAL;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<AFL, STA> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, DRV> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, DRB> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<AFL, DRT> {
			static const int GP = INF_DAL;
			static const int OP = SCA;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<AFL, TNV> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, TNB> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFL, TNT> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<AFL, LIN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFL, PLN> {
			static const int GP = PNT_DAL;
			static const int OP = SCA;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<AFL, FLP> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, DFP> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<AFL, DLL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, DLP> {
			static const int GP = PNT_AFL;
			static const int OP = CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, VEC> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, BIV> {
			static const int GP = RTT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, TRI> {
			static const int GP = MNK_DAL;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<AFL, AFF> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, AFL> {
			static const int GP = RTT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, AFP> {
			static const int GP = BIV_AFP;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<AFL, DAP> {
			static const int GP = BIV_DAP;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, DAF> {
			static const int GP = VEC_DAL;
			static const int OP = SCA;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<AFL, DAL> {
			static const int GP = BIV_DAL;
			static const int OP = PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFL, MNV> {
			static const int GP = BIV_DAL;
			static const int OP = PSS;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFL, ROT> {
			static const int GP = RTT;
			static const int OP = VEC_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, MOT> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<AFL, DIL> {
			static const int GP = ORI_LIN;
			static const int OP = ORI_LIN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, TRV> {
			static const int GP = VEC_AFP;
			static const int OP = VEC_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, MTD> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<AFL, TRS> {
			static const int GP = TVT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, RTC> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<AFL, MTT> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<AFL, RTT> {
			static const int GP = RTT;
			static const int OP = VEC_AFP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<AFL, RTD> {
			static const int GP = RVD;
			static const int OP = ORI_CIR;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<AFL, TVD> {
			static const int GP = ORI_CIR;
			static const int OP = ORI_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, TSD> {
			static const int GP = TVT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, TRT> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<AFL, RVD> {
			static const int GP = RVD;
			static const int OP = ORI_CIR;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<AFL, TST> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<AFL, TVT> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<AFL, BST> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, SCA> {
			static const int GP = AFP;
			static const int OP = AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, ORI> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, INF> {
			static const int GP = INF_AFP;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, MNK> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, HYP> {
			static const int GP = HYP_DFP;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, PSS> {
			static const int GP = DAP;
			static const int OP = SCA;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<AFP, PNT> {
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, PAR> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, CIR> {
			static const int GP = TST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, SPH> {
			static const int GP = PNT_DAP;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFP, STA> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, DRV> {
			static const int GP = DRV_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, DRB> {
			static const int GP = DRV_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, DRT> {
			static const int GP = INF_DAP;
			static const int OP = SCA;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<AFP, TNV> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, TNB> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, TNT> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFP, LIN> {
			static const int GP = TST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, PLN> {
			static const int GP = PNT_DAP;
			static const int OP = SCA;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFP, FLP> {
			static const int GP = FLP_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, DFP> {
			static const int GP = TRT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, DLL> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, DLP> {
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, VEC> {
			static const int GP = VEC_AFP;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, BIV> {
			static const int GP = BIV_AFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, TRI> {
			static const int GP = TRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, AFF> {
			static const int GP = VEC_AFP;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, AFL> {
			static const int GP = BIV_AFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, AFP> {
			static const int GP = TRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, DAP> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, DAF> {
			static const int GP = VEC_DAP;
			static const int OP = SCA;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFP, DAL> {
			static const int GP = BIV_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, MNV> {
			static const int GP = BIV_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, ROT> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, MOT> {
			static const int GP = RTC;
			static const int OP = ORI_SPH;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<AFP, DIL> {
			static const int GP = ORI_SPH;
			static const int OP = ORI_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, TRV> {
			static const int GP = AFP;
			static const int OP = AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, MTD> {
			static const int GP = RTC;
			static const int OP = ORI_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFP, TRS> {
			static const int GP = FLP_AFP;
			static const int OP = ORI_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, RTC> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<AFP, MTT> {
			static const int GP = RTC;
			static const int OP = ORI_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFP, RTT> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFP, RTD> {
			static const int GP = PAR_TNB;
			static const int OP = ORI_SPH;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFP, TVD> {
			static const int GP = ORI_SPH;
			static const int OP = ORI_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, TSD> {
			static const int GP = FLP_AFP;
			static const int OP = ORI_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, TRT> {
			static const int GP = PAR_AFP;
			static const int OP = ORI_SPH;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFP, RVD> {
			static const int GP = PAR_TNB;
			static const int OP = ORI_SPH;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFP, TST> {
			static const int GP = PAR_AFP;
			static const int OP = ORI_SPH;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFP, TVT> {
			static const int GP = RTC;
			static const int OP = ORI_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFP, BST> {
			static const int GP = PAR_AFP;
			static const int OP = ORI_SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, SCA> {
			static const int GP = DAP;
			static const int OP = DAP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, ORI> {
			static const int GP = ORI;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, INF> {
			static const int GP = INF_DAP;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, MNK> {
			static const int GP = TRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, HYP> {
			static const int GP = HYP_FLP;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, PSS> {
			static const int GP = AFP;
			static const int OP = SCA;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<DAP, PNT> {
			static const int GP = PNT_DAP;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, PAR> {
			static const int GP = TST;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, CIR> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAP, SPH> {
			static const int GP = PNT_AFP;
			static const int OP = SCA;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<DAP, STA> {
			static const int GP = TST;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, DRV> {
			static const int GP = DRV_DAP;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, DRB> {
			static const int GP = DRV_AFP;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DAP, DRT> {
			static const int GP = INF_AFP;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<DAP, TNV> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, TNB> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, TNT> {
			static const int GP = TNT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, LIN> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAP, PLN> {
			static const int GP = PNT_AFP;
			static const int OP = SCA;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<DAP, FLP> {
			static const int GP = TRT;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, DFP> {
			static const int GP = FLP_AFP;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DAP, DLL> {
			static const int GP = TST;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, DLP> {
			static const int GP = PNT_DAP;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, VEC> {
			static const int GP = VEC_DAP;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, BIV> {
			static const int GP = BIV_DAP;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, TRI> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, AFF> {
			static const int GP = VEC_DAP;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, AFL> {
			static const int GP = BIV_DAP;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, AFP> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, DAP> {
			static const int GP = TRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, DAF> {
			static const int GP = VEC_AFP;
			static const int OP = SCA;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<DAP, DAL> {
			static const int GP = BIV_AFP;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAP, MNV> {
			static const int GP = BIV_AFP;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAP, ROT> {
			static const int GP = VEC_DAL;
			static const int OP = VEC_DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, MOT> {
			static const int GP = MTT;
			static const int OP = VEC_DAL;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<DAP, DIL> {
			static const int GP = TVD;
			static const int OP = DAP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, TRV> {
			static const int GP = DAP;
			static const int OP = DAP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, MTD> {
			static const int GP = MTT;
			static const int OP = VEC_DAL;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<DAP, TRS> {
			static const int GP = TRT;
			static const int OP = BIV_DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, RTC> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<DAP, MTT> {
			static const int GP = MTT;
			static const int OP = VEC_DAL;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<DAP, RTT> {
			static const int GP = VEC_DAL;
			static const int OP = VEC_DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, RTD> {
			static const int GP = RVD;
			static const int OP = VEC_DAL;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<DAP, TVD> {
			static const int GP = TVD;
			static const int OP = DAP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, TSD> {
			static const int GP = TRT;
			static const int OP = BIV_DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAP, TRT> {
			static const int GP = TST;
			static const int OP = VEC_DAL;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<DAP, RVD> {
			static const int GP = RVD;
			static const int OP = VEC_DAL;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<DAP, TST> {
			static const int GP = TST;
			static const int OP = VEC_DAL;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<DAP, TVT> {
			static const int GP = MTT;
			static const int OP = VEC_DAL;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<DAP, BST> {
			static const int GP = TST;
			static const int OP = VEC_DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, SCA> {
			static const int GP = DAF;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, ORI> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, INF> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, MNK> {
			static const int GP = MNK_DAF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, HYP> {
			static const int GP = HYP_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, PSS> {
			static const int GP = AFF;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAF, PNT> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, PAR> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, CIR> {
			static const int GP = PNT_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, SPH> {
			static const int GP = BST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, STA> {
			static const int GP = PNT_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DRV> {
			static const int GP = INF_CIR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DRB> {
			static const int GP = INF_PAR;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DRT> {
			static const int GP = TSD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TNV> {
			static const int GP = TNV_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TNB> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TNT> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, LIN> {
			static const int GP = PNT_DLL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, PLN> {
			static const int GP = BST;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, FLP> {
			static const int GP = PNT_DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DFP> {
			static const int GP = PNT_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DLL> {
			static const int GP = PNT_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DLP> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, VEC> {
			static const int GP = VEC_DAF;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, BIV> {
			static const int GP = BIV_DAF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TRI> {
			static const int GP = MNK_AFF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, AFF> {
			static const int GP = VEC_DAF;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, AFL> {
			static const int GP = VEC_DAL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, AFP> {
			static const int GP = VEC_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DAP> {
			static const int GP = VEC_AFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DAF> {
			static const int GP = VEC_AFF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DAL> {
			static const int GP = VEC_AFL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, MNV> {
			static const int GP = BIV_AFF;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, ROT> {
			static const int GP = VEC_DAL;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, MOT> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, DIL> {
			static const int GP = ORI_DFP;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TRV> {
			static const int GP = BIV_DAP;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, MTD> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TRS> {
			static const int GP = PNT_DFP;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, RTC> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAF, MTT> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, RTT> {
			static const int GP = VEC_DAL;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, RTD> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TVD> {
			static const int GP = ORI_CIR;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TSD> {
			static const int GP = PNT_DFP;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TRT> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, RVD> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TST> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, TVT> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAF, BST> {
			static const int GP = PNT_CIR;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, SCA> {
			static const int GP = DAL;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, ORI> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, INF> {
			static const int GP = INF_DAL;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, MNK> {
			static const int GP = MNK_DAL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, HYP> {
			static const int GP = HYP_LIN;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, PSS> {
			static const int GP = AFL;
			static const int OP = SCA;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<DAL, PNT> {
			static const int GP = PNT_DAL;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, PAR> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, CIR> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, SPH> {
			static const int GP = PNT_AFL;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, STA> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, DRV> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, DRB> {
			static const int GP = MTD;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, DRT> {
			static const int GP = INF_STA;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DAL, TNV> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, TNB> {
			static const int GP = TNV_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, TNT> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, LIN> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, PLN> {
			static const int GP = PNT_AFL;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, FLP> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, DFP> {
			static const int GP = TVT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, DLL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, DLP> {
			static const int GP = PNT_DAL;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, VEC> {
			static const int GP = VEC_DAL;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, BIV> {
			static const int GP = BIV_DAL;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, TRI> {
			static const int GP = MNK_AFL;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, AFF> {
			static const int GP = VEC_DAL;
			static const int OP = DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, AFL> {
			static const int GP = BIV_DAL;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, AFP> {
			static const int GP = BIV_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, DAP> {
			static const int GP = BIV_AFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, DAF> {
			static const int GP = VEC_AFL;
			static const int OP = SCA;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, DAL> {
			static const int GP = RTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, MNV> {
			static const int GP = RTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, ROT> {
			static const int GP = BIV_DAL;
			static const int OP = VEC_DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, MOT> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DAL, DIL> {
			static const int GP = ORI_STA;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, TRV> {
			static const int GP = VEC_DAP;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, MTD> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, TRS> {
			static const int GP = PAR_DFP;
			static const int OP = VEC_DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, RTC> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<DAL, MTT> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, RTT> {
			static const int GP = BIV_DAL;
			static const int OP = VEC_DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, RTD> {
			static const int GP = PAR_TNB;
			static const int OP = VEC_DAF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, TVD> {
			static const int GP = ORI_PAR;
			static const int OP = DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, TSD> {
			static const int GP = PAR_DFP;
			static const int OP = VEC_DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DAL, TRT> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, RVD> {
			static const int GP = PAR_TNB;
			static const int OP = VEC_DAF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, TST> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, TVT> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DAL, BST> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, SCA> {
			static const int GP = MNV;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, ORI> {
			static const int GP = TNV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, INF> {
			static const int GP = DRV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, MNK> {
			static const int GP = VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, HYP> {
			static const int GP = HYP_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, PSS> {
			static const int GP = BIV;
			static const int OP = SCA;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<MNV, PNT> {
			static const int GP = PNT_MNV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, PAR> {
			static const int GP = PAR_MNV;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, CIR> {
			static const int GP = PAR_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, SPH> {
			static const int GP = PNT_BIV;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, STA> {
			static const int GP = STA_MNV;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, DRV> {
			static const int GP = DRV_LIN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, DRB> {
			static const int GP = DRV_PLN;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, DRT> {
			static const int GP = DRB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, TNV> {
			static const int GP = TNV_VEC;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, TNB> {
			static const int GP = TNV_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, TNT> {
			static const int GP = TNB;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, LIN> {
			static const int GP = MOT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, PLN> {
			static const int GP = PLN_MNV;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, FLP> {
			static const int GP = LIN_FLP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, DFP> {
			static const int GP = LIN_DFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, DLL> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, DLP> {
			static const int GP = PLN_BIV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, VEC> {
			static const int GP = VEC_MNV;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, BIV> {
			static const int GP = BIV_MNV;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, TRI> {
			static const int GP = MNK_BIV;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, AFF> {
			static const int GP = BIV_DAF;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, AFL> {
			static const int GP = BIV_DAL;
			static const int OP = PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, AFP> {
			static const int GP = BIV_DAP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, DAP> {
			static const int GP = BIV_AFP;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, DAF> {
			static const int GP = BIV_AFF;
			static const int OP = SCA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, DAL> {
			static const int GP = RTT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, MNV> {
			static const int GP = ROT;
			static const int OP = SCA;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, ROT> {
			static const int GP = BIV_MNV;
			static const int OP = BIV_MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, MOT> {
			static const int GP = LIN_DLL;
			static const int OP = BIV_MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, DIL> {
			static const int GP = ORI_DRV;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, TRV> {
			static const int GP = VEC_DAP;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, MTD> {
			static const int GP = PAR_DRB;
			static const int OP = BIV_MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, TRS> {
			static const int GP = PLN_DFP;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, RTC> {
			static const int GP = MTT;
			static const int OP = MNK_BIV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MNV, MTT> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, RTT> {
			static const int GP = BIV_DAL;
			static const int OP = BIV_MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, RTD> {
			static const int GP = DRV_TNB;
			static const int OP = BIV_MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, TVD> {
			static const int GP = ORI_PAR;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, TSD> {
			static const int GP = INF_PAR;
			static const int OP = MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNV, TRT> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, RVD> {
			static const int GP = PAR_TNB;
			static const int OP = BIV_MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, TST> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, TVT> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNV, BST> {
			static const int GP = PAR_MNV;
			static const int OP = BIV_MNV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ROT, SCA> {
			static const int GP = ROT;
			static const int OP = ROT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ROT, ORI> {
			static const int GP = TNV_VEC;
			static const int OP = TNV_VEC;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<ROT, INF> {
			static const int GP = DRV_LIN;
			static const int OP = DRV_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<ROT, MNK> {
			static const int GP = VEC_MNV;
			static const int OP = VEC_MNV;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<ROT, HYP> {
			static const int GP = HYP_VEC_MNV;
			static const int OP = HYP_VEC_MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<ROT, PSS> {
			static const int GP = BIV_MNV;
			static const int OP = PSS;
			static const int IP = BIV_MNV;
		};
		
		template<> struct ProductIdx<ROT, PNT> {
			static const int GP = STA_VEC;
			static const int OP = STA_VEC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<ROT, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<ROT, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<ROT, SPH> {
			static const int GP = MNK_STA_BIV;
			static const int OP = SPH;
			static const int IP = MNK_STA_BIV;
		};
		
		template<> struct ProductIdx<ROT, STA> {
			static const int GP = STA_BIV;
			static const int OP = MUV;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<ROT, DRV> {
			static const int GP = DRV_PLN;
			static const int OP = DRV_PLN;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<ROT, DRB> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = DRV_LIN;
		};
		
		template<> struct ProductIdx<ROT, DRT> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = DRV_PLN;
		};
		
		template<> struct ProductIdx<ROT, TNV> {
			static const int GP = TNV_BIV;
			static const int OP = TNV_BIV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<ROT, TNB> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = TNV_VEC;
		};
		
		template<> struct ProductIdx<ROT, TNT> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = TNV_BIV;
		};
		
		template<> struct ProductIdx<ROT, LIN> {
			static const int GP = LIN_DLL;
			static const int OP = PLN_DLP;
			static const int IP = PLN_DFP;
		};
		
		template<> struct ProductIdx<ROT, PLN> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = LIN_DLP;
		};
		
		template<> struct ProductIdx<ROT, FLP> {
			static const int GP = LIN_DLP;
			static const int OP = LIN_DLP;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<ROT, DFP> {
			static const int GP = LIN_PLN;
			static const int OP = DFP;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<ROT, DLL> {
			static const int GP = MOT;
			static const int OP = PLN_FLP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<ROT, DLP> {
			static const int GP = LIN_PLN;
			static const int OP = LIN_PLN;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<ROT, VEC> {
			static const int GP = VEC_BIV;
			static const int OP = VEC_BIV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ROT, BIV> {
			static const int GP = ROT;
			static const int OP = BIV;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<ROT, TRI> {
			static const int GP = VEC_BIV;
			static const int OP = TRI;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<ROT, AFF> {
			static const int GP = VEC_AFL;
			static const int OP = VEC_AFL;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<ROT, AFL> {
			static const int GP = RTT;
			static const int OP = VEC_AFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<ROT, AFP> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<ROT, DAP> {
			static const int GP = VEC_DAL;
			static const int OP = VEC_DAL;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<ROT, DAF> {
			static const int GP = VEC_DAL;
			static const int OP = DAF;
			static const int IP = VEC_DAL;
		};
		
		template<> struct ProductIdx<ROT, DAL> {
			static const int GP = BIV_DAL;
			static const int OP = VEC_DAF;
			static const int IP = VEC_DAP;
		};
		
		template<> struct ProductIdx<ROT, MNV> {
			static const int GP = BIV_MNV;
			static const int OP = BIV_MNV;
			static const int IP = MNV;
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
			static const int GP = PAR_TNB;
			static const int OP = BIV_DAL;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<MOT, INF> {
			static const int GP = DRV_LIN;
			static const int OP = DRV_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<MOT, MNK> {
			static const int GP = LIN_DLP;
			static const int OP = VEC_MNV;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<MOT, HYP> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<MOT, PSS> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = LIN_DLL;
		};
		
		template<> struct ProductIdx<MOT, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<MOT, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<MOT, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
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
			static const int GP = DRV_PLN;
			static const int OP = DRV_PLN;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<MOT, DRB> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = DRV_LIN;
		};
		
		template<> struct ProductIdx<MOT, DRT> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = DRV_PLN;
		};
		
		template<> struct ProductIdx<MOT, TNV> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<MOT, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<MOT, TNT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MOT, LIN> {
			static const int GP = LIN_DLL;
			static const int OP = PLN_DLP;
			static const int IP = PLN_DFP;
		};
		
		template<> struct ProductIdx<MOT, PLN> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = LIN_DLP;
		};
		
		template<> struct ProductIdx<MOT, FLP> {
			static const int GP = LIN_DLP;
			static const int OP = LIN_DLP;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<MOT, DFP> {
			static const int GP = LIN_PLN;
			static const int OP = DFP;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<MOT, DLL> {
			static const int GP = MOT;
			static const int OP = PLN_FLP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<MOT, DLP> {
			static const int GP = LIN_PLN;
			static const int OP = LIN_PLN;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<MOT, VEC> {
			static const int GP = LIN_PLN;
			static const int OP = PLN_MNV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MOT, BIV> {
			static const int GP = MOT;
			static const int OP = MNK_PLN;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MOT, TRI> {
			static const int GP = LIN_PLN;
			static const int OP = TRI;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<MOT, AFF> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<MOT, AFL> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<MOT, AFP> {
			static const int GP = RTC;
			static const int OP = ORI_SPH;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<MOT, DAP> {
			static const int GP = MTT;
			static const int OP = VEC_DAL;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<MOT, DAF> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<MOT, DAL> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<MOT, MNV> {
			static const int GP = LIN_DLL;
			static const int OP = BIV_MNV;
			static const int IP = MNK_DLP;
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
			static const int OP = PAR_BIV;
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
			static const int OP = PAR_BIV;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MOT, RTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = DRV_DAP;
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
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = ORI_DRT;
		};
		
		template<> struct ProductIdx<DIL, PNT> {
			static const int GP = HYP_FLP;
			static const int OP = HYP_FLP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<DIL, PAR> {
			static const int GP = TRT;
			static const int OP = MUV;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<DIL, CIR> {
			static const int GP = FLP_AFP;
			static const int OP = PNT_SPH;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<DIL, SPH> {
			static const int GP = HYP_DFP;
			static const int OP = SPH;
			static const int IP = HYP_DFP;
		};
		
		template<> struct ProductIdx<DIL, STA> {
			static const int GP = HYP_LIN;
			static const int OP = HYP_LIN;
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
			static const int GP = INF_STA;
			static const int OP = LIN;
			static const int IP = INF_STA;
		};
		
		template<> struct ProductIdx<DIL, PLN> {
			static const int GP = INF_AFP;
			static const int OP = PLN;
			static const int IP = INF_AFP;
		};
		
		template<> struct ProductIdx<DIL, FLP> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<DIL, DFP> {
			static const int GP = INF_SPH;
			static const int OP = INF_SPH;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<DIL, DLL> {
			static const int GP = INF_DAL;
			static const int OP = INF_DAL;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<DIL, DLP> {
			static const int GP = INF_DAP;
			static const int OP = INF_DAP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DIL, VEC> {
			static const int GP = ORI_DRV;
			static const int OP = ORI_DRV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DIL, BIV> {
			static const int GP = ORI_DRB;
			static const int OP = ORI_DRB;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<DIL, TRI> {
			static const int GP = ORI_DRT;
			static const int OP = ORI_DRT;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<DIL, AFF> {
			static const int GP = ORI_FLP;
			static const int OP = ORI_FLP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DIL, AFL> {
			static const int GP = ORI_LIN;
			static const int OP = ORI_LIN;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<DIL, AFP> {
			static const int GP = ORI_SPH;
			static const int OP = ORI_SPH;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<DIL, DAP> {
			static const int GP = TVD;
			static const int OP = DAP;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<DIL, DAF> {
			static const int GP = ORI_DFP;
			static const int OP = DAF;
			static const int IP = ORI_DFP;
		};
		
		template<> struct ProductIdx<DIL, DAL> {
			static const int GP = ORI_STA;
			static const int OP = DAL;
			static const int IP = ORI_STA;
		};
		
		template<> struct ProductIdx<DIL, MNV> {
			static const int GP = ORI_DRV;
			static const int OP = MNV;
			static const int IP = ORI_DRV;
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
			static const int GP = INF_DAP;
			static const int OP = MNK_DLP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRV, MNK> {
			static const int GP = DAP;
			static const int OP = MNK;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<TRV, HYP> {
			static const int GP = HYP_FLP;
			static const int OP = MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRV, PSS> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = MNK_AFP;
		};
		
		template<> struct ProductIdx<TRV, PNT> {
			static const int GP = PNT_DAP;
			static const int OP = PNT_DAP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TRV, PAR> {
			static const int GP = TST;
			static const int OP = PNT_DAL;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TRV, CIR> {
			static const int GP = PAR_AFP;
			static const int OP = PNT_SPH;
			static const int IP = PNT_AFL;
		};
		
		template<> struct ProductIdx<TRV, SPH> {
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = PNT_AFP;
		};
		
		template<> struct ProductIdx<TRV, STA> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<TRV, DRV> {
			static const int GP = DRV_DAP;
			static const int OP = MNK_DLL;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TRV, DRB> {
			static const int GP = DRV_AFP;
			static const int OP = MNK_DFP;
			static const int IP = MNK_LIN;
		};
		
		template<> struct ProductIdx<TRV, DRT> {
			static const int GP = INF_AFP;
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
			static const int GP = PAR_AFP;
			static const int OP = PLN_DLP;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TRV, PLN> {
			static const int GP = PNT_AFP;
			static const int OP = PLN;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TRV, FLP> {
			static const int GP = TRT;
			static const int OP = PLN_BIV;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TRV, DFP> {
			static const int GP = FLP_AFP;
			static const int OP = INF_SPH;
			static const int IP = PLN_MNV;
		};
		
		template<> struct ProductIdx<TRV, DLL> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TRV, DLP> {
			static const int GP = PNT_DAP;
			static const int OP = MUV;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TRV, VEC> {
			static const int GP = BIV_AFP;
			static const int OP = MNK_DAL;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TRV, BIV> {
			static const int GP = VEC_AFP;
			static const int OP = MNK_DAF;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TRV, TRI> {
			static const int GP = AFP;
			static const int OP = TRI;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<TRV, AFF> {
			static const int GP = BIV_AFP;
			static const int OP = BIV_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TRV, AFL> {
			static const int GP = VEC_AFP;
			static const int OP = VEC_AFP;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<TRV, AFP> {
			static const int GP = AFP;
			static const int OP = AFP;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<TRV, DAP> {
			static const int GP = DAP;
			static const int OP = DAP;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<TRV, DAF> {
			static const int GP = BIV_DAP;
			static const int OP = DAF;
			static const int IP = BIV_DAP;
		};
		
		template<> struct ProductIdx<TRV, DAL> {
			static const int GP = VEC_DAP;
			static const int OP = DAL;
			static const int IP = VEC_DAP;
		};
		
		template<> struct ProductIdx<TRV, MNV> {
			static const int GP = VEC_DAP;
			static const int OP = MNV;
			static const int IP = MNK_AFF;
		};
		
		template<> struct ProductIdx<TRV, ROT> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TRV, MOT> {
			static const int GP = MTT;
			static const int OP = PAR_BIV;
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
			static const int IP = TNV_FLP;
		};
		
		template<> struct ProductIdx<TRV, TVD> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TRV, TSD> {
			static const int GP = TRT;
			static const int OP = PSS_MNK_PNT_SPH;
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
			static const int GP = PAR_TNB;
			static const int OP = BIV_DAL;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<MTD, INF> {
			static const int GP = DRV_LIN;
			static const int OP = DRV_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<MTD, MNK> {
			static const int GP = MTD;
			static const int OP = VEC_MNV;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<MTD, HYP> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<MTD, PSS> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = PAR_DRB;
		};
		
		template<> struct ProductIdx<MTD, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<MTD, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<MTD, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
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
			static const int GP = DRV_PLN;
			static const int OP = DRV_PLN;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<MTD, DRB> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = DRV_LIN;
		};
		
		template<> struct ProductIdx<MTD, DRT> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = DRV_PLN;
		};
		
		template<> struct ProductIdx<MTD, TNV> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<MTD, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<MTD, TNT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MTD, LIN> {
			static const int GP = PAR_DRB;
			static const int OP = PLN_DLP;
			static const int IP = INF_PAR;
		};
		
		template<> struct ProductIdx<MTD, PLN> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<MTD, FLP> {
			static const int GP = MTD;
			static const int OP = LIN_DLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<MTD, DFP> {
			static const int GP = PAR_DRB;
			static const int OP = INF_SPH;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<MTD, DLL> {
			static const int GP = MTD;
			static const int OP = INF_CIR;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<MTD, DLP> {
			static const int GP = PAR_DRB;
			static const int OP = PAR_DRB;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<MTD, VEC> {
			static const int GP = PAR_DRB;
			static const int OP = DRV_AFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MTD, BIV> {
			static const int GP = MTD;
			static const int OP = INF_AFP;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MTD, TRI> {
			static const int GP = PAR_DRB;
			static const int OP = ORI_DRT;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<MTD, AFF> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<MTD, AFL> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<MTD, AFP> {
			static const int GP = RTC;
			static const int OP = ORI_SPH;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<MTD, DAP> {
			static const int GP = MTT;
			static const int OP = VEC_DAL;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<MTD, DAF> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<MTD, DAL> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<MTD, MNV> {
			static const int GP = PAR_DRB;
			static const int OP = BIV_MNV;
			static const int IP = INF_DAP;
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
			static const int IP = DRV_DAP;
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
			static const int GP = ORI_FLP;
			static const int OP = MNK_AFF;
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
			static const int GP = HYP_FLP;
			static const int OP = MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRS, PSS> {
			static const int GP = MNK_DFP;
			static const int OP = PSS;
			static const int IP = MNK_DFP;
		};
		
		template<> struct ProductIdx<TRS, PNT> {
			static const int GP = PNT_FLP;
			static const int OP = PNT_FLP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TRS, PAR> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TRS, CIR> {
			static const int GP = PAR_DFP;
			static const int OP = PNT_SPH;
			static const int IP = PNT_DLL;
		};
		
		template<> struct ProductIdx<TRS, SPH> {
			static const int GP = PNT_DFP;
			static const int OP = SPH;
			static const int IP = PNT_DFP;
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
			static const int GP = TNV_FLP;
			static const int OP = MNK_AFL;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TRS, TNB> {
			static const int GP = TNV_DFP;
			static const int OP = MNK_AFP;
			static const int IP = MNK_DAL;
		};
		
		template<> struct ProductIdx<TRS, TNT> {
			static const int GP = ORI_DFP;
			static const int OP = TNT;
			static const int IP = MNK_DAF;
		};
		
		template<> struct ProductIdx<TRS, LIN> {
			static const int GP = PLN_DFP;
			static const int OP = LIN;
			static const int IP = PLN_DFP;
		};
		
		template<> struct ProductIdx<TRS, PLN> {
			static const int GP = LIN_DFP;
			static const int OP = PLN;
			static const int IP = LIN_DFP;
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
			static const int GP = PLN_FLP;
			static const int OP = PLN_FLP;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<TRS, DLP> {
			static const int GP = LIN_FLP;
			static const int OP = LIN_FLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TRS, VEC> {
			static const int GP = LIN_FLP;
			static const int OP = MNK_LIN;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TRS, BIV> {
			static const int GP = PLN_FLP;
			static const int OP = MNK_PLN;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TRS, TRI> {
			static const int GP = DFP;
			static const int OP = TRI;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<TRS, AFF> {
			static const int GP = PNT_FLP;
			static const int OP = MUV;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TRS, AFL> {
			static const int GP = TVT;
			static const int OP = MUV;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<TRS, AFP> {
			static const int GP = FLP_AFP;
			static const int OP = ORI_SPH;
			static const int IP = BIV_AFF;
		};
		
		template<> struct ProductIdx<TRS, DAP> {
			static const int GP = TRT;
			static const int OP = BIV_DAF;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TRS, DAF> {
			static const int GP = PNT_DFP;
			static const int OP = DAF;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TRS, DAL> {
			static const int GP = PAR_DFP;
			static const int OP = VEC_DAF;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TRS, MNV> {
			static const int GP = PLN_DFP;
			static const int OP = MNV;
			static const int IP = MNK_DLP;
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
			static const int OP = PAR_BIV;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TRS, RTD> {
			static const int GP = MTD;
			static const int OP = MTD;
			static const int IP = DRV_DAP;
		};
		
		template<> struct ProductIdx<TRS, TVD> {
			static const int GP = TRT;
			static const int OP = PSS_MNK_PNT_SPH;
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
			static const int OP = VEC_DAL;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, INF> {
			static const int GP = MTD;
			static const int OP = LIN_DLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, MNK> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RTC, HYP> {
			static const int GP = MTT;
			static const int OP = MNK_STA_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, PSS> {
			static const int GP = MTT;
			static const int OP = SCA;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RTC, PNT> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, PAR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
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
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<RTC, STA> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTC, DRV> {
			static const int GP = PAR_DRB;
			static const int OP = PLN_DLP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTC, DRB> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RTC, DRT> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<RTC, TNV> {
			static const int GP = PAR_TNB;
			static const int OP = VEC_DAF;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<RTC, TNB> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<RTC, TNT> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<RTC, LIN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTC, PLN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT_PAR;
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
			static const int OP = PNT_SPH;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTC, DLP> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
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
		
		template<> struct ProductIdx<RTC, AFF> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<RTC, AFL> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<RTC, AFP> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<RTC, DAP> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTC, DAF> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<RTC, DAL> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTC, MNV> {
			static const int GP = MTT;
			static const int OP = MNK_BIV;
			static const int IP = HYP_PNT;
		};
		
		template<> struct ProductIdx<RTC, ROT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<RTC, MOT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<RTC, DIL> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RTC, TRV> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<RTC, MTD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<RTC, TRS> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTC, RTC> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = MTT;
		};
		
		template<> struct ProductIdx<RTC, MTT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<RTC, RTT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<RTC, RTD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = HYP_PAR;
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
			static const int IP = HYP_PAR;
		};
		
		template<> struct ProductIdx<RTC, RVD> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<RTC, TST> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<RTC, TVT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT_PAR;
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
			static const int GP = PAR_TNB;
			static const int OP = BIV_DAL;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<MTT, INF> {
			static const int GP = PAR_DRB;
			static const int OP = LIN_DLL;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<MTT, MNK> {
			static const int GP = MTT;
			static const int OP = VEC_MNV;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<MTT, HYP> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
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
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<MTT, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
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
			static const int OP = LIN_DFP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<MTT, DRB> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<MTT, DRT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<MTT, TNV> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<MTT, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<MTT, TNT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<MTT, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<MTT, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<MTT, FLP> {
			static const int GP = MTT;
			static const int OP = LIN_DLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<MTT, DFP> {
			static const int GP = RTC;
			static const int OP = INF_SPH;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<MTT, DLL> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<MTT, DLP> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<MTT, VEC> {
			static const int GP = RTC;
			static const int OP = FLP_AFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MTT, BIV> {
			static const int GP = MTT;
			static const int OP = HYP_DFP;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<MTT, TRI> {
			static const int GP = RTC;
			static const int OP = ORI_DRT;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<MTT, AFF> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<MTT, AFL> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<MTT, AFP> {
			static const int GP = RTC;
			static const int OP = ORI_SPH;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<MTT, DAP> {
			static const int GP = MTT;
			static const int OP = VEC_DAL;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<MTT, DAF> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<MTT, DAL> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<MTT, MNV> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = HYP_FLP;
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
			static const int GP = TNV_VEC;
			static const int OP = TNV_VEC;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<RTT, INF> {
			static const int GP = PAR_DRB;
			static const int OP = LIN_DLL;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<RTT, MNK> {
			static const int GP = VEC_DAL;
			static const int OP = VEC_MNV;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<RTT, HYP> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RTT, PSS> {
			static const int GP = BIV_DAL;
			static const int OP = PSS;
			static const int IP = BIV_DAL;
		};
		
		template<> struct ProductIdx<RTT, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTT, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTT, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
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
			static const int OP = LIN_DFP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<RTT, DRB> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<RTT, DRT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<RTT, TNV> {
			static const int GP = TNV_BIV;
			static const int OP = TNV_BIV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<RTT, TNB> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = TNV_VEC;
		};
		
		template<> struct ProductIdx<RTT, TNT> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = TNV_BIV;
		};
		
		template<> struct ProductIdx<RTT, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<RTT, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<RTT, FLP> {
			static const int GP = MTT;
			static const int OP = LIN_DLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<RTT, DFP> {
			static const int GP = RTC;
			static const int OP = INF_SPH;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<RTT, DLL> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RTT, DLP> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTT, VEC> {
			static const int GP = VEC_AFL;
			static const int OP = BIV_AFF;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<RTT, BIV> {
			static const int GP = RTT;
			static const int OP = MNK_DAF;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RTT, TRI> {
			static const int GP = VEC_AFL;
			static const int OP = TRI;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<RTT, AFF> {
			static const int GP = VEC_AFL;
			static const int OP = VEC_AFL;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<RTT, AFL> {
			static const int GP = RTT;
			static const int OP = VEC_AFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<RTT, AFP> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<RTT, DAP> {
			static const int GP = VEC_DAL;
			static const int OP = VEC_DAL;
			static const int IP = DAP;
		};
		
		template<> struct ProductIdx<RTT, DAF> {
			static const int GP = VEC_DAL;
			static const int OP = DAF;
			static const int IP = VEC_DAL;
		};
		
		template<> struct ProductIdx<RTT, DAL> {
			static const int GP = BIV_DAL;
			static const int OP = VEC_DAF;
			static const int IP = VEC_DAP;
		};
		
		template<> struct ProductIdx<RTT, MNV> {
			static const int GP = BIV_DAL;
			static const int OP = BIV_MNV;
			static const int IP = MNK_AFF;
		};
		
		template<> struct ProductIdx<RTT, ROT> {
			static const int GP = RTT;
			static const int OP = RTT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RTT, MOT> {
			static const int GP = MTT;
			static const int OP = PAR_BIV;
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
			static const int OP = PAR_BIV;
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
			static const int IP = TNV_FLP;
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
			static const int GP = TNV_VEC;
			static const int OP = TNV_VEC;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<RTD, INF> {
			static const int GP = DRV_LIN;
			static const int OP = DRV_LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<RTD, MNK> {
			static const int GP = RTD;
			static const int OP = VEC_MNV;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<RTD, HYP> {
			static const int GP = HYP_VEC_MNV;
			static const int OP = HYP_VEC_MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RTD, PSS> {
			static const int GP = DRV_TNB;
			static const int OP = PSS;
			static const int IP = DRV_TNB;
		};
		
		template<> struct ProductIdx<RTD, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RTD, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RTD, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
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
			static const int GP = DRV_PLN;
			static const int OP = DRV_PLN;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<RTD, DRB> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = DRV_LIN;
		};
		
		template<> struct ProductIdx<RTD, DRT> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = DRV_PLN;
		};
		
		template<> struct ProductIdx<RTD, TNV> {
			static const int GP = TNV_BIV;
			static const int OP = TNV_BIV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<RTD, TNB> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = TNV_VEC;
		};
		
		template<> struct ProductIdx<RTD, TNT> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = TNV_BIV;
		};
		
		template<> struct ProductIdx<RTD, LIN> {
			static const int GP = PAR_DRB;
			static const int OP = PLN_DLP;
			static const int IP = INF_PAR;
		};
		
		template<> struct ProductIdx<RTD, PLN> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = MTD;
		};
		
		template<> struct ProductIdx<RTD, FLP> {
			static const int GP = MTD;
			static const int OP = LIN_DLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<RTD, DFP> {
			static const int GP = PAR_DRB;
			static const int OP = INF_SPH;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<RTD, DLL> {
			static const int GP = MTD;
			static const int OP = INF_CIR;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RTD, DLP> {
			static const int GP = PAR_DRB;
			static const int OP = PAR_DRB;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RTD, VEC> {
			static const int GP = DRV_TNB;
			static const int OP = DRV_TNB;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<RTD, BIV> {
			static const int GP = RTD;
			static const int OP = ORI_DRB;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RTD, TRI> {
			static const int GP = DRV_TNB;
			static const int OP = ORI_DRT;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<RTD, AFF> {
			static const int GP = PAR_TNB;
			static const int OP = PAR_TNB;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<RTD, AFL> {
			static const int GP = RVD;
			static const int OP = ORI_CIR;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<RTD, AFP> {
			static const int GP = PAR_TNB;
			static const int OP = ORI_SPH;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<RTD, DAP> {
			static const int GP = RVD;
			static const int OP = VEC_DAL;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<RTD, DAF> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<RTD, DAL> {
			static const int GP = PAR_TNB;
			static const int OP = VEC_DAF;
			static const int IP = ORI_PAR;
		};
		
		template<> struct ProductIdx<RTD, MNV> {
			static const int GP = DRV_TNB;
			static const int OP = BIV_MNV;
			static const int IP = ORI_DRV;
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
			static const int GP = INF_DAP;
			static const int OP = MNK_DLP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TVD, MNK> {
			static const int GP = TVD;
			static const int OP = MNK;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TVD, HYP> {
			static const int GP = HYP_FLP;
			static const int OP = MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TVD, PSS> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = ORI_SPH;
		};
		
		template<> struct ProductIdx<TVD, PNT> {
			static const int GP = PNT_DAP;
			static const int OP = PNT_DAP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TVD, PAR> {
			static const int GP = TST;
			static const int OP = PNT_DAL;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TVD, CIR> {
			static const int GP = PAR_AFP;
			static const int OP = PNT_SPH;
			static const int IP = PNT_AFL;
		};
		
		template<> struct ProductIdx<TVD, SPH> {
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = PNT_AFP;
		};
		
		template<> struct ProductIdx<TVD, STA> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<TVD, DRV> {
			static const int GP = DRV_DAP;
			static const int OP = MNK_DLL;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TVD, DRB> {
			static const int GP = DRV_AFP;
			static const int OP = MNK_DFP;
			static const int IP = MNK_LIN;
		};
		
		template<> struct ProductIdx<TVD, DRT> {
			static const int GP = INF_AFP;
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
			static const int GP = PAR_AFP;
			static const int OP = PLN_DLP;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TVD, PLN> {
			static const int GP = PNT_AFP;
			static const int OP = PLN;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TVD, FLP> {
			static const int GP = TRT;
			static const int OP = PLN_BIV;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TVD, DFP> {
			static const int GP = FLP_AFP;
			static const int OP = INF_SPH;
			static const int IP = PLN_MNV;
		};
		
		template<> struct ProductIdx<TVD, DLL> {
			static const int GP = TST;
			static const int OP = MUV;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TVD, DLP> {
			static const int GP = PNT_DAP;
			static const int OP = MUV;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TVD, VEC> {
			static const int GP = ORI_PAR;
			static const int OP = ORI_STA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TVD, BIV> {
			static const int GP = ORI_CIR;
			static const int OP = ORI_DFP;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TVD, TRI> {
			static const int GP = ORI_SPH;
			static const int OP = ORI_DRT;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<TVD, AFF> {
			static const int GP = ORI_PAR;
			static const int OP = ORI_PAR;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TVD, AFL> {
			static const int GP = ORI_CIR;
			static const int OP = ORI_CIR;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<TVD, AFP> {
			static const int GP = ORI_SPH;
			static const int OP = ORI_SPH;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<TVD, DAP> {
			static const int GP = TVD;
			static const int OP = DAP;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TVD, DAF> {
			static const int GP = ORI_CIR;
			static const int OP = DAF;
			static const int IP = ORI_CIR;
		};
		
		template<> struct ProductIdx<TVD, DAL> {
			static const int GP = ORI_PAR;
			static const int OP = DAL;
			static const int IP = ORI_PAR;
		};
		
		template<> struct ProductIdx<TVD, MNV> {
			static const int GP = ORI_PAR;
			static const int OP = MNV;
			static const int IP = ORI_FLP;
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
			static const int OP = PSS_MNK_PNT_SPH;
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
			static const int IP = TNV_FLP;
		};
		
		template<> struct ProductIdx<TVD, TVD> {
			static const int GP = TVD;
			static const int OP = TVD;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TVD, TSD> {
			static const int GP = TRT;
			static const int OP = PSS_MNK_PNT_SPH;
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
			static const int GP = ORI_FLP;
			static const int OP = MNK_AFF;
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
			static const int GP = HYP_FLP;
			static const int OP = MNK_PNT;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TSD, PSS> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = INF_SPH;
		};
		
		template<> struct ProductIdx<TSD, PNT> {
			static const int GP = PNT_FLP;
			static const int OP = PNT_FLP;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TSD, PAR> {
			static const int GP = TVT;
			static const int OP = PNT_LIN;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TSD, CIR> {
			static const int GP = PAR_DFP;
			static const int OP = PNT_SPH;
			static const int IP = PNT_DLL;
		};
		
		template<> struct ProductIdx<TSD, SPH> {
			static const int GP = PNT_DFP;
			static const int OP = SPH;
			static const int IP = PNT_DFP;
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
			static const int GP = TNV_FLP;
			static const int OP = MNK_AFL;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TSD, TNB> {
			static const int GP = TNV_DFP;
			static const int OP = MNK_AFP;
			static const int IP = MNK_DAL;
		};
		
		template<> struct ProductIdx<TSD, TNT> {
			static const int GP = ORI_DFP;
			static const int OP = TNT;
			static const int IP = MNK_DAF;
		};
		
		template<> struct ProductIdx<TSD, LIN> {
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = INF_PAR;
		};
		
		template<> struct ProductIdx<TSD, PLN> {
			static const int GP = INF_CIR;
			static const int OP = PLN;
			static const int IP = INF_CIR;
		};
		
		template<> struct ProductIdx<TSD, FLP> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TSD, DFP> {
			static const int GP = INF_SPH;
			static const int OP = INF_SPH;
			static const int IP = DFP;
		};
		
		template<> struct ProductIdx<TSD, DLL> {
			static const int GP = INF_CIR;
			static const int OP = INF_CIR;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<TSD, DLP> {
			static const int GP = INF_PAR;
			static const int OP = INF_PAR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TSD, VEC> {
			static const int GP = INF_PAR;
			static const int OP = INF_STA;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TSD, BIV> {
			static const int GP = INF_CIR;
			static const int OP = INF_AFP;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TSD, TRI> {
			static const int GP = INF_SPH;
			static const int OP = ORI_DRT;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<TSD, AFF> {
			static const int GP = PNT_FLP;
			static const int OP = MUV;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TSD, AFL> {
			static const int GP = TVT;
			static const int OP = MUV;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<TSD, AFP> {
			static const int GP = FLP_AFP;
			static const int OP = ORI_SPH;
			static const int IP = BIV_AFF;
		};
		
		template<> struct ProductIdx<TSD, DAP> {
			static const int GP = TRT;
			static const int OP = BIV_DAF;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TSD, DAF> {
			static const int GP = PNT_DFP;
			static const int OP = DAF;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TSD, DAL> {
			static const int GP = PAR_DFP;
			static const int OP = VEC_DAF;
			static const int IP = MUV;
		};
		
		template<> struct ProductIdx<TSD, MNV> {
			static const int GP = INF_PAR;
			static const int OP = MNV;
			static const int IP = INF_DAP;
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
			static const int OP = PSS_MNK_PNT_SPH;
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
			static const int IP = DRV_DAP;
		};
		
		template<> struct ProductIdx<TSD, TVD> {
			static const int GP = TRT;
			static const int OP = PSS_MNK_PNT_SPH;
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
			static const int GP = ORI_PAR;
			static const int OP = VEC_DAP;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRT, INF> {
			static const int GP = INF_PAR;
			static const int OP = PLN_DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRT, MNK> {
			static const int GP = TRT;
			static const int OP = VEC_MNV;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TRT, HYP> {
			static const int GP = HYP_PAR;
			static const int OP = MUV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRT, PSS> {
			static const int GP = FLP_AFP;
			static const int OP = PSS;
			static const int IP = FLP_AFP;
		};
		
		template<> struct ProductIdx<TRT, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TRT, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TRT, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
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
			static const int OP = LIN_DFP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TRT, DRB> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<TRT, DRT> {
			static const int GP = INF_CIR;
			static const int OP = DRT;
			static const int IP = PLN_FLP;
		};
		
		template<> struct ProductIdx<TRT, TNV> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TRT, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<TRT, TNT> {
			static const int GP = ORI_CIR;
			static const int OP = TNT;
			static const int IP = VEC_AFP;
		};
		
		template<> struct ProductIdx<TRT, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<TRT, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TRT, FLP> {
			static const int GP = TVT;
			static const int OP = LIN_DLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TRT, DFP> {
			static const int GP = PAR_DFP;
			static const int OP = INF_SPH;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<TRT, DLL> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TRT, DLP> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TRT, VEC> {
			static const int GP = RTC;
			static const int OP = FLP_AFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TRT, BIV> {
			static const int GP = MTT;
			static const int OP = HYP_DFP;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TRT, TRI> {
			static const int GP = FLP_AFP;
			static const int OP = ORI_DRT;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<TRT, AFF> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TRT, AFL> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<TRT, AFP> {
			static const int GP = PAR_AFP;
			static const int OP = ORI_SPH;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<TRT, DAP> {
			static const int GP = TST;
			static const int OP = VEC_DAL;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TRT, DAF> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TRT, DAL> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<TRT, MNV> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = HYP_FLP;
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
			static const int GP = TNV_VEC;
			static const int OP = TNV_VEC;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<RVD, INF> {
			static const int GP = PAR_DRB;
			static const int OP = LIN_DLL;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<RVD, MNK> {
			static const int GP = RVD;
			static const int OP = VEC_MNV;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<RVD, HYP> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<RVD, PSS> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = PAR_TNB;
		};
		
		template<> struct ProductIdx<RVD, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<RVD, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<RVD, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
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
			static const int OP = LIN_DFP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<RVD, DRB> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<RVD, DRT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<RVD, TNV> {
			static const int GP = TNV_BIV;
			static const int OP = TNV_BIV;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<RVD, TNB> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = TNV_VEC;
		};
		
		template<> struct ProductIdx<RVD, TNT> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = TNV_BIV;
		};
		
		template<> struct ProductIdx<RVD, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<RVD, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<RVD, FLP> {
			static const int GP = MTT;
			static const int OP = LIN_DLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<RVD, DFP> {
			static const int GP = RTC;
			static const int OP = INF_SPH;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<RVD, DLL> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<RVD, DLP> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<RVD, VEC> {
			static const int GP = PAR_TNB;
			static const int OP = TNV_DFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<RVD, BIV> {
			static const int GP = RVD;
			static const int OP = ORI_DFP;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<RVD, TRI> {
			static const int GP = PAR_TNB;
			static const int OP = ORI_DRT;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<RVD, AFF> {
			static const int GP = PAR_TNB;
			static const int OP = PAR_TNB;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<RVD, AFL> {
			static const int GP = RVD;
			static const int OP = ORI_CIR;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<RVD, AFP> {
			static const int GP = PAR_TNB;
			static const int OP = ORI_SPH;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<RVD, DAP> {
			static const int GP = RVD;
			static const int OP = VEC_DAL;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<RVD, DAF> {
			static const int GP = RVD;
			static const int OP = DAF;
			static const int IP = RVD;
		};
		
		template<> struct ProductIdx<RVD, DAL> {
			static const int GP = PAR_TNB;
			static const int OP = VEC_DAF;
			static const int IP = ORI_PAR;
		};
		
		template<> struct ProductIdx<RVD, MNV> {
			static const int GP = PAR_TNB;
			static const int OP = BIV_MNV;
			static const int IP = ORI_FLP;
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
			static const int IP = TNV_FLP;
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
			static const int GP = ORI_PAR;
			static const int OP = VEC_DAP;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TST, INF> {
			static const int GP = PAR_DRB;
			static const int OP = LIN_DLL;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TST, MNK> {
			static const int GP = TST;
			static const int OP = VEC_MNV;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TST, HYP> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TST, PSS> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = PAR_AFP;
		};
		
		template<> struct ProductIdx<TST, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TST, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TST, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
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
			static const int OP = LIN_DFP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TST, DRB> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<TST, DRT> {
			static const int GP = MTD;
			static const int OP = DRT;
			static const int IP = MOT;
		};
		
		template<> struct ProductIdx<TST, TNV> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TST, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<TST, TNT> {
			static const int GP = ORI_CIR;
			static const int OP = TNT;
			static const int IP = VEC_AFP;
		};
		
		template<> struct ProductIdx<TST, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<TST, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TST, FLP> {
			static const int GP = MTT;
			static const int OP = LIN_DLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TST, DFP> {
			static const int GP = RTC;
			static const int OP = INF_SPH;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<TST, DLL> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TST, DLP> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TST, VEC> {
			static const int GP = RTC;
			static const int OP = FLP_AFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TST, BIV> {
			static const int GP = MTT;
			static const int OP = HYP_DFP;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TST, TRI> {
			static const int GP = PAR_AFP;
			static const int OP = ORI_DRT;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<TST, AFF> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TST, AFL> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<TST, AFP> {
			static const int GP = PAR_AFP;
			static const int OP = ORI_SPH;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<TST, DAP> {
			static const int GP = TST;
			static const int OP = VEC_DAL;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TST, DAF> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TST, DAL> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<TST, MNV> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = HYP_FLP;
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
			static const int GP = PAR_TNB;
			static const int OP = BIV_DAL;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TVT, INF> {
			static const int GP = INF_PAR;
			static const int OP = PLN_DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TVT, MNK> {
			static const int GP = TVT;
			static const int OP = VEC_MNV;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<TVT, HYP> {
			static const int GP = RTC;
			static const int OP = STA_MNV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TVT, PSS> {
			static const int GP = PAR_DFP;
			static const int OP = PSS;
			static const int IP = PAR_DFP;
		};
		
		template<> struct ProductIdx<TVT, PNT> {
			static const int GP = RTC;
			static const int OP = RTC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<TVT, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<TVT, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
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
			static const int OP = LIN_DFP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<TVT, DRB> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<TVT, DRT> {
			static const int GP = INF_CIR;
			static const int OP = DRT;
			static const int IP = PLN_FLP;
		};
		
		template<> struct ProductIdx<TVT, TNV> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<TVT, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<TVT, TNT> {
			static const int GP = RVD;
			static const int OP = TNT;
			static const int IP = RTT;
		};
		
		template<> struct ProductIdx<TVT, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<TVT, PLN> {
			static const int GP = MTT;
			static const int OP = PLN;
			static const int IP = TVT;
		};
		
		template<> struct ProductIdx<TVT, FLP> {
			static const int GP = TVT;
			static const int OP = LIN_DLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<TVT, DFP> {
			static const int GP = PAR_DFP;
			static const int OP = INF_SPH;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<TVT, DLL> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<TVT, DLP> {
			static const int GP = RTC;
			static const int OP = PAR_DFP;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<TVT, VEC> {
			static const int GP = RTC;
			static const int OP = FLP_AFP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TVT, BIV> {
			static const int GP = MTT;
			static const int OP = HYP_DFP;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<TVT, TRI> {
			static const int GP = PAR_DFP;
			static const int OP = ORI_DRT;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<TVT, AFF> {
			static const int GP = RTC;
			static const int OP = PAR_AFP;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TVT, AFL> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<TVT, AFP> {
			static const int GP = RTC;
			static const int OP = ORI_SPH;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<TVT, DAP> {
			static const int GP = MTT;
			static const int OP = VEC_DAL;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<TVT, DAF> {
			static const int GP = MTT;
			static const int OP = DAF;
			static const int IP = TST;
		};
		
		template<> struct ProductIdx<TVT, DAL> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<TVT, MNV> {
			static const int GP = RTC;
			static const int OP = BIV_MNV;
			static const int IP = HYP_FLP;
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
			static const int GP = ORI_PAR;
			static const int OP = VEC_DAP;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<BST, INF> {
			static const int GP = INF_PAR;
			static const int OP = PLN_DFP;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<BST, MNK> {
			static const int GP = PSS_MNK_PNT_SPH;
			static const int OP = VEC_MNV;
			static const int IP = DIL;
		};
		
		template<> struct ProductIdx<BST, HYP> {
			static const int GP = HYP_PAR;
			static const int OP = MUV;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<BST, PSS> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = PNT_SPH;
		};
		
		template<> struct ProductIdx<BST, PNT> {
			static const int GP = PNT_PAR;
			static const int OP = PNT_PAR;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<BST, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = BST;
		};
		
		template<> struct ProductIdx<BST, CIR> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = PNT_PAR;
		};
		
		template<> struct ProductIdx<BST, SPH> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = PNT_CIR;
		};
		
		template<> struct ProductIdx<BST, STA> {
			static const int GP = MTT;
			static const int OP = HYP_CIR;
			static const int IP = PNT_VEC;
		};
		
		template<> struct ProductIdx<BST, DRV> {
			static const int GP = MTD;
			static const int OP = LIN_DFP;
			static const int IP = TRS;
		};
		
		template<> struct ProductIdx<BST, DRB> {
			static const int GP = PAR_DRB;
			static const int OP = MNK_DFP;
			static const int IP = LIN_FLP;
		};
		
		template<> struct ProductIdx<BST, DRT> {
			static const int GP = INF_CIR;
			static const int OP = DRT;
			static const int IP = PLN_FLP;
		};
		
		template<> struct ProductIdx<BST, TNV> {
			static const int GP = RVD;
			static const int OP = BIV_DAP;
			static const int IP = TRV;
		};
		
		template<> struct ProductIdx<BST, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = MNK_AFP;
			static const int IP = BIV_AFP;
		};
		
		template<> struct ProductIdx<BST, TNT> {
			static const int GP = ORI_CIR;
			static const int OP = TNT;
			static const int IP = VEC_AFP;
		};
		
		template<> struct ProductIdx<BST, LIN> {
			static const int GP = RTC;
			static const int OP = PLN_DLP;
			static const int IP = PNT_FLP;
		};
		
		template<> struct ProductIdx<BST, PLN> {
			static const int GP = PNT_CIR;
			static const int OP = PLN;
			static const int IP = PNT_LIN;
		};
		
		template<> struct ProductIdx<BST, FLP> {
			static const int GP = TVT;
			static const int OP = LIN_DLP;
			static const int IP = TSD;
		};
		
		template<> struct ProductIdx<BST, DFP> {
			static const int GP = PAR_DFP;
			static const int OP = INF_SPH;
			static const int IP = LIN_PLN;
		};
		
		template<> struct ProductIdx<BST, DLL> {
			static const int GP = MTT;
			static const int OP = PNT_DFP;
			static const int IP = PLN_PLN;
		};
		
		template<> struct ProductIdx<BST, DLP> {
			static const int GP = PNT_PAR;
			static const int OP = PNT_DLL;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<BST, VEC> {
			static const int GP = PNT_PAR;
			static const int OP = MUV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<BST, BIV> {
			static const int GP = PAR_BIV;
			static const int OP = HYP_DFP;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<BST, TRI> {
			static const int GP = MNK_PNT_SPH;
			static const int OP = ORI_DRT;
			static const int IP = VEC_BIV;
		};
		
		template<> struct ProductIdx<BST, AFF> {
			static const int GP = PNT_PAR;
			static const int OP = PNT_AFL;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<BST, AFL> {
			static const int GP = MTT;
			static const int OP = PNT_AFP;
			static const int IP = VEC_AFF;
		};
		
		template<> struct ProductIdx<BST, AFP> {
			static const int GP = PAR_AFP;
			static const int OP = ORI_SPH;
			static const int IP = VEC_AFL;
		};
		
		template<> struct ProductIdx<BST, DAP> {
			static const int GP = TST;
			static const int OP = VEC_DAL;
			static const int IP = TVD;
		};
		
		template<> struct ProductIdx<BST, DAF> {
			static const int GP = PNT_CIR;
			static const int OP = DAF;
			static const int IP = PNT_DAL;
		};
		
		template<> struct ProductIdx<BST, DAL> {
			static const int GP = RTC;
			static const int OP = VEC_DAF;
			static const int IP = PNT_DAP;
		};
		
		template<> struct ProductIdx<BST, MNV> {
			static const int GP = PAR_MNV;
			static const int OP = BIV_MNV;
			static const int IP = HYP_FLP;
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
	