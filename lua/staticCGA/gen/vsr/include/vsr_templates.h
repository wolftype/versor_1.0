	enum {
		
		 SCA = 17, 
		 VEC = 39, 
		 BIV = 40, 
		 TRI = 41, 
		 ROT = 1 
		
	};
	
	template<int A> struct Idx;
	
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
		
		template<> struct ProductIdx<SCA, ROT> {
			static const int GP = ROT;
			static const int OP = ROT;
			static const int IP = ROT;
		};
		
		template<> struct ProductIdx<VEC, SCA> {
			static const int GP = VEC;
			static const int OP = VEC;
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
		
		template<> struct ProductIdx<VEC, ROT> {
			static const int GP = VEC_BIV;
			static const int OP = VEC_BIV;
			static const int IP = VEC;
		};
		
		template<> struct ProductIdx<BIV, SCA> {
			static const int GP = BIV;
			static const int OP = BIV;
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
		
		template<> struct ProductIdx<BIV, ROT> {
			static const int GP = ROT;
			static const int OP = BIV;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<TRI, SCA> {
			static const int GP = TRI;
			static const int OP = TRI;
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
		
		template<> struct ProductIdx<TRI, ROT> {
			static const int GP = VEC_BIV;
			static const int OP = TRI;
			static const int IP = SCA;
		};
		
		template<> struct ProductIdx<ROT, SCA> {
			static const int GP = ROT;
			static const int OP = ROT;
			static const int IP = SCA;
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
		
		template<> struct ProductIdx<ROT, ROT> {
			static const int GP = ROT;
			static const int OP = ROT;
			static const int IP = ROT;
		};
		
	