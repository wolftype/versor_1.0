	#ifndef VSR_H_INCLUDED
	#define VSR_H_INCLUDED
	
 /*! \mainpage VERSOR  

	\section sec_intro Introduction
	
	Versor is a stand-alone library for experimenting with 5D conformal geometric algbera [CGA] and making hypercomplex spatial environments. 
    While it can be built as a strict 5D CGA multivector library, it also includes bindings to OpenGL and an open source
    Graphics User Interface library, GLV (which can be downloaded by running the install_dependencies.sh).  
    
    It is an arsenal of closed form solutions to common geometric problems: Versor includes classes for manipulating 
	coordinate frames and navigating cameras, building kinematic chains, activating generator fields, and deforming meshes.
    
    3D Euclidean, Spherical, and Hyperbolic spaces are all represented.
	
	Versor suggests looking at GLV ( http://mat.ucsb.edu/glv/ ) for building graphics user interfaces,
	and GAMMA ( http://mat.ucsb.edu/gamma/ ) for incorporating digital signal processing.
	
*/

    #include "vsr_casts.h"
		
	#include "Rot.h"
	
	#include "Mot.h"
	
	#include "Dil.h"
	
	#include "Trv.h"
	
	#include "Mtd.h"
	
	#include "Trs.h"
	
	#include "Rtc.h"
	
	#include "Mtt.h"
	
	#include "Rtt.h"
	
	#include "Rtd.h"
	
	#include "Tvd.h"
	
	#include "Tsd.h"
	
	#include "Trt.h"
	
	#include "Rvd.h"
	
	#include "Tst.h"
	
	#include "Tvt.h"
	
	#include "Bst.h"
	
	#include "Sca.h"
	
	#include "Ori.h"
	
	#include "Inf.h"
	
	#include "Mnk.h"
	
	#include "Hyp.h"
	
	#include "Pss.h"
	
	#include "Pnt.h"
	
	#include "Par.h"
	
	#include "Cir.h"
	
	#include "Sph.h"
	
	#include "Sta.h"
	
	#include "Drv.h"
	
	#include "Drb.h"
	
	#include "Drt.h"
	
	#include "Tnv.h"
	
	#include "Tnb.h"
	
	#include "Tnt.h"
	
	#include "Lin.h"
	
	#include "Pln.h"
	
	#include "Flp.h"
	
	#include "Dfp.h"
	
	#include "Dll.h"
	
	#include "Dlp.h"
	
	#include "Vec.h"
	
	#include "Biv.h"
	
	#include "Tri.h"
	
	#include "Aff.h"
	
	#include "Afl.h"
	
	#include "Afp.h"
	
	#include "Dap.h"
	
	#include "Daf.h"
	
	#include "Dal.h"
	
	#include "Mnv.h"
	
	#include "versorFuncs.h"
	#endif