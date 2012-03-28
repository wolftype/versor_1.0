/*
 *  Param.cpp
 *  CONGA_07
 *
 *  Created by x on 1/1/11.
 *  Copyright 2011 x. All rights reserved.
 *
 */

#include "Param.h"

namespace vsr {

	State Param :: pos( const State& s, const State& ori ){
	
		switch ( s.idx() ){

			case _PNT:
			case _SPH:
			case _CIR:			
			case _PAR:
			{		
				return Ro::cen(s);
				break;
			}			
			
			//DUAL FLATS
			case _DLL:
			case _DLP:
			{
				return Fl::loc( s, ori, 1 );
				break;
			}
			//DIRECT FLATS
			case _PLN:
			case _LIN:
			{
				return Fl::loc( s, ori, 0 );
				break;
			}
			case _VEC:
			case _DRV:
			case _TNV:
			{
				return Ro::null(s);
				break;
			}
			case _BIV:
			{
				return Pnt(0,0,0,1,0);
				break;
			}
		
		}
		
		return Ori(1);
	}

} //con::