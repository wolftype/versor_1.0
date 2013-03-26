	#ifndef VSR_TYPEDEFS_H_INCLUDED
	#define VSR_TYPEDEFS_H_INCLUDED
	 
	#include "MV.h"
	#ifndef VSR_PRECISION
	typdef float VSR_PRECISION 
	#endif
	namespace vsr{
	
	
	/*! Rotor */
	typedef MV<4,ROT,VSR_PRECISION>  Rot;
	typedef Rot Rotor;
	
	/*! Motor */
	typedef MV<8,MOT,VSR_PRECISION>  Mot;
	typedef Mot Motor;
	
	/*! Dilator */
	typedef MV<2,DIL,VSR_PRECISION>  Dil;
	typedef Dil Dilator;
	
	/*! Transversor */
	typedef MV<4,TRV,VSR_PRECISION>  Trv;
	typedef Trv Transversor;
	
	/*! Motor Dilator */
	typedef MV<12,MTD,VSR_PRECISION>  Mtd;
	typedef Mtd MotorDilator;
	
	/*! Translator */
	typedef MV<4,TRS,VSR_PRECISION>  Trs;
	typedef Trs Translator;
	
	/*! Rotor Circle */
	typedef MV<16,RTC,VSR_PRECISION>  Rtc;
	typedef Rtc RotorCircle;
	
	/*! Motor Transversor */
	typedef MV<16,MTT,VSR_PRECISION>  Mtt;
	typedef Mtt MotorTransversor;
	
	/*! Rotor Transveror */
	typedef MV<8,RTT,VSR_PRECISION>  Rtt;
	typedef Rtt RotorTransveror;
	
	/*! Rotor Dilator */
	typedef MV<8,RTD,VSR_PRECISION>  Rtd;
	typedef Rtd RotorDilator;
	
	/*! Transversor Dilator */
	typedef MV<5,TVD,VSR_PRECISION>  Tvd;
	typedef Tvd TransversorDilator;
	
	/*! Translator Dilator */
	typedef MV<5,TSD,VSR_PRECISION>  Tsd;
	typedef Tsd TranslatorDilator;
	
	/*! Transversor Translator */
	typedef MV<14,TRT,VSR_PRECISION>  Trt;
	typedef Trt TransversorTranslator;
	
	/*! Rotor Transversor Dilator */
	typedef MV<12,RVD,VSR_PRECISION>  Rvd;
	typedef Rvd RotorTransversorDilator;
	
	/*! Transv Transv Transl */
	typedef MV<15,TST,VSR_PRECISION>  Tst;
	typedef Tst TransvTransvTransl;
	
	/*! Trans Transv Transl */
	typedef MV<15,TVT,VSR_PRECISION>  Tvt;
	typedef Tvt TransTransvTransl;
	
	/*! Booster */
	typedef MV<11,BST,VSR_PRECISION>  Bst;
	typedef Bst Booster;
	
	/*! Scalar */
	typedef MV<1,SCA,VSR_PRECISION>  Sca;
	typedef Sca Scalar;
	
	/*! Origin */
	typedef MV<1,ORI,VSR_PRECISION>  Ori;
	typedef Ori Origin;
	
	/*! Infinity */
	typedef MV<1,INF,VSR_PRECISION>  Inf;
	typedef Inf Infinity;
	
	/*! Minkowski Plane */
	typedef MV<1,MNK,VSR_PRECISION>  Mnk;
	typedef Mnk MinkowskiPlane;
	
	/*! Imaginary Sphere */
	typedef MV<2,HYP,VSR_PRECISION>  Hyp;
	typedef Hyp ImaginarySphere;
	
	/*! Pseudoscalar */
	typedef MV<1,PSS,VSR_PRECISION>  Pss;
	typedef Pss Pseudoscalar;
	
	/*! Point */
	typedef MV<5,PNT,VSR_PRECISION>  Pnt;
	typedef Pnt Point;
	
	/*! Point Pair */
	typedef MV<10,PAR,VSR_PRECISION>  Par;
	typedef Par PointPair;
	
	/*! Circle */
	typedef MV<10,CIR,VSR_PRECISION>  Cir;
	typedef Cir Circle;
	
	/*! Sphere */
	typedef MV<5,SPH,VSR_PRECISION>  Sph;
	typedef Sph Sphere;
	
	/*! Space Time Wedge */
	typedef MV<9,STA,VSR_PRECISION>  Sta;
	typedef Sta SpaceTimeWedge;
	
	/*! Direction Vector */
	typedef MV<3,DRV,VSR_PRECISION>  Drv;
	typedef Drv DirectionVector;
	
	/*! Direction Bivector */
	typedef MV<3,DRB,VSR_PRECISION>  Drb;
	typedef Drb DirectionBivector;
	
	/*! Direction Trivector */
	typedef MV<1,DRT,VSR_PRECISION>  Drt;
	typedef Drt DirectionTrivector;
	
	/*! Tangent Vector at Origin */
	typedef MV<3,TNV,VSR_PRECISION>  Tnv;
	typedef Tnv TangentVectoratOrigin;
	
	/*! Tangent Bivector at Origin */
	typedef MV<3,TNB,VSR_PRECISION>  Tnb;
	typedef Tnb TangentBivectoratOrigin;
	
	/*! Tangent Trivector at Origin */
	typedef MV<1,TNT,VSR_PRECISION>  Tnt;
	typedef Tnt TangentTrivectoratOrigin;
	
	/*! Line */
	typedef MV<6,LIN,VSR_PRECISION>  Lin;
	typedef Lin Line;
	
	/*! Plane */
	typedef MV<4,PLN,VSR_PRECISION>  Pln;
	typedef Pln Plane;
	
	/*! Flat Point */
	typedef MV<4,FLP,VSR_PRECISION>  Flp;
	typedef Flp FlatPoint;
	
	/*! Dual Flat Point */
	typedef MV<4,DFP,VSR_PRECISION>  Dfp;
	typedef Dfp DualFlatPoint;
	
	/*! Dual Line */
	typedef MV<6,DLL,VSR_PRECISION>  Dll;
	typedef Dll DualLine;
	
	/*! Dual Plane */
	typedef MV<4,DLP,VSR_PRECISION>  Dlp;
	typedef Dlp DualPlane;
	
	/*! Vector */
	typedef MV<3,VEC,VSR_PRECISION>  Vec;
	typedef Vec Vector;
	
	/*! Bivector */
	typedef MV<3,BIV,VSR_PRECISION>  Biv;
	typedef Biv Bivector;
	
	/*! Trivector */
	typedef MV<1,TRI,VSR_PRECISION>  Tri;
	typedef Tri Trivector;
	
	/*! Glide */
	typedef MV<7,GLD,VSR_PRECISION>  Gld;
	typedef Gld Glide;
	
	/*! Rotor Origin */
	typedef MV<4,ROT_ORI,VSR_PRECISION>  Rot_Ori;
	typedef Rot_Ori RotorOrigin;
	
	/*! Rotor Infinity */
	typedef MV<4,ROT_INF,VSR_PRECISION>  Rot_Inf;
	typedef Rot_Inf RotorInfinity;
	
	/*! Rotor Minkowski Plane */
	typedef MV<4,ROT_MNK,VSR_PRECISION>  Rot_Mnk;
	typedef Rot_Mnk RotorMinkowskiPlane;
	
	/*! Rotor Imaginary Sphere */
	typedef MV<8,ROT_HYP,VSR_PRECISION>  Rot_Hyp;
	typedef Rot_Hyp RotorImaginarySphere;
	
	/*! Rotor Pseudoscalar */
	typedef MV<4,ROT_PSS,VSR_PRECISION>  Rot_Pss;
	typedef Rot_Pss RotorPseudoscalar;
	
	/*! Rotor Point */
	typedef MV<12,ROT_PNT,VSR_PRECISION>  Rot_Pnt;
	typedef Rot_Pnt RotorPoint;
	
	/*! Rotor Sphere */
	typedef MV<12,ROT_SPH,VSR_PRECISION>  Rot_Sph;
	typedef Rot_Sph RotorSphere;
	
	/*! Rotor Space Time Wedge */
	typedef MV<12,ROT_STA,VSR_PRECISION>  Rot_Sta;
	typedef Rot_Sta RotorSpaceTimeWedge;
	
	/*! Rotor Direction Vector */
	typedef MV<4,ROT_DRV,VSR_PRECISION>  Rot_Drv;
	typedef Rot_Drv RotorDirectionVector;
	
	/*! Rotor Tangent Vector at Origin */
	typedef MV<4,ROT_TNV,VSR_PRECISION>  Rot_Tnv;
	typedef Rot_Tnv RotorTangentVectoratOrigin;
	
	/*! Rotor Line */
	typedef MV<8,ROT_LIN,VSR_PRECISION>  Rot_Lin;
	typedef Rot_Lin RotorLine;
	
	/*! Rotor Plane */
	typedef MV<8,ROT_PLN,VSR_PRECISION>  Rot_Pln;
	typedef Rot_Pln RotorPlane;
	
	/*! Rotor Dual Flat Point */
	typedef MV<8,ROT_DFP,VSR_PRECISION>  Rot_Dfp;
	typedef Rot_Dfp RotorDualFlatPoint;
	
	/*! Rotor Vector */
	typedef MV<4,ROT_VEC,VSR_PRECISION>  Rot_Vec;
	typedef Rot_Vec RotorVector;
	
	/*! Motor Origin */
	typedef MV<12,MOT_ORI,VSR_PRECISION>  Mot_Ori;
	typedef Mot_Ori MotorOrigin;
	
	/*! Dilator Pseudoscalar */
	typedef MV<2,DIL_PSS,VSR_PRECISION>  Dil_Pss;
	typedef Dil_Pss DilatorPseudoscalar;
	
	/*! Dilator Point */
	typedef MV<8,DIL_PNT,VSR_PRECISION>  Dil_Pnt;
	typedef Dil_Pnt DilatorPoint;
	
	/*! Dilator Circle */
	typedef MV<14,DIL_CIR,VSR_PRECISION>  Dil_Cir;
	typedef Dil_Cir DilatorCircle;
	
	/*! Dilator Sphere */
	typedef MV<8,DIL_SPH,VSR_PRECISION>  Dil_Sph;
	typedef Dil_Sph DilatorSphere;
	
	/*! Dilator Space Time Wedge */
	typedef MV<12,DIL_STA,VSR_PRECISION>  Dil_Sta;
	typedef Dil_Sta DilatorSpaceTimeWedge;
	
	/*! Dilator Line */
	typedef MV<9,DIL_LIN,VSR_PRECISION>  Dil_Lin;
	typedef Dil_Lin DilatorLine;
	
	/*! Dilator Plane */
	typedef MV<7,DIL_PLN,VSR_PRECISION>  Dil_Pln;
	typedef Dil_Pln DilatorPlane;
	
	/*! Dilator Dual Flat Point */
	typedef MV<5,DIL_DFP,VSR_PRECISION>  Dil_Dfp;
	typedef Dil_Dfp DilatorDualFlatPoint;
	
	/*! Dilator Dual Line */
	typedef MV<9,DIL_DLL,VSR_PRECISION>  Dil_Dll;
	typedef Dil_Dll DilatorDualLine;
	
	/*! Dilator Dual Plane */
	typedef MV<7,DIL_DLP,VSR_PRECISION>  Dil_Dlp;
	typedef Dil_Dlp DilatorDualPlane;
	
	/*! Dilator Vector */
	typedef MV<6,DIL_VEC,VSR_PRECISION>  Dil_Vec;
	typedef Dil_Vec DilatorVector;
	
	/*! Dilator Bivector */
	typedef MV<6,DIL_BIV,VSR_PRECISION>  Dil_Biv;
	typedef Dil_Biv DilatorBivector;
	
	/*! Dilator Glide */
	typedef MV<10,DIL_GLD,VSR_PRECISION>  Dil_Gld;
	typedef Dil_Gld DilatorGlide;
	
	/*! Transversor Minkowski Plane */
	typedef MV<4,TRV_MNK,VSR_PRECISION>  Trv_Mnk;
	typedef Trv_Mnk TransversorMinkowskiPlane;
	
	/*! Transversor Pseudoscalar */
	typedef MV<4,TRV_PSS,VSR_PRECISION>  Trv_Pss;
	typedef Trv_Pss TransversorPseudoscalar;
	
	/*! Transversor Point */
	typedef MV<11,TRV_PNT,VSR_PRECISION>  Trv_Pnt;
	typedef Trv_Pnt TransversorPoint;
	
	/*! Transversor Circle */
	typedef MV<15,TRV_CIR,VSR_PRECISION>  Trv_Cir;
	typedef Trv_Cir TransversorCircle;
	
	/*! Transversor Sphere */
	typedef MV<11,TRV_SPH,VSR_PRECISION>  Trv_Sph;
	typedef Trv_Sph TransversorSphere;
	
	/*! Transversor Direction Vector */
	typedef MV<11,TRV_DRV,VSR_PRECISION>  Trv_Drv;
	typedef Trv_Drv TransversorDirectionVector;
	
	/*! Transversor Direction Bivector */
	typedef MV<11,TRV_DRB,VSR_PRECISION>  Trv_Drb;
	typedef Trv_Drb TransversorDirectionBivector;
	
	/*! Transversor Vector */
	typedef MV<7,TRV_VEC,VSR_PRECISION>  Trv_Vec;
	typedef Trv_Vec TransversorVector;
	
	/*! Transversor Bivector */
	typedef MV<7,TRV_BIV,VSR_PRECISION>  Trv_Biv;
	typedef Trv_Biv TransversorBivector;
	
	/*! Transversor Trivector */
	typedef MV<4,TRV_TRI,VSR_PRECISION>  Trv_Tri;
	typedef Trv_Tri TransversorTrivector;
	
	/*! Motor Dilator Pseudoscalar */
	typedef MV<12,MTD_PSS,VSR_PRECISION>  Mtd_Pss;
	typedef Mtd_Pss MotorDilatorPseudoscalar;
	
	/*! Translator Origin */
	typedef MV<7,TRS_ORI,VSR_PRECISION>  Trs_Ori;
	typedef Trs_Ori TranslatorOrigin;
	
	/*! Translator Pseudoscalar */
	typedef MV<4,TRS_PSS,VSR_PRECISION>  Trs_Pss;
	typedef Trs_Pss TranslatorPseudoscalar;
	
	/*! Translator Point */
	typedef MV<11,TRS_PNT,VSR_PRECISION>  Trs_Pnt;
	typedef Trs_Pnt TranslatorPoint;
	
	/*! Translator Circle */
	typedef MV<15,TRS_CIR,VSR_PRECISION>  Trs_Cir;
	typedef Trs_Cir TranslatorCircle;
	
	/*! Translator Sphere */
	typedef MV<11,TRS_SPH,VSR_PRECISION>  Trs_Sph;
	typedef Trs_Sph TranslatorSphere;
	
	/*! Translator Tangent Vector at Origin */
	typedef MV<11,TRS_TNV,VSR_PRECISION>  Trs_Tnv;
	typedef Trs_Tnv TranslatorTangentVectoratOrigin;
	
	/*! Translator Tangent Bivector at Origin */
	typedef MV<11,TRS_TNB,VSR_PRECISION>  Trs_Tnb;
	typedef Trs_Tnb TranslatorTangentBivectoratOrigin;
	
	/*! Translator Tangent Trivector at Origin */
	typedef MV<7,TRS_TNT,VSR_PRECISION>  Trs_Tnt;
	typedef Trs_Tnt TranslatorTangentTrivectoratOrigin;
	
	/*! Translator Line */
	typedef MV<7,TRS_LIN,VSR_PRECISION>  Trs_Lin;
	typedef Trs_Lin TranslatorLine;
	
	/*! Translator Plane */
	typedef MV<7,TRS_PLN,VSR_PRECISION>  Trs_Pln;
	typedef Trs_Pln TranslatorPlane;
	
	/*! Translator Dual Line */
	typedef MV<7,TRS_DLL,VSR_PRECISION>  Trs_Dll;
	typedef Trs_Dll TranslatorDualLine;
	
	/*! Rotor Transveror Minkowski Plane */
	typedef MV<8,RTT_MNK,VSR_PRECISION>  Rtt_Mnk;
	typedef Rtt_Mnk RotorTransverorMinkowskiPlane;
	
	/*! Rotor Transveror Pseudoscalar */
	typedef MV<8,RTT_PSS,VSR_PRECISION>  Rtt_Pss;
	typedef Rtt_Pss RotorTransverorPseudoscalar;
	
	/*! Rotor Transveror Vector */
	typedef MV<8,RTT_VEC,VSR_PRECISION>  Rtt_Vec;
	typedef Rtt_Vec RotorTransverorVector;
	
	/*! Rotor Dilator Pseudoscalar */
	typedef MV<8,RTD_PSS,VSR_PRECISION>  Rtd_Pss;
	typedef Rtd_Pss RotorDilatorPseudoscalar;
	
	/*! Transversor Dilator Pseudoscalar */
	typedef MV<5,TVD_PSS,VSR_PRECISION>  Tvd_Pss;
	typedef Tvd_Pss TransversorDilatorPseudoscalar;
	
	/*! Transversor Dilator Vector */
	typedef MV<10,TVD_VEC,VSR_PRECISION>  Tvd_Vec;
	typedef Tvd_Vec TransversorDilatorVector;
	
	/*! Transversor Dilator Bivector */
	typedef MV<10,TVD_BIV,VSR_PRECISION>  Tvd_Biv;
	typedef Tvd_Biv TransversorDilatorBivector;
	
	/*! Translator Dilator Plane */
	typedef MV<10,TSD_PLN,VSR_PRECISION>  Tsd_Pln;
	typedef Tsd_Pln TranslatorDilatorPlane;
	
	/*! Transversor Translator Imaginary Sphere */
	typedef MV<14,TRT_HYP,VSR_PRECISION>  Trt_Hyp;
	typedef Trt_Hyp TransversorTranslatorImaginarySphere;
	
	/*! Booster Minkowski Plane */
	typedef MV<11,BST_MNK,VSR_PRECISION>  Bst_Mnk;
	typedef Bst_Mnk BoosterMinkowskiPlane;
	
	/*! Booster Pseudoscalar */
	typedef MV<11,BST_PSS,VSR_PRECISION>  Bst_Pss;
	typedef Bst_Pss BoosterPseudoscalar;
	
	/*! Booster Point */
	typedef MV<15,BST_PNT,VSR_PRECISION>  Bst_Pnt;
	typedef Bst_Pnt BoosterPoint;
	
	/*! Booster Sphere */
	typedef MV<15,BST_SPH,VSR_PRECISION>  Bst_Sph;
	typedef Bst_Sph BoosterSphere;
	
	/*! Booster Bivector */
	typedef MV<15,BST_BIV,VSR_PRECISION>  Bst_Biv;
	typedef Bst_Biv BoosterBivector;
	
	/*! Booster Trivector */
	typedef MV<11,BST_TRI,VSR_PRECISION>  Bst_Tri;
	typedef Bst_Tri BoosterTrivector;
	
	/*! Origin Origin */
	typedef MV<0,ORI_ORI,VSR_PRECISION>  Ori_Ori;
	typedef Ori_Ori OriginOrigin;
	
	/*! Origin Space Time Wedge */
	typedef MV<9,ORI_STA,VSR_PRECISION>  Ori_Sta;
	typedef Ori_Sta OriginSpaceTimeWedge;
	
	/*! Origin Line */
	typedef MV<9,ORI_LIN,VSR_PRECISION>  Ori_Lin;
	typedef Ori_Lin OriginLine;
	
	/*! Minkowski Plane Point */
	typedef MV<5,MNK_PNT,VSR_PRECISION>  Mnk_Pnt;
	typedef Mnk_Pnt MinkowskiPlanePoint;
	
	/*! Minkowski Plane Point Pair */
	typedef MV<10,MNK_PAR,VSR_PRECISION>  Mnk_Par;
	typedef Mnk_Par MinkowskiPlanePointPair;
	
	/*! Minkowski Plane Circle */
	typedef MV<10,MNK_CIR,VSR_PRECISION>  Mnk_Cir;
	typedef Mnk_Cir MinkowskiPlaneCircle;
	
	/*! Minkowski Plane Sphere */
	typedef MV<5,MNK_SPH,VSR_PRECISION>  Mnk_Sph;
	typedef Mnk_Sph MinkowskiPlaneSphere;
	
	/*! Minkowski Plane Space Time Wedge */
	typedef MV<9,MNK_STA,VSR_PRECISION>  Mnk_Sta;
	typedef Mnk_Sta MinkowskiPlaneSpaceTimeWedge;
	
	/*! Minkowski Plane Line */
	typedef MV<6,MNK_LIN,VSR_PRECISION>  Mnk_Lin;
	typedef Mnk_Lin MinkowskiPlaneLine;
	
	/*! Minkowski Plane Plane */
	typedef MV<4,MNK_PLN,VSR_PRECISION>  Mnk_Pln;
	typedef Mnk_Pln MinkowskiPlanePlane;
	
	/*! Minkowski Plane Dual Line */
	typedef MV<6,MNK_DLL,VSR_PRECISION>  Mnk_Dll;
	typedef Mnk_Dll MinkowskiPlaneDualLine;
	
	/*! Minkowski Plane Dual Plane */
	typedef MV<4,MNK_DLP,VSR_PRECISION>  Mnk_Dlp;
	typedef Mnk_Dlp MinkowskiPlaneDualPlane;
	
	/*! Minkowski Plane Vector */
	typedef MV<3,MNK_VEC,VSR_PRECISION>  Mnk_Vec;
	typedef Mnk_Vec MinkowskiPlaneVector;
	
	/*! Minkowski Plane Bivector */
	typedef MV<3,MNK_BIV,VSR_PRECISION>  Mnk_Biv;
	typedef Mnk_Biv MinkowskiPlaneBivector;
	
	/*! Imaginary Sphere Pseudoscalar */
	typedef MV<2,HYP_PSS,VSR_PRECISION>  Hyp_Pss;
	typedef Hyp_Pss ImaginarySpherePseudoscalar;
	
	/*! Imaginary Sphere Point */
	typedef MV<8,HYP_PNT,VSR_PRECISION>  Hyp_Pnt;
	typedef Hyp_Pnt ImaginarySpherePoint;
	
	/*! Imaginary Sphere Circle */
	typedef MV<14,HYP_CIR,VSR_PRECISION>  Hyp_Cir;
	typedef Hyp_Cir ImaginarySphereCircle;
	
	/*! Imaginary Sphere Sphere */
	typedef MV<8,HYP_SPH,VSR_PRECISION>  Hyp_Sph;
	typedef Hyp_Sph ImaginarySphereSphere;
	
	/*! Imaginary Sphere Space Time Wedge */
	typedef MV<12,HYP_STA,VSR_PRECISION>  Hyp_Sta;
	typedef Hyp_Sta ImaginarySphereSpaceTimeWedge;
	
	/*! Imaginary Sphere Vector */
	typedef MV<6,HYP_VEC,VSR_PRECISION>  Hyp_Vec;
	typedef Hyp_Vec ImaginarySphereVector;
	
	/*! Imaginary Sphere Bivector */
	typedef MV<6,HYP_BIV,VSR_PRECISION>  Hyp_Biv;
	typedef Hyp_Biv ImaginarySphereBivector;
	
	/*! Pseudoscalar Space Time Wedge */
	typedef MV<9,PSS_STA,VSR_PRECISION>  Pss_Sta;
	typedef Pss_Sta PseudoscalarSpaceTimeWedge;
	
	/*! Point Line */
	typedef MV<14,PNT_LIN,VSR_PRECISION>  Pnt_Lin;
	typedef Pnt_Lin PointLine;
	
	/*! Point Dual Line */
	typedef MV<14,PNT_DLL,VSR_PRECISION>  Pnt_Dll;
	typedef Pnt_Dll PointDualLine;
	
	/*! Point Vector */
	typedef MV<10,PNT_VEC,VSR_PRECISION>  Pnt_Vec;
	typedef Pnt_Vec PointVector;
	
	/*! Point Bivector */
	typedef MV<10,PNT_BIV,VSR_PRECISION>  Pnt_Biv;
	typedef Pnt_Biv PointBivector;
	
	/*! Circle Bivector */
	typedef MV<15,CIR_BIV,VSR_PRECISION>  Cir_Biv;
	typedef Cir_Biv CircleBivector;
	
	/*! Sphere Vector */
	typedef MV<10,SPH_VEC,VSR_PRECISION>  Sph_Vec;
	typedef Sph_Vec SphereVector;
	
	/*! Sphere Bivector */
	typedef MV<10,SPH_BIV,VSR_PRECISION>  Sph_Biv;
	typedef Sph_Biv SphereBivector;
	
	/*! Space Time Wedge Trivector */
	typedef MV<9,STA_TRI,VSR_PRECISION>  Sta_Tri;
	typedef Sta_Tri SpaceTimeWedgeTrivector;
	
	/*! Plane Plane */
	typedef MV<7,PLN_PLN,VSR_PRECISION>  Pln_Pln;
	typedef Pln_Pln PlanePlane;
	
	/*! Plane Dual Plane */
	typedef MV<7,PLN_DLP,VSR_PRECISION>  Pln_Dlp;
	typedef Pln_Dlp PlaneDualPlane;
	
	/*! Plane Bivector */
	typedef MV<7,PLN_BIV,VSR_PRECISION>  Pln_Biv;
	typedef Pln_Biv PlaneBivector;
	
	/*! Dual Plane Bivector */
	typedef MV<7,DLP_BIV,VSR_PRECISION>  Dlp_Biv;
	typedef Dlp_Biv DualPlaneBivector;
	
	/*! Rotor Minkowski Plane Point */
	typedef MV<12,ROT_MNK_PNT,VSR_PRECISION>  Rot_Mnk_Pnt;
	typedef Rot_Mnk_Pnt RotorMinkowskiPlanePoint;
	
	/*! Rotor Imaginary Sphere Pseudoscalar */
	typedef MV<8,ROT_HYP_PSS,VSR_PRECISION>  Rot_Hyp_Pss;
	typedef Rot_Hyp_Pss RotorImaginarySpherePseudoscalar;
	
	/*! Transversor Minkowski Plane Vector */
	typedef MV<7,TRV_MNK_VEC,VSR_PRECISION>  Trv_Mnk_Vec;
	typedef Trv_Mnk_Vec TransversorMinkowskiPlaneVector;
	
	/*! Transversor Minkowski Plane Bivector */
	typedef MV<7,TRV_MNK_BIV,VSR_PRECISION>  Trv_Mnk_Biv;
	typedef Trv_Mnk_Biv TransversorMinkowskiPlaneBivector;
	
	/*! Minkowski Plane Point Line */
	typedef MV<14,MNK_PNT_LIN,VSR_PRECISION>  Mnk_Pnt_Lin;
	typedef Mnk_Pnt_Lin MinkowskiPlanePointLine;
	
	/*! Minkowski Plane Point Dual Line */
	typedef MV<14,MNK_PNT_DLL,VSR_PRECISION>  Mnk_Pnt_Dll;
	typedef Mnk_Pnt_Dll MinkowskiPlanePointDualLine;
	
	/*! Origin Point Pair */
	typedef MV<4,ORI_IP_PAR,VSR_PRECISION>  Ori_ip_Par;
	typedef Ori_ip_Par OriginPointPair;
	
	/*! Origin Circle */
	typedef MV<6,ORI_IP_CIR,VSR_PRECISION>  Ori_ip_Cir;
	typedef Ori_ip_Cir OriginCircle;
	
	/*! Imaginary Sphere Sphere */
	typedef MV<7,HYP_IP_SPH,VSR_PRECISION>  Hyp_ip_Sph;
	typedef Hyp_ip_Sph ImaginarySphereSphere;
	
	/*! Bivector Sphere */
	typedef MV<7,BIV_IP_SPH,VSR_PRECISION>  Biv_ip_Sph;
	typedef Biv_ip_Sph BivectorSphere;
	
	/*! Glide Tangent Bivector at Origin */
	typedef MV<7,GLD_IP_TNB,VSR_PRECISION>  Gld_ip_Tnb;
	typedef Gld_ip_Tnb GlideTangentBivectoratOrigin;
	
	/*! Glide Tangent Trivector at Origin */
	typedef MV<7,GLD_IP_TNT,VSR_PRECISION>  Gld_ip_Tnt;
	typedef Gld_ip_Tnt GlideTangentTrivectoratOrigin;
	
	/*! Origin Point Pair */
	typedef MV<6,ORI_OP_PAR,VSR_PRECISION>  Ori_op_Par;
	typedef Ori_op_Par OriginPointPair;
	
	/*! Origin Circle */
	typedef MV<4,ORI_OP_CIR,VSR_PRECISION>  Ori_op_Cir;
	typedef Ori_op_Cir OriginCircle;
	
	/*! Origin Glide */
	typedef MV<7,ORI_OP_GLD,VSR_PRECISION>  Ori_op_Gld;
	typedef Ori_op_Gld OriginGlide;
	
	/*! Tangent Vector at Origin Glide */
	typedef MV<7,TNV_OP_GLD,VSR_PRECISION>  Tnv_op_Gld;
	typedef Tnv_op_Gld TangentVectoratOriginGlide;
	
	/*! Minkowski Plane Origin Point Pair */
	typedef MV<4,MNK_ORI_IP_PAR,VSR_PRECISION>  Mnk_Ori_ip_Par;
	typedef Mnk_Ori_ip_Par MinkowskiPlaneOriginPointPair;
	
	/*! Minkowski Plane Origin Circle */
	typedef MV<6,MNK_ORI_IP_CIR,VSR_PRECISION>  Mnk_Ori_ip_Cir;
	typedef Mnk_Ori_ip_Cir MinkowskiPlaneOriginCircle;
	
	/*! Minkowski Plane Imaginary Sphere Sphere */
	typedef MV<7,MNK_HYP_IP_SPH,VSR_PRECISION>  Mnk_Hyp_ip_Sph;
	typedef Mnk_Hyp_ip_Sph MinkowskiPlaneImaginarySphereSphere;
	
	/*! Minkowski Plane Bivector Sphere */
	typedef MV<7,MNK_BIV_IP_SPH,VSR_PRECISION>  Mnk_Biv_ip_Sph;
	typedef Mnk_Biv_ip_Sph MinkowskiPlaneBivectorSphere;
	
	/*! Minkowski Plane Origin Point Pair */
	typedef MV<6,MNK_ORI_OP_PAR,VSR_PRECISION>  Mnk_Ori_op_Par;
	typedef Mnk_Ori_op_Par MinkowskiPlaneOriginPointPair;
	
	/*! Minkowski Plane Origin Circle */
	typedef MV<4,MNK_ORI_OP_CIR,VSR_PRECISION>  Mnk_Ori_op_Cir;
	typedef Mnk_Ori_op_Cir MinkowskiPlaneOriginCircle;
	
	/*! Point Origin Circle */
	typedef MV<14,PNT_ORI_IP_CIR,VSR_PRECISION>  Pnt_Ori_ip_Cir;
	typedef Pnt_Ori_ip_Cir PointOriginCircle;
	
	/*! Point Origin Point Pair */
	typedef MV<14,PNT_ORI_OP_PAR,VSR_PRECISION>  Pnt_Ori_op_Par;
	typedef Pnt_Ori_op_Par PointOriginPointPair;
	
	/*! Point Minkowski Plane Origin Circle */
	typedef MV<14,PNT_MNK_ORI_IP_CIR,VSR_PRECISION>  Pnt_Mnk_Ori_ip_Cir;
	typedef Pnt_Mnk_Ori_ip_Cir PointMinkowskiPlaneOriginCircle;
	
	/*! Point Minkowski Plane Origin Point Pair */
	typedef MV<14,PNT_MNK_ORI_OP_PAR,VSR_PRECISION>  Pnt_Mnk_Ori_op_Par;
	typedef Pnt_Mnk_Ori_op_Par PointMinkowskiPlaneOriginPointPair;
	
	/*! Vector Imaginary Sphere Sphere */
	typedef MV<11,VEC_HYP_IP_SPH,VSR_PRECISION>  Vec_Hyp_ip_Sph;
	typedef Vec_Hyp_ip_Sph VectorImaginarySphereSphere;
	
	/*! Vector Bivector Sphere */
	typedef MV<11,VEC_BIV_IP_SPH,VSR_PRECISION>  Vec_Biv_ip_Sph;
	typedef Vec_Biv_ip_Sph VectorBivectorSphere;
	
	/*! Vector Minkowski Plane Imaginary Sphere Sphere */
	typedef MV<11,VEC_MNK_HYP_IP_SPH,VSR_PRECISION>  Vec_Mnk_Hyp_ip_Sph;
	typedef Vec_Mnk_Hyp_ip_Sph VectorMinkowskiPlaneImaginarySphereSphere;
	
	/*! Vector Minkowski Plane Bivector Sphere */
	typedef MV<11,VEC_MNK_BIV_IP_SPH,VSR_PRECISION>  Vec_Mnk_Biv_ip_Sph;
	typedef Vec_Mnk_Biv_ip_Sph VectorMinkowskiPlaneBivectorSphere;
	
	typedef Pnt Dls;
		
	} //vsr::
	#endif
	