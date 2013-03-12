/*
 *  GENERATOR.cpp
 *  Clinic
 *
 *  Created by x on 1/30/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#include "Group.h"

namespace con {

//APPLY A GROUP OF TRANSFORMATIONS TO A SINGLE STATE, RETURN A VECTOR OF STATES


std::vector<State> Group :: operator * (const State & s) const {
	
	std::vector<State> tvec;
	
	for (int i = 0; i < mOpFund.size(); i++){	
		tvec.push_back( Op::re( s, mOpFund[i] ) );
	}
	
	return tvec;
}

//P = Fold of Symmetry.  Bar = Rotational or Reflective, Name = International Name
PointGroup2D :: PointGroup2D(int p, bool bar, string name) : Group(){

	mName = name;
  	
    //If P is 1, Are We Making A Spin Group or a Pin Group?            			
	mNumFrame = ( p == 1 ) ? ( (bar == false) ? 1 : 2 ) : 2;
							
	//If bar, then only one spin-like Generator (if not, then two pin-like ones)
	mNumGen = bar ? 1 : 2;
    	
	//All Vals the same in 2D Point Groups
	fill(mExp, mExp+mNumGen, p);
	fill(mBar, mBar+mNumGen, bar);
	
	Rot r = Rot::e12( theta(p)/2.0 );

	Versor a = Dlp(Vec::x);
	Versor b = Dlp(Op::sp(v.a, r));
		
	setFrame(a, b); 

}

PointGroup2D PointGroup2D::Oblique_1(){
	return PointGroup2D(1,true);
}
PointGroup2D PointGroup2D::Oblique_2(){
	return PointGroup2D(2,true);
}
PointGroup2D PointGroup2D::Rectangular_m(){
	return PointGroup2D(1, false);
}
PointGroup2D PointGroup2D::Rectangular_mm(){
	return PointGroup2D(2, false);
}
PointGroup2D PointGroup2D::Trigonal_3m(){
	return PointGroup2D(3, false);
}
PointGroup2D PointGroup2D::Trigonal_3(){
	return PointGroup2D(3, true);
}
PointGroup2D PointGroup2D::Square_4m(){
	return PointGroup2D(4, false);
}
PointGroup2D PointGroup2D::Square_4(){
	return PointGroup2D(4,true);
}
PointGroup2D PointGroup2D::Hexagonal_6m(){
	return PointGroup2D(6,false);
}
PointGroup2D PointGroup2D::Hexagonal_6(){
	return PointGroup2D(6,true);
}

PointGroup3D :: PointGroup3D (int p, int q, bool pbar, bool qbar, bool bbar) : Group(){
				
	mNumFrame = 3;
	
	mNumGen = bbar ? 1 : (p==1) ? 1 : ( (q==0) ? ( pbar ? 1 : 2 ) : ( pbar ? (qbar ? 1 : 2 ) : (qbar ? 2 : 3 ) ) ); 
		
	mExp[0] = p; mExp[1] = q;
    
	mBar[0] = pbar; mBar[1] = qbar; mBar[2] = bbar;
					
	Rot r1 = Rot::e12( theta(p) /2.0 ); 
	Rot r2 = Rot::e23( theta(q) /2.0 );
		
	mVersor[0] = Vec::x;
	mVersor[1] = Op::sp(v.a, r1);
	mVersor[2] = Op::sp(v.b, r2);
	
	setFrame(v); setGen();
}


//3d point groups
 PointGroup3D PointGroup3D :: Triclinic_1(){
	return PointGroup3D(1,0,true,false);
 }
 PointGroup3D PointGroup3D :: Triclinic_1bar(){
	return PointGroup3D(2,2,true,true,true);
 }

 PointGroup3D PointGroup3D :: Monoclinic_2(){
	return PointGroup3D(2,0,true,false);
 }
 PointGroup3D PointGroup3D :: Monoclinic_m(){
	return PointGroup3D(1,0,false,false);
 }
 PointGroup3D PointGroup3D :: Monoclinic_2m(){
	return PointGroup3D(2,2,true,false);
 }

 PointGroup3D PointGroup3D :: Orthorhombic_222(){
	return PointGroup3D(2,2,true,true);
 }
 PointGroup3D PointGroup3D :: Orthorhombic_mm2(){
	return PointGroup3D(2,0,false,false);
 }
PointGroup3D PointGroup3D :: Orthorhombic_mmm(){
	return PointGroup3D(2,2,false,false);
}

 PointGroup3D PointGroup3D :: Tetragonal_4(){
	return PointGroup3D(4,0,true,false);
 }
 PointGroup3D PointGroup3D :: Tetragonal_4bar(){
	return PointGroup3D(4,2,true,true,true);
 }
 PointGroup3D PointGroup3D :: Tetragonal_4m(){
	return PointGroup3D(4,2,true, false);
 }
 PointGroup3D PointGroup3D :: Tetragonal_422(){
	return PointGroup3D(4,2,true,true);
 }
 PointGroup3D PointGroup3D :: Tetragonal_4mm(){
	return PointGroup3D(4,0,false,false);
 }
 PointGroup3D PointGroup3D :: Tetragonal_42m(){
	return PointGroup3D(4,2,false,true);
 }
 PointGroup3D PointGroup3D :: Tetragonal_4mmm(){
	return PointGroup3D(4,2,false,false);
 }

 PointGroup3D PointGroup3D :: Trigonal_3(){
	return PointGroup3D(3,0, true, false);
 }
 PointGroup3D PointGroup3D :: Trigonal_3bar(){
	return PointGroup3D(6,2,true,true,true);
 }
 PointGroup3D PointGroup3D :: Trigonal_32(){
	return PointGroup3D(3,2,true,true);
 }
 PointGroup3D PointGroup3D :: Trigonal_3m(){
	return PointGroup3D(3,0,false,false);
 }	
 PointGroup3D PointGroup3D :: Trigonal_3barm(){
	return PointGroup3D(6,2,false,true);
 }
				
 PointGroup3D PointGroup3D :: Hexagonal_6(){
	return PointGroup3D(6,0,true,false);
 }
 PointGroup3D PointGroup3D :: Hexagonal_6bar(){
	return PointGroup3D(3,2,true,false);
 }
 PointGroup3D PointGroup3D :: Hexagonal_6m(){
	return PointGroup3D(6,2,true,false);
 }
 PointGroup3D PointGroup3D :: Hexagonal_6222(){
	return PointGroup3D(6,2,true,true);
 }
 PointGroup3D PointGroup3D :: Hexagonal_6mm(){
	return PointGroup3D(6,0,false,false);
 }
 PointGroup3D PointGroup3D :: Hexagonal_6m2(){
	return PointGroup3D(3,2,false,false);
 }
 PointGroup3D PointGroup3D :: Hexagonal_6mmm(){
	return PointGroup3D(6,2,false,false);
 }

 PointGroup3D PointGroup3D :: Cubic_23(){
	return PointGroup3D(3,3,true,true);
 }
 PointGroup3D PointGroup3D :: Cubic_m3(){
	return PointGroup3D(4,3,false,true);
 }
 PointGroup3D PointGroup3D :: Cubic_432(){
	return PointGroup3D(4,3,true,true);
 }
 PointGroup3D PointGroup3D :: Cubic_43m(){
	return PointGroup3D(3,3,false,false);
 }
 PointGroup3D PointGroup3D :: Cubic_m3m(){
	return PointGroup3D(4,3,false,false);
 }
			

} //con::