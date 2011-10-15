/*
 *  xRoutines.h
 *  CONGA_07
 *
 *  Created by x on 8/19/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */
#include <sstream>
#include <string>
#include <iostream>

namespace con {

	using namespace std;

	/*String Function*/
	class Str {
	
		public:
			template < class T >
			static string cat(string s, T idx);
			template < class T >
			static string cat(string s, T idx, T idx2);
	};
	
	
	template < class T >
	string Str::cat(string s, T idx) {	
		stringstream od; od << idx; s += od.str();
		//cout << s;
		return s;
	}

	template < class T >
	string Str::cat(string s, T idx, T idx2) {	
		stringstream od; od << idx << "_" << idx2; s += od.str();
		cout << s;
		return s;
	}

} // con::