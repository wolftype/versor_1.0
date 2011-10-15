	#ifndef VSR_MKTYPES_INCLUDED
	#define VSR_MKTYPES_INCLUDED
	
	#include <string>
	#include <map>
	#include "CongaHeaders.h"
	#include "State.h"
	
	namespace con {
		using namespace std;
		enum {
						_SCA = 0,
						_ORI = 1,
						_INF = 2,
						_MNK = 3,
						_HYP = 4,
						_PSS = 5,
						_PNT = 6,
						_PAR = 7,
						_CIR = 8,
						_SPH = 9,
						_STA = 10,
						_DRV = 11,
						_DRB = 12,
						_DRT = 13,
						_TNV = 14,
						_TNB = 15,
						_TNT = 16,
						_LIN = 17,
						_PLN = 18,
						_FLP = 19,
						_DLL = 20,
						_DLP = 21,
						_VEC = 22,
						_BIV = 23,
						_TRI = 24,
						_AFF = 25,
						_AFL = 26,
						_AFP = 27,
						_ROT = 28,
						_TRS = 29,
						_DIL = 30,
						_MOT = 31,
						_TRV = 32,
						_MTD = 33,
						_ROT_DIL = 34,
						_ROT_TRV = 35,
						_TRS_DIL = 36,
						_TRS_TRV = 37,
						_DIL_TRV = 38,
						_MOT_TRV = 39,
						_ROT_ORI = 40,
						_ROT_INF = 41,
						_ROT_MNK = 42,
						_ROT_HYP = 43,
						_ROT_PSS = 44,
						_ROT_PNT = 45,
						_ROT_CIR = 46,
						_ROT_SPH = 47,
						_ROT_STA = 48,
						_ROT_DRV = 49,
						_ROT_TNV = 50,
						_ROT_LIN = 51,
						_ROT_PLN = 52,
						_ROT_DLP = 53,
						_ROT_VEC = 54,
						_ROT_AFF = 55,
						_TRS_ORI = 56,
						_TRS_HYP = 57,
						_TRS_PSS = 58,
						_TRS_PNT = 59,
						_TRS_PAR = 60,
						_TRS_CIR = 61,
						_TRS_SPH = 62,
						_TRS_TNV = 63,
						_TRS_TNB = 64,
						_TRS_TNT = 65,
						_TRS_LIN = 66,
						_TRS_PLN = 67,
						_TRS_DLL = 68,
						_TRS_DLP = 69,
						_TRS_TRI = 70,
						_TRS_AFP = 71,
						_DIL_PSS = 72,
						_DIL_SPH = 73,
						_DIL_STA = 74,
						_DIL_LIN = 75,
						_DIL_PLN = 76,
						_DIL_DLL = 77,
						_DIL_DLP = 78,
						_DIL_VEC = 79,
						_DIL_BIV = 80,
						_DIL_AFL = 81,
						_DIL_AFP = 82,
						_MOT_ORI = 83,
						_MOT_TNV = 84,
						_TRV_MNK = 85,
						_TRV_PSS = 86,
						_TRV_PNT = 87,
						_TRV_PAR = 88,
						_TRV_CIR = 89,
						_TRV_SPH = 90,
						_TRV_DRV = 91,
						_TRV_DRB = 92,
						_TRV_VEC = 93,
						_TRV_BIV = 94,
						_MTD_PSS = 95,
						_ORI_PAR = 96,
						_ORI_CIR = 97,
						_ORI_STA = 98,
						_INF_PAR = 99,
						_INF_CIR = 100,
						_INF_SPH = 101,
						_MNK_PNT = 102,
						_MNK_PAR = 103,
						_MNK_CIR = 104,
						_MNK_SPH = 105,
						_MNK_STA = 106,
						_MNK_LIN = 107,
						_MNK_PLN = 108,
						_MNK_DLL = 109,
						_MNK_DLP = 110,
						_MNK_VEC = 111,
						_MNK_BIV = 112,
						_MNK_AFF = 113,
						_MNK_AFL = 114,
						_HYP_PSS = 115,
						_HYP_PNT = 116,
						_HYP_PAR = 117,
						_HYP_CIR = 118,
						_HYP_SPH = 119,
						_HYP_STA = 120,
						_HYP_VEC = 121,
						_HYP_BIV = 122,
						_PSS_STA = 123,
						_PSS_AFF = 124,
						_PSS_AFL = 125,
						_PNT_PNT = 126,
						_PNT_PAR = 127,
						_PNT_CIR = 128,
						_PNT_SPH = 129,
						_PNT_LIN = 130,
						_PNT_DLL = 131,
						_PNT_VEC = 132,
						_PNT_BIV = 133,
						_PNT_AFL = 134,
						_PAR_BIV = 135,
						_CIR_BIV = 136,
						_SPH_VEC = 137,
						_SPH_BIV = 138,
						_SPH_AFL = 139,
						_STA_TRI = 140,
						_DRV_TNB = 141,
						_PLN_PLN = 142,
						_PLN_DLP = 143,
						_PLN_BIV = 144,
						_DLP_BIV = 145,
						_VEC_AFF = 146,
						_BIV_AFF = 147,
						_TRI_AFF = 148,
						_TRI_AFL = 149,
						_ROT_TRV_MNK = 150,
						_ROT_TRV_PSS = 151,
						_ROT_MNK_PNT = 152,
						_ROT_HYP_PSS = 153,
						_TRV_MNK_VEC = 154,
						_TRV_MNK_BIV = 155,
						_MNK_PNT_PNT = 156,
						_MNK_PNT_SPH = 157,
						_MNK_PNT_LIN = 158,
						_MNK_PNT_DLL = 159,
						_MNK_PNT_AFL = 160,
						_MNK_SPH_AFL = 161,
						_MNK_VEC_AFF = 162,
						_MNK_BIV_AFF = 163,
						_HYP_IP_SPH = 164,
						_BIV_IP_SPH = 165,
						_MUV = 166
			
		};
		
		typedef map<string, int> IdxMap;
		typedef map<string, int>::iterator IdxIter;
		
		typedef State (*CXR)(const State& s);
		
		class Mk {
			private:
				static char dummy;
				static void init();
			public:
				static IdxMap type;
				static CXR cxr[34];
						static State sca (const State& s);
						static State ori (const State& s);
						static State inf (const State& s);
						static State mnk (const State& s);
						static State hyp (const State& s);
						static State pss (const State& s);
						static State pnt (const State& s);
						static State par (const State& s);
						static State cir (const State& s);
						static State sph (const State& s);
						static State sta (const State& s);
						static State drv (const State& s);
						static State drb (const State& s);
						static State drt (const State& s);
						static State tnv (const State& s);
						static State tnb (const State& s);
						static State tnt (const State& s);
						static State lin (const State& s);
						static State pln (const State& s);
						static State flp (const State& s);
						static State dll (const State& s);
						static State dlp (const State& s);
						static State vec (const State& s);
						static State biv (const State& s);
						static State tri (const State& s);
						static State aff (const State& s);
						static State afl (const State& s);
						static State afp (const State& s);
						static State rot (const State& s);
						static State trs (const State& s);
						static State dil (const State& s);
						static State mot (const State& s);
						static State trv (const State& s);
						static State mtd (const State& s);
			

		};
	} //con::
	#endif
	