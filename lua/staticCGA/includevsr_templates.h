	enum {
		_N = 0,
		 SCA = 17, 
		 VEC = 39, 
		 BIV = 40, 
		 TRI = 41, 
		 ROT = 1 
		
	};
	
	template<int A> struct Idx;
	template<> struct Idx<0> { static const int Size = 0; static const string name; }
	
	template<> struct Idx<SCA>{ static const int Size = 1; static const string name;};
	
	template<> struct Idx<VEC>{ static const int Size = 3; static const string name;};
	
	template<> struct Idx<BIV>{ static const int Size = 3; static const string name;};
	
	template<> struct Idx<TRI>{ static const int Size = 1; static const string name;};
	
	template<> struct Idx<ROT>{ static const int Size = 4; static const string name;};
	
			template<int A, int B> struct ProductIdx;
		
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
		
		template<> struct ProductIdx<SCA, ROT> {
			static const int GP = ROT;
			static const int OP = ROT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<ORI, SCA> {
			static const int GP = ORI;
			static const int OP = ORI;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, ORI> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, INF> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, MNK> {
			static const int GP = ORI;
			static const int OP = _S;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<ORI, HYP> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, PSS> {
			static const int GP = TNT;
			static const int OP = _S;
			static const int IP = TNT;
		};
		
		template<> struct ProductIdx<ORI, PNT> {
			static const int GP = TVD;
			static const int OP = PSS_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, PAR> {
			static const int GP = ORI_PAR;
			static const int OP = PSS_AFL;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<ORI, CIR> {
			static const int GP = ORI_CIR;
			static const int OP = PSS_AFF;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<ORI, SPH> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = AFP;
		};
		
		template<> struct ProductIdx<ORI, STA> {
			static const int GP = ORI_STA;
			static const int OP = PSS_AFL;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, DRV> {
			static const int GP = ORI_DRV;
			static const int OP = MNK_VEC;
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
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, TNB> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, TNT> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
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
			static const int OP = MNK_VEC;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<ORI, DLL> {
			static const int GP = ORI_STA;
			static const int OP = PSS_AFL;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<ORI, DLP> {
			static const int GP = TVD;
			static const int OP = PSS_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ORI, VEC> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, BIV> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, TRI> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, AFF> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, AFL> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, AFP> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<ORI, ROT> {
			static const int GP = TNV_VEC;
			static const int OP = TNV_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, SCA> {
			static const int GP = INF;
			static const int OP = INF;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, ORI> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, INF> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, MNK> {
			static const int GP = INF;
			static const int OP = _S;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<INF, HYP> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<INF, PSS> {
			static const int GP = DRT;
			static const int OP = _S;
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
			static const int IP = PSS_FLP;
		};
		
		template<> struct ProductIdx<INF, STA> {
			static const int GP = INF_STA;
			static const int OP = LIN;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<INF, DRV> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, DRB> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, DRT> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, TNV> {
			static const int GP = ORI_DRV;
			static const int OP = MNK_VEC;
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
			static const int OP = _S;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<INF, PLN> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<INF, FLP> {
			static const int GP = INF;
			static const int OP = _S;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<INF, DLL> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, DLP> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, VEC> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, BIV> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<INF, TRI> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = _S;
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
		
		template<> struct ProductIdx<INF, ROT> {
			static const int GP = DRV_LIN;
			static const int OP = DRV_LIN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, SCA> {
			static const int GP = MNK;
			static const int OP = MNK;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, ORI> {
			static const int GP = ORI;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, INF> {
			static const int GP = INF;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, MNK> {
			static const int GP = SCA;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, HYP> {
			static const int GP = HYP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, PSS> {
			static const int GP = TRI;
			static const int OP = _S;
			static const int IP = TRI;
		};
		
		template<> struct ProductIdx<MNK, PNT> {
			static const int GP = MNK_PNT;
			static const int OP = MNK_VEC;
			static const int IP = _S;
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
			static const int OP = _S;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<MNK, STA> {
			static const int GP = MNK_STA;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, DRV> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, DRB> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, DRT> {
			static const int GP = DRT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, TNV> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, TNB> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, TNT> {
			static const int GP = TNT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, LIN> {
			static const int GP = MNK_LIN;
			static const int OP = _S;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<MNK, PLN> {
			static const int GP = MNK_PLN;
			static const int OP = _S;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<MNK, FLP> {
			static const int GP = TRS;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<MNK, DLL> {
			static const int GP = MNK_DLL;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, DLP> {
			static const int GP = MNK_DLP;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, VEC> {
			static const int GP = MNK_VEC;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, BIV> {
			static const int GP = MNK_BIV;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, TRI> {
			static const int GP = PSS;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, AFF> {
			static const int GP = MNK_AFF;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, AFL> {
			static const int GP = MNK_AFL;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, AFP> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<MNK, ROT> {
			static const int GP = PSS_VEC_BIV;
			static const int OP = PSS_VEC_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<HYP, SCA> {
			static const int GP = HYP;
			static const int OP = HYP;
			static const int IP = _S;
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
			static const int OP = _S;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<HYP, HYP> {
			static const int GP = DIL;
			static const int OP = MNK;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<HYP, PSS> {
			static const int GP = HYP_PSS;
			static const int OP = _S;
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
			static const int OP = MNK_VEC;
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
			static const int OP = MNK_VEC;
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
			static const int OP = MNK_VEC;
			static const int IP = PNT;
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
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<HYP, BIV> {
			static const int GP = HYP_BIV;
			static const int OP = HYP_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<HYP, TRI> {
			static const int GP = HYP_PSS;
			static const int OP = HYP_PSS;
			static const int IP = _S;
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
			static const int GP = HYP_AFP;
			static const int OP = SPH;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<HYP, ROT> {
			static const int GP = PSS_HYP_DRV_TNB;
			static const int OP = PSS_HYP_DRV_TNB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, SCA> {
			static const int GP = PSS;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, ORI> {
			static const int GP = TNT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, INF> {
			static const int GP = DRT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, MNK> {
			static const int GP = TRI;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, HYP> {
			static const int GP = HYP_PSS;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, PSS> {
			static const int GP = SCA;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PSS, PNT> {
			static const int GP = SPH;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, PAR> {
			static const int GP = CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, CIR> {
			static const int GP = PAR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, SPH> {
			static const int GP = PNT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, STA> {
			static const int GP = PSS_STA;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, DRV> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, DRB> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, DRT> {
			static const int GP = INF;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, TNV> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, TNB> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, TNT> {
			static const int GP = ORI;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, LIN> {
			static const int GP = DLL;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, PLN> {
			static const int GP = DLP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, FLP> {
			static const int GP = PSS_FLP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, DLL> {
			static const int GP = LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, DLP> {
			static const int GP = PLN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, VEC> {
			static const int GP = MNK_BIV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, BIV> {
			static const int GP = MNK_VEC;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, TRI> {
			static const int GP = MNK;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, AFF> {
			static const int GP = PSS_AFF;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, AFL> {
			static const int GP = PSS_AFL;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, AFP> {
			static const int GP = PSS_AFP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PSS, ROT> {
			static const int GP = MNK_VEC_BIV;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PNT, SCA> {
			static const int GP = PNT;
			static const int OP = PNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PNT, ORI> {
			static const int GP = TVD;
			static const int OP = PSS_AFP;
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
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PNT, PSS> {
			static const int GP = SPH;
			static const int OP = _S;
			static const int IP = SPH;
		};
		
		template<> struct ProductIdx<PNT, PNT> {
			static const int GP = PNT_PNT;
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
			static const int IP = PSS_FLP;
		};
		
		template<> struct ProductIdx<PNT, TNV> {
			static const int GP = ORI_PAR;
			static const int OP = PSS_AFL;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<PNT, TNB> {
			static const int GP = ORI_CIR;
			static const int OP = PSS_AFF;
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
		
		template<> struct ProductIdx<PNT, DLL> {
			static const int GP = PNT_DLL;
			static const int OP = CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PNT, DLP> {
			static const int GP = PNT_PNT;
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
			static const int GP = PNT_PNT;
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
		
		template<> struct ProductIdx<PNT, ROT> {
			static const int GP = STA_VEC;
			static const int OP = STA_VEC;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<PAR, SCA> {
			static const int GP = PAR;
			static const int OP = PAR;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PAR, ORI> {
			static const int GP = ORI_PAR;
			static const int OP = PSS_AFL;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PAR, INF> {
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PAR, MNK> {
			static const int GP = MNK_PAR;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, HYP> {
			static const int GP = HYP_PAR;
			static const int OP = PSS_STA;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PAR, PSS> {
			static const int GP = CIR;
			static const int OP = _S;
			static const int IP = CIR;
		};
		
		template<> struct ProductIdx<PAR, PNT> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = _S;
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
			static const int OP = _S;
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
			static const int OP = _S;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<PAR, TNV> {
			static const int GP = RVD;
			static const int OP = PSS_AFF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<PAR, TNT> {
			static const int GP = ORI_CIR;
			static const int OP = _S;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<PAR, LIN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<PAR, PLN> {
			static const int GP = PNT_CIR;
			static const int OP = _S;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<PAR, FLP> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, DLL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PAR, DLP> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PAR, VEC> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = _S;
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
			static const int IP = _S;
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
		
		template<> struct ProductIdx<PAR, ROT> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, SCA> {
			static const int GP = CIR;
			static const int OP = CIR;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, ORI> {
			static const int GP = ORI_CIR;
			static const int OP = PSS_AFF;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, INF> {
			static const int GP = INF_CIR;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, MNK> {
			static const int GP = MNK_CIR;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, HYP> {
			static const int GP = HYP_CIR;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, PSS> {
			static const int GP = PAR;
			static const int OP = _S;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<CIR, PNT> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, PAR> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, CIR> {
			static const int GP = MTT;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, SPH> {
			static const int GP = PNT_PAR;
			static const int OP = _S;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, STA> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, DRV> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, DRB> {
			static const int GP = MTD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, DRT> {
			static const int GP = INF_PAR;
			static const int OP = _S;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<CIR, TNV> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, TNB> {
			static const int GP = RVD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, TNT> {
			static const int GP = ORI_PAR;
			static const int OP = _S;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<CIR, LIN> {
			static const int GP = MTT;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, PLN> {
			static const int GP = PNT_PAR;
			static const int OP = _S;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<CIR, FLP> {
			static const int GP = CIR_FLP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, DLL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, DLP> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, VEC> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, BIV> {
			static const int GP = CIR_BIV;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, TRI> {
			static const int GP = MNK_PAR;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, AFF> {
			static const int GP = PNT_CIR;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, AFL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<CIR, AFP> {
			static const int GP = TST;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<CIR, ROT> {
			static const int GP = RTC;
			static const int OP = PNT_SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, SCA> {
			static const int GP = SPH;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, ORI> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, INF> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, MNK> {
			static const int GP = MNK_SPH;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, HYP> {
			static const int GP = HYP_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, PSS> {
			static const int GP = PNT;
			static const int OP = _S;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<SPH, PNT> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, PAR> {
			static const int GP = PNT_CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, CIR> {
			static const int GP = PNT_PAR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, SPH> {
			static const int GP = PNT_PNT;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, STA> {
			static const int GP = PNT_CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, DRV> {
			static const int GP = INF_CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, DRB> {
			static const int GP = INF_PAR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, DRT> {
			static const int GP = TSD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, TNV> {
			static const int GP = ORI_CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, TNB> {
			static const int GP = ORI_PAR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, TNT> {
			static const int GP = TVD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, LIN> {
			static const int GP = PNT_DLL;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, PLN> {
			static const int GP = PNT_PNT;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<SPH, FLP> {
			static const int GP = SPH_FLP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, DLL> {
			static const int GP = PNT_LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, DLP> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, VEC> {
			static const int GP = SPH_VEC;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, BIV> {
			static const int GP = SPH_BIV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, TRI> {
			static const int GP = MNK_PNT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, AFF> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, AFL> {
			static const int GP = SPH_AFL;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, AFP> {
			static const int GP = SPH_AFP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<SPH, ROT> {
			static const int GP = MNK_STA_BIV;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<STA, SCA> {
			static const int GP = STA;
			static const int OP = STA;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<STA, ORI> {
			static const int GP = ORI_STA;
			static const int OP = PSS_AFL;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<STA, INF> {
			static const int GP = INF_STA;
			static const int OP = LIN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<STA, MNK> {
			static const int GP = MNK_STA;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<STA, HYP> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<STA, PSS> {
			static const int GP = PSS_STA;
			static const int OP = _S;
			static const int IP = PSS_STA;
		};
		
		template<> struct ProductIdx<STA, PNT> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = _S;
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
			static const int OP = _S;
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
			static const int GP = STA_DRT;
			static const int OP = _S;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<STA, TNV> {
			static const int GP = RVD;
			static const int OP = PSS_AFF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<STA, TNT> {
			static const int GP = ORI_LIN;
			static const int OP = _S;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<STA, LIN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<STA, PLN> {
			static const int GP = PNT_CIR;
			static const int OP = _S;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<STA, FLP> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, DLL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, DLP> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<STA, VEC> {
			static const int GP = STA_VEC;
			static const int OP = MUV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<STA, BIV> {
			static const int GP = STA_BIV;
			static const int OP = HYP_PSS;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<STA, TRI> {
			static const int GP = STA_TRI;
			static const int OP = _S;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<STA, AFF> {
			static const int GP = PNT_PAR;
			static const int OP = CIR;
			static const int IP = _S;
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
		
		template<> struct ProductIdx<STA, ROT> {
			static const int GP = STA_BIV;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, SCA> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, ORI> {
			static const int GP = ORI_DRV;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, INF> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, MNK> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, HYP> {
			static const int GP = ORI_DRV;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, PSS> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<DRV, PNT> {
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = _S;
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
			static const int OP = _S;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<DRV, STA> {
			static const int GP = MTD;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRV, DRV> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, DRB> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, DRT> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
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
			static const int OP = _S;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<DRV, LIN> {
			static const int GP = DRV_LIN;
			static const int OP = _S;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRV, PLN> {
			static const int GP = DRV_PLN;
			static const int OP = _S;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DRV, FLP> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, DLL> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, DLP> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, VEC> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, BIV> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, TRI> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRV, AFF> {
			static const int GP = INF_PAR;
			static const int OP = LIN;
			static const int IP = _S;
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
		
		template<> struct ProductIdx<DRV, ROT> {
			static const int GP = DRV_PLN;
			static const int OP = DRV_PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, SCA> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, ORI> {
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, INF> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, MNK> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, HYP> {
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, PSS> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DRB, PNT> {
			static const int GP = INF_CIR;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, PAR> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, CIR> {
			static const int GP = MTD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, SPH> {
			static const int GP = INF_PAR;
			static const int OP = _S;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<DRB, STA> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, DRV> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, DRB> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, DRT> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, TNV> {
			static const int GP = DRV_TNB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, TNB> {
			static const int GP = RTD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, TNT> {
			static const int GP = ORI_DRV;
			static const int OP = _S;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DRB, LIN> {
			static const int GP = DRV_PLN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, PLN> {
			static const int GP = DRV_LIN;
			static const int OP = _S;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRB, FLP> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, DLL> {
			static const int GP = DRV_LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, DLP> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, VEC> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, BIV> {
			static const int GP = DRV_LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, TRI> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, AFF> {
			static const int GP = INF_CIR;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, AFL> {
			static const int GP = PAR_DRB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRB, AFP> {
			static const int GP = DRB_AFP;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRB, ROT> {
			static const int GP = DRV_LIN;
			static const int OP = DRB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, SCA> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, ORI> {
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, INF> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, MNK> {
			static const int GP = DRT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, HYP> {
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, PSS> {
			static const int GP = INF;
			static const int OP = _S;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DRT, PNT> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, PAR> {
			static const int GP = INF_CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, CIR> {
			static const int GP = INF_PAR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, SPH> {
			static const int GP = TSD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, STA> {
			static const int GP = STA_DRT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, DRV> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, DRB> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, DRT> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, TNV> {
			static const int GP = ORI_DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, TNB> {
			static const int GP = ORI_DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, TNT> {
			static const int GP = DIL;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DRT, LIN> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, PLN> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, FLP> {
			static const int GP = DRT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, DLL> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, DLP> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, VEC> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, BIV> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, TRI> {
			static const int GP = INF;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, AFF> {
			static const int GP = INF_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, AFL> {
			static const int GP = STA_DRT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, AFP> {
			static const int GP = DRT_AFP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DRT, ROT> {
			static const int GP = DRV_PLN;
			static const int OP = DRT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, SCA> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, ORI> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, INF> {
			static const int GP = ORI_DRV;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, MNK> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, HYP> {
			static const int GP = ORI_DRV;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, PSS> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = TNB;
		};
		
		template<> struct ProductIdx<TNV, PNT> {
			static const int GP = ORI_PAR;
			static const int OP = PSS_AFL;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, PAR> {
			static const int GP = RVD;
			static const int OP = PSS_AFF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, CIR> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNV, SPH> {
			static const int GP = ORI_CIR;
			static const int OP = _S;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<TNV, STA> {
			static const int GP = RVD;
			static const int OP = PSS_AFF;
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
			static const int OP = _S;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<TNV, TNV> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, TNB> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, TNT> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, LIN> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNV, PLN> {
			static const int GP = ORI_CIR;
			static const int OP = _S;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<TNV, FLP> {
			static const int GP = TNV_FLP;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DLL> {
			static const int GP = RVD;
			static const int OP = PSS_AFF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNV, DLP> {
			static const int GP = ORI_PAR;
			static const int OP = PSS_AFL;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, VEC> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, BIV> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, TRI> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, AFF> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, AFL> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, AFP> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNV, ROT> {
			static const int GP = TNV_BIV;
			static const int OP = TNV_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, SCA> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, ORI> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, INF> {
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, MNK> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, HYP> {
			static const int GP = ORI_DRB;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, PSS> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<TNB, PNT> {
			static const int GP = ORI_CIR;
			static const int OP = PSS_AFF;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, PAR> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, CIR> {
			static const int GP = RVD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, SPH> {
			static const int GP = ORI_PAR;
			static const int OP = _S;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNB, STA> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, DRV> {
			static const int GP = DRV_TNB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, DRB> {
			static const int GP = RTD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, DRT> {
			static const int GP = ORI_DRV;
			static const int OP = _S;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<TNB, TNV> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, TNB> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, TNT> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, LIN> {
			static const int GP = RVD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNB, PLN> {
			static const int GP = ORI_PAR;
			static const int OP = _S;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<TNB, FLP> {
			static const int GP = TNB_FLP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, DLL> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, DLP> {
			static const int GP = ORI_CIR;
			static const int OP = PSS_AFF;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, VEC> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, BIV> {
			static const int GP = TNV_VEC;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, TRI> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, AFF> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, AFL> {
			static const int GP = TNV_VEC;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, AFP> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNB, ROT> {
			static const int GP = TNV_VEC;
			static const int OP = TNB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, SCA> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, ORI> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, INF> {
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, MNK> {
			static const int GP = TNT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, HYP> {
			static const int GP = ORI_DRT;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, PSS> {
			static const int GP = ORI;
			static const int OP = _S;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TNT, PNT> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, PAR> {
			static const int GP = ORI_CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, CIR> {
			static const int GP = ORI_PAR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, SPH> {
			static const int GP = TVD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, STA> {
			static const int GP = ORI_LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, DRV> {
			static const int GP = ORI_DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, DRB> {
			static const int GP = ORI_DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, DRT> {
			static const int GP = DIL;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, TNV> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, TNB> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, TNT> {
			static const int GP = _S;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, LIN> {
			static const int GP = ORI_STA;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, PLN> {
			static const int GP = TVD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TNT, FLP> {
			static const int GP = TNT_FLP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, DLL> {
			static const int GP = ORI_LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, DLP> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, VEC> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, BIV> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, TRI> {
			static const int GP = ORI;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, AFF> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, AFL> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, AFP> {
			static const int GP = ORI;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TNT, ROT> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, SCA> {
			static const int GP = LIN;
			static const int OP = LIN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, ORI> {
			static const int GP = ORI_LIN;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, INF> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, MNK> {
			static const int GP = MNK_LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, HYP> {
			static const int GP = HYP_LIN;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, PSS> {
			static const int GP = DLL;
			static const int OP = _S;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<LIN, PNT> {
			static const int GP = PNT_LIN;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, PAR> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, CIR> {
			static const int GP = MTT;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, SPH> {
			static const int GP = PNT_DLL;
			static const int OP = _S;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, STA> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, DRV> {
			static const int GP = DRV_LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, DRB> {
			static const int GP = DRV_PLN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, DRT> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, TNV> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, TNB> {
			static const int GP = RVD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, TNT> {
			static const int GP = ORI_STA;
			static const int OP = _S;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<LIN, LIN> {
			static const int GP = MOT;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, PLN> {
			static const int GP = LIN_PLN;
			static const int OP = _S;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<LIN, FLP> {
			static const int GP = LIN_FLP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, DLL> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, DLP> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, VEC> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, BIV> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, TRI> {
			static const int GP = MNK_DLL;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, AFF> {
			static const int GP = PNT_LIN;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, AFL> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<LIN, AFP> {
			static const int GP = TST;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<LIN, ROT> {
			static const int GP = LIN_DLL;
			static const int OP = PLN_DLP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, SCA> {
			static const int GP = PLN;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, ORI> {
			static const int GP = ORI_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, INF> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, MNK> {
			static const int GP = MNK_PLN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, HYP> {
			static const int GP = HYP_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, PSS> {
			static const int GP = DLP;
			static const int OP = _S;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<PLN, PNT> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, PAR> {
			static const int GP = PNT_CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, CIR> {
			static const int GP = PNT_PAR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, SPH> {
			static const int GP = PNT_PNT;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, STA> {
			static const int GP = PNT_CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, DRV> {
			static const int GP = DRV_PLN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, DRB> {
			static const int GP = DRV_LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, DRT> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, TNV> {
			static const int GP = ORI_CIR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, TNB> {
			static const int GP = ORI_PAR;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, TNT> {
			static const int GP = TVD;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, LIN> {
			static const int GP = LIN_PLN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, PLN> {
			static const int GP = PLN_PLN;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<PLN, FLP> {
			static const int GP = PLN_FLP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, DLL> {
			static const int GP = LIN_DLP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, DLP> {
			static const int GP = PLN_DLP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, VEC> {
			static const int GP = PLN_DLP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, BIV> {
			static const int GP = PLN_BIV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, TRI> {
			static const int GP = MNK_DLP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, AFF> {
			static const int GP = PNT_SPH;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, AFL> {
			static const int GP = SPH_AFL;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, AFP> {
			static const int GP = SPH_AFP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<PLN, ROT> {
			static const int GP = LIN_DLP;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, SCA> {
			static const int GP = FLP;
			static const int OP = FLP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, ORI> {
			static const int GP = ORI_FLP;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, INF> {
			static const int GP = INF;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, MNK> {
			static const int GP = TRS;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, HYP> {
			static const int GP = HYP_FLP;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, PSS> {
			static const int GP = PSS_FLP;
			static const int OP = _S;
			static const int IP = PSS_FLP;
		};
		
		template<> struct ProductIdx<FLP, PNT> {
			static const int GP = PNT_FLP;
			static const int OP = LIN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, PAR> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, CIR> {
			static const int GP = CIR_FLP;
			static const int OP = PSS;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<FLP, SPH> {
			static const int GP = SPH_FLP;
			static const int OP = _S;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<FLP, STA> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DRV> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, DRB> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, DRT> {
			static const int GP = DRT;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, TNV> {
			static const int GP = TNV_FLP;
			static const int OP = MNK_BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, TNB> {
			static const int GP = TNB_FLP;
			static const int OP = PSS;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<FLP, TNT> {
			static const int GP = TNT_FLP;
			static const int OP = _S;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<FLP, LIN> {
			static const int GP = LIN_FLP;
			static const int OP = _S;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<FLP, PLN> {
			static const int GP = PLN_FLP;
			static const int OP = _S;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<FLP, FLP> {
			static const int GP = TRS;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<FLP, DLL> {
			static const int GP = FLP_DLL;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, DLP> {
			static const int GP = FLP_DLP;
			static const int OP = LIN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, VEC> {
			static const int GP = FLP_DLP;
			static const int OP = LIN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, BIV> {
			static const int GP = FLP_DLL;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, TRI> {
			static const int GP = FLP_TRI;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<FLP, AFF> {
			static const int GP = PNT_FLP;
			static const int OP = LIN;
			static const int IP = _S;
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
		
		template<> struct ProductIdx<FLP, ROT> {
			static const int GP = LIN_DLP;
			static const int OP = LIN_DLP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, SCA> {
			static const int GP = DLL;
			static const int OP = DLL;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, ORI> {
			static const int GP = ORI_STA;
			static const int OP = PSS_AFL;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, INF> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, MNK> {
			static const int GP = MNK_DLL;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, HYP> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, PSS> {
			static const int GP = LIN;
			static const int OP = _S;
			static const int IP = LIN;
		};
		
		template<> struct ProductIdx<DLL, PNT> {
			static const int GP = PNT_DLL;
			static const int OP = CIR;
			static const int IP = _S;
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
			static const int OP = _S;
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
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, DRB> {
			static const int GP = DRV_LIN;
			static const int OP = _S;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLL, DRT> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<DLL, TNV> {
			static const int GP = RVD;
			static const int OP = PSS_AFF;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TNB> {
			static const int GP = PAR_TNB;
			static const int OP = PSS;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DLL, TNT> {
			static const int GP = ORI_LIN;
			static const int OP = _S;
			static const int IP = AFL;
		};
		
		template<> struct ProductIdx<DLL, LIN> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLL, PLN> {
			static const int GP = LIN_DLP;
			static const int OP = _S;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<DLL, FLP> {
			static const int GP = FLP_DLL;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, DLL> {
			static const int GP = MOT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, DLP> {
			static const int GP = LIN_PLN;
			static const int OP = PSS_FLP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, VEC> {
			static const int GP = LIN_PLN;
			static const int OP = PSS_FLP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLL, BIV> {
			static const int GP = MOT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLL, TRI> {
			static const int GP = MNK_LIN;
			static const int OP = _S;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DLL, AFF> {
			static const int GP = PNT_DLL;
			static const int OP = CIR;
			static const int IP = _S;
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
		
		template<> struct ProductIdx<DLL, ROT> {
			static const int GP = MOT;
			static const int OP = PLN_FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, SCA> {
			static const int GP = DLP;
			static const int OP = DLP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLP, ORI> {
			static const int GP = TVD;
			static const int OP = PSS_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, INF> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<DLP, MNK> {
			static const int GP = MNK_DLP;
			static const int OP = MNK_VEC;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, HYP> {
			static const int GP = HYP_PNT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<DLP, PSS> {
			static const int GP = PLN;
			static const int OP = _S;
			static const int IP = PLN;
		};
		
		template<> struct ProductIdx<DLP, PNT> {
			static const int GP = PNT_PNT;
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
			static const int OP = _S;
			static const int IP = DRB;
		};
		
		template<> struct ProductIdx<DLP, TNV> {
			static const int GP = ORI_PAR;
			static const int OP = PSS_AFL;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<DLP, TNB> {
			static const int GP = ORI_CIR;
			static const int OP = PSS_AFF;
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
			static const int GP = FLP_DLP;
			static const int OP = LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<DLP, DLL> {
			static const int GP = LIN_PLN;
			static const int OP = PSS_FLP;
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
			static const int OP = PSS_FLP;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<DLP, TRI> {
			static const int GP = MNK_PLN;
			static const int OP = DRT;
			static const int IP = BIV;
		};
		
		template<> struct ProductIdx<DLP, AFF> {
			static const int GP = PNT_PNT;
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
		
		template<> struct ProductIdx<DLP, ROT> {
			static const int GP = LIN_PLN;
			static const int OP = LIN_PLN;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<VEC, SCA> {
			static const int GP = VEC;
			static const int OP = VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<VEC, ORI> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<VEC, INF> {
			static const int GP = DRV;
			static const int OP = DRV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<VEC, MNK> {
			static const int GP = MNK_VEC;
			static const int OP = MNK_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<VEC, HYP> {
			static const int GP = HYP_VEC;
			static const int OP = HYP_VEC;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<VEC, PSS> {
			static const int GP = MNK_BIV;
			static const int OP = _S;
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
			static const int OP = _S;
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
			static const int OP = _S;
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
			static const int GP = FLP_DLP;
			static const int OP = LIN;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<VEC, DLL> {
			static const int GP = LIN_PLN;
			static const int OP = PSS_FLP;
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
			static const int OP = _S;
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
		
		template<> struct ProductIdx<VEC, ROT> {
			static const int GP = VEC_BIV;
			static const int OP = VEC_BIV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<BIV, SCA> {
			static const int GP = BIV;
			static const int OP = BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, ORI> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, INF> {
			static const int GP = DRB;
			static const int OP = DRB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, MNK> {
			static const int GP = MNK_BIV;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, HYP> {
			static const int GP = HYP_BIV;
			static const int OP = HYP_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, PSS> {
			static const int GP = MNK_VEC;
			static const int OP = _S;
			static const int IP = MNK_VEC;
		};
		
		template<> struct ProductIdx<BIV, PNT> {
			static const int GP = PNT_BIV;
			static const int OP = MUV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, PAR> {
			static const int GP = PAR_BIV;
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
			static const int OP = _S;
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
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, DRB> {
			static const int GP = DRV_LIN;
			static const int OP = _S;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<BIV, DRT> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = DRV;
		};
		
		template<> struct ProductIdx<BIV, TNV> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, TNB> {
			static const int GP = TNV_VEC;
			static const int OP = _S;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<BIV, TNT> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<BIV, LIN> {
			static const int GP = LIN_DLL;
			static const int OP = PSS;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<BIV, PLN> {
			static const int GP = PLN_BIV;
			static const int OP = _S;
			static const int IP = FLP;
		};
		
		template<> struct ProductIdx<BIV, FLP> {
			static const int GP = FLP_DLL;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, DLL> {
			static const int GP = MOT;
			static const int OP = DRT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, DLP> {
			static const int GP = DLP_BIV;
			static const int OP = PSS_FLP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, VEC> {
			static const int GP = VEC_BIV;
			static const int OP = TRI;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, BIV> {
			static const int GP = ROT;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, TRI> {
			static const int GP = VEC;
			static const int OP = _S;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<BIV, AFF> {
			static const int GP = BIV_AFF;
			static const int OP = AFP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<BIV, AFL> {
			static const int GP = RTT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<BIV, AFP> {
			static const int GP = BIV_AFP;
			static const int OP = _S;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<BIV, ROT> {
			static const int GP = ROT;
			static const int OP = BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, SCA> {
			static const int GP = TRI;
			static const int OP = TRI;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, ORI> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, INF> {
			static const int GP = DRT;
			static const int OP = DRT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, MNK> {
			static const int GP = PSS;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, HYP> {
			static const int GP = HYP_PSS;
			static const int OP = HYP_PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, PSS> {
			static const int GP = MNK;
			static const int OP = _S;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<TRI, PNT> {
			static const int GP = MNK_SPH;
			static const int OP = HYP_PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, PAR> {
			static const int GP = MNK_CIR;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, CIR> {
			static const int GP = MNK_PAR;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, SPH> {
			static const int GP = MNK_PNT;
			static const int OP = _S;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<TRI, STA> {
			static const int GP = STA_TRI;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, DRV> {
			static const int GP = DRB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, DRB> {
			static const int GP = DRV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, DRT> {
			static const int GP = INF;
			static const int OP = _S;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRI, TNV> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, TNB> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, TNT> {
			static const int GP = ORI;
			static const int OP = _S;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<TRI, LIN> {
			static const int GP = MNK_DLL;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, PLN> {
			static const int GP = MNK_DLP;
			static const int OP = _S;
			static const int IP = INF;
		};
		
		template<> struct ProductIdx<TRI, FLP> {
			static const int GP = FLP_TRI;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, DLL> {
			static const int GP = MNK_LIN;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, DLP> {
			static const int GP = MNK_PLN;
			static const int OP = DRT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, VEC> {
			static const int GP = BIV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, BIV> {
			static const int GP = VEC;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, TRI> {
			static const int GP = SCA;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, AFF> {
			static const int GP = TRI_AFF;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, AFL> {
			static const int GP = TRI_AFL;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<TRI, AFP> {
			static const int GP = TRV;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, ROT> {
			static const int GP = VEC_BIV;
			static const int OP = TRI;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFF, SCA> {
			static const int GP = AFF;
			static const int OP = AFF;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFF, ORI> {
			static const int GP = TNV;
			static const int OP = TNV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFF, INF> {
			static const int GP = TSD;
			static const int OP = FLP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, MNK> {
			static const int GP = MNK_AFF;
			static const int OP = MNK_VEC;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFF, HYP> {
			static const int GP = HYP_PNT;
			static const int OP = MUV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFF, PSS> {
			static const int GP = PSS_AFF;
			static const int OP = _S;
			static const int IP = PSS_AFF;
		};
		
		template<> struct ProductIdx<AFF, PNT> {
			static const int GP = PNT_PNT;
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
			static const int IP = PSS_FLP;
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
			static const int OP = _S;
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
		
		template<> struct ProductIdx<AFF, DLL> {
			static const int GP = PNT_DLL;
			static const int OP = CIR;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<AFF, DLP> {
			static const int GP = PNT_PNT;
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
			static const int GP = TRI_AFF;
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
		
		template<> struct ProductIdx<AFF, ROT> {
			static const int GP = VEC_AFL;
			static const int OP = VEC_AFL;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<AFL, SCA> {
			static const int GP = AFL;
			static const int OP = AFL;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFL, ORI> {
			static const int GP = TNB;
			static const int OP = TNB;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFL, INF> {
			static const int GP = INF_STA;
			static const int OP = LIN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFL, MNK> {
			static const int GP = MNK_AFL;
			static const int OP = MNK_BIV;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFL, HYP> {
			static const int GP = HYP_STA;
			static const int OP = PSS_STA;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFL, PSS> {
			static const int GP = PSS_AFL;
			static const int OP = _S;
			static const int IP = PSS_AFL;
		};
		
		template<> struct ProductIdx<AFL, PNT> {
			static const int GP = PNT_AFL;
			static const int OP = CIR;
			static const int IP = _S;
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
			static const int GP = SPH_AFL;
			static const int OP = _S;
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
			static const int GP = STA_DRT;
			static const int OP = _S;
			static const int IP = DLL;
		};
		
		template<> struct ProductIdx<AFL, TNV> {
			static const int GP = TNV_BIV;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFL, TNB> {
			static const int GP = TNV_VEC;
			static const int OP = _S;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFL, TNT> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = TNV;
		};
		
		template<> struct ProductIdx<AFL, LIN> {
			static const int GP = RTC;
			static const int OP = PSS;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFL, PLN> {
			static const int GP = SPH_AFL;
			static const int OP = _S;
			static const int IP = PAR;
		};
		
		template<> struct ProductIdx<AFL, FLP> {
			static const int GP = TVT;
			static const int OP = PLN;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, DLL> {
			static const int GP = MTT;
			static const int OP = SPH;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, DLP> {
			static const int GP = PNT_AFL;
			static const int OP = CIR;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFL, VEC> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFL, BIV> {
			static const int GP = RTT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, TRI> {
			static const int GP = TRI_AFL;
			static const int OP = _S;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<AFL, AFF> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFL, AFL> {
			static const int GP = RTT;
			static const int OP = TNT;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFL, AFP> {
			static const int GP = BIV_AFP;
			static const int OP = _S;
			static const int IP = AFF;
		};
		
		template<> struct ProductIdx<AFL, ROT> {
			static const int GP = RTT;
			static const int OP = VEC_AFP;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, SCA> {
			static const int GP = AFP;
			static const int OP = AFP;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, ORI> {
			static const int GP = TNT;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, INF> {
			static const int GP = INF_AFP;
			static const int OP = PLN;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, MNK> {
			static const int GP = MNK_AFP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, HYP> {
			static const int GP = HYP_AFP;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, PSS> {
			static const int GP = PSS_AFP;
			static const int OP = _S;
			static const int IP = PSS_AFP;
		};
		
		template<> struct ProductIdx<AFP, PNT> {
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, PAR> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, CIR> {
			static const int GP = TST;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, SPH> {
			static const int GP = SPH_AFP;
			static const int OP = _S;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFP, STA> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, DRV> {
			static const int GP = DRV_AFP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, DRB> {
			static const int GP = DRB_AFP;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, DRT> {
			static const int GP = DRT_AFP;
			static const int OP = _S;
			static const int IP = DLP;
		};
		
		template<> struct ProductIdx<AFP, TNV> {
			static const int GP = TNB;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, TNB> {
			static const int GP = TNV;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, TNT> {
			static const int GP = ORI;
			static const int OP = _S;
			static const int IP = ORI;
		};
		
		template<> struct ProductIdx<AFP, LIN> {
			static const int GP = TST;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, PLN> {
			static const int GP = SPH_AFP;
			static const int OP = _S;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<AFP, FLP> {
			static const int GP = FLP_AFP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, DLL> {
			static const int GP = PAR_AFP;
			static const int OP = PSS;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, DLP> {
			static const int GP = PNT_AFP;
			static const int OP = SPH;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, VEC> {
			static const int GP = VEC_AFP;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, BIV> {
			static const int GP = BIV_AFP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, TRI> {
			static const int GP = TRV;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, AFF> {
			static const int GP = VEC_AFP;
			static const int OP = TNT;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, AFL> {
			static const int GP = BIV_AFP;
			static const int OP = _S;
			static const int IP = _S;
		};
		
		template<> struct ProductIdx<AFP, AFP> {
			static const int GP = TRV;
			static const int OP = _S;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<AFP, ROT> {
			static const int GP = VEC_AFL;
			static const int OP = AFP;
			static const int IP = _S;
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
			static const int GP = PSS_VEC_BIV;
			static const int OP = PSS_VEC_BIV;
			static const int IP = MNK;
		};
		
		template<> struct ProductIdx<ROT, HYP> {
			static const int GP = PSS_HYP_DRV_TNB;
			static const int OP = PSS_HYP_DRV_TNB;
			static const int IP = HYP;
		};
		
		template<> struct ProductIdx<ROT, PSS> {
			static const int GP = MNK_VEC_BIV;
			static const int OP = PSS;
			static const int IP = MNK_VEC_BIV;
		};
		
		template<> struct ProductIdx<ROT, PNT> {
			static const int GP = STA_VEC;
			static const int OP = STA_VEC;
			static const int IP = PNT;
		};
		
		template<> struct ProductIdx<ROT, PAR> {
			static const int GP = MTT;
			static const int OP = PNT_CIR;
			static const int IP = PNT_PNT;
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
			static const int IP = FLP_DLP;
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
		
		template<> struct ProductIdx<ROT, ROT> {
			static const int GP = ROT;
			static const int OP = ROT;
			static const int IP = ROT;
		};
		
	