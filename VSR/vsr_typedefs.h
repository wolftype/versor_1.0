	#ifndef VSR_TYPEDEFS_H_INCLUDED
	#define VSR_TYPEDEFS_H_INCLUDED
	 
	#include "vsr_mv.h"

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
	
	/*! Affine Point */
	typedef MV<4,AFF,VSR_PRECISION>  Aff;
	typedef Aff AffinePoint;
	
	/*! Affine Line */
	typedef MV<6,AFL,VSR_PRECISION>  Afl;
	typedef Afl AffineLine;
	
	/*! Affine Plane */
	typedef MV<4,AFP,VSR_PRECISION>  Afp;
	typedef Afp AffinePlane;
	
	/*! Dual Affine Plane */
	typedef MV<4,DAP,VSR_PRECISION>  Dap;
	typedef Dap DualAffinePlane;
	
	/*! Dual Affine Point */
	typedef MV<4,DAF,VSR_PRECISION>  Daf;
	typedef Daf DualAffinePoint;
	
	/*! Dual Affine Line */
	typedef MV<6,DAL,VSR_PRECISION>  Dal;
	typedef Dal DualAffineLine;
	
	/*! Minkowski Vector */
	typedef MV<3,MNV,VSR_PRECISION>  Mnv;
	typedef Mnv MinkowskiVector;
	
	/*! Origin Origin */
	typedef MV<0,ORI_ORI,VSR_PRECISION>  Ori_Ori;
	typedef Ori_Ori OriginOrigin;
	
	/*! Origin Point Pair */
	typedef MV<10,ORI_PAR,VSR_PRECISION>  Ori_Par;
	typedef Ori_Par OriginPointPair;
	
	/*! Origin Circle */
	typedef MV<10,ORI_CIR,VSR_PRECISION>  Ori_Cir;
	typedef Ori_Cir OriginCircle;
	
	/*! Origin Sphere */
	typedef MV<5,ORI_SPH,VSR_PRECISION>  Ori_Sph;
	typedef Ori_Sph OriginSphere;
	
	/*! Origin Space Time Wedge */
	typedef MV<9,ORI_STA,VSR_PRECISION>  Ori_Sta;
	typedef Ori_Sta OriginSpaceTimeWedge;
	
	/*! Origin Direction Vector */
	typedef MV<6,ORI_DRV,VSR_PRECISION>  Ori_Drv;
	typedef Ori_Drv OriginDirectionVector;
	
	/*! Origin Direction Bivector */
	typedef MV<6,ORI_DRB,VSR_PRECISION>  Ori_Drb;
	typedef Ori_Drb OriginDirectionBivector;
	
	/*! Origin Direction Trivector */
	typedef MV<2,ORI_DRT,VSR_PRECISION>  Ori_Drt;
	typedef Ori_Drt OriginDirectionTrivector;
	
	/*! Origin Line */
	typedef MV<9,ORI_LIN,VSR_PRECISION>  Ori_Lin;
	typedef Ori_Lin OriginLine;
	
	/*! Origin Flat Point */
	typedef MV<7,ORI_FLP,VSR_PRECISION>  Ori_Flp;
	typedef Ori_Flp OriginFlatPoint;
	
	/*! Origin Dual Flat Point */
	typedef MV<7,ORI_DFP,VSR_PRECISION>  Ori_Dfp;
	typedef Ori_Dfp OriginDualFlatPoint;
	
	/*! Infinity Point Pair */
	typedef MV<10,INF_PAR,VSR_PRECISION>  Inf_Par;
	typedef Inf_Par InfinityPointPair;
	
	/*! Infinity Circle */
	typedef MV<10,INF_CIR,VSR_PRECISION>  Inf_Cir;
	typedef Inf_Cir InfinityCircle;
	
	/*! Infinity Sphere */
	typedef MV<5,INF_SPH,VSR_PRECISION>  Inf_Sph;
	typedef Inf_Sph InfinitySphere;
	
	/*! Infinity Space Time Wedge */
	typedef MV<9,INF_STA,VSR_PRECISION>  Inf_Sta;
	typedef Inf_Sta InfinitySpaceTimeWedge;
	
	/*! Infinity Affine Plane */
	typedef MV<7,INF_AFP,VSR_PRECISION>  Inf_Afp;
	typedef Inf_Afp InfinityAffinePlane;
	
	/*! Infinity Dual Affine Plane */
	typedef MV<7,INF_DAP,VSR_PRECISION>  Inf_Dap;
	typedef Inf_Dap InfinityDualAffinePlane;
	
	/*! Infinity Dual Affine Line */
	typedef MV<9,INF_DAL,VSR_PRECISION>  Inf_Dal;
	typedef Inf_Dal InfinityDualAffineLine;
	
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
	
	/*! Minkowski Plane Dual Flat Point */
	typedef MV<4,MNK_DFP,VSR_PRECISION>  Mnk_Dfp;
	typedef Mnk_Dfp MinkowskiPlaneDualFlatPoint;
	
	/*! Minkowski Plane Dual Line */
	typedef MV<6,MNK_DLL,VSR_PRECISION>  Mnk_Dll;
	typedef Mnk_Dll MinkowskiPlaneDualLine;
	
	/*! Minkowski Plane Dual Plane */
	typedef MV<4,MNK_DLP,VSR_PRECISION>  Mnk_Dlp;
	typedef Mnk_Dlp MinkowskiPlaneDualPlane;
	
	/*! Minkowski Plane Bivector */
	typedef MV<3,MNK_BIV,VSR_PRECISION>  Mnk_Biv;
	typedef Mnk_Biv MinkowskiPlaneBivector;
	
	/*! Minkowski Plane Affine Point */
	typedef MV<4,MNK_AFF,VSR_PRECISION>  Mnk_Aff;
	typedef Mnk_Aff MinkowskiPlaneAffinePoint;
	
	/*! Minkowski Plane Affine Line */
	typedef MV<6,MNK_AFL,VSR_PRECISION>  Mnk_Afl;
	typedef Mnk_Afl MinkowskiPlaneAffineLine;
	
	/*! Minkowski Plane Affine Plane */
	typedef MV<4,MNK_AFP,VSR_PRECISION>  Mnk_Afp;
	typedef Mnk_Afp MinkowskiPlaneAffinePlane;
	
	/*! Minkowski Plane Dual Affine Point */
	typedef MV<4,MNK_DAF,VSR_PRECISION>  Mnk_Daf;
	typedef Mnk_Daf MinkowskiPlaneDualAffinePoint;
	
	/*! Minkowski Plane Dual Affine Line */
	typedef MV<6,MNK_DAL,VSR_PRECISION>  Mnk_Dal;
	typedef Mnk_Dal MinkowskiPlaneDualAffineLine;
	
	/*! Imaginary Sphere Pseudoscalar */
	typedef MV<2,HYP_PSS,VSR_PRECISION>  Hyp_Pss;
	typedef Hyp_Pss ImaginarySpherePseudoscalar;
	
	/*! Imaginary Sphere Point */
	typedef MV<8,HYP_PNT,VSR_PRECISION>  Hyp_Pnt;
	typedef Hyp_Pnt ImaginarySpherePoint;
	
	/*! Imaginary Sphere Point Pair */
	typedef MV<14,HYP_PAR,VSR_PRECISION>  Hyp_Par;
	typedef Hyp_Par ImaginarySpherePointPair;
	
	/*! Imaginary Sphere Circle */
	typedef MV<14,HYP_CIR,VSR_PRECISION>  Hyp_Cir;
	typedef Hyp_Cir ImaginarySphereCircle;
	
	/*! Imaginary Sphere Sphere */
	typedef MV<8,HYP_SPH,VSR_PRECISION>  Hyp_Sph;
	typedef Hyp_Sph ImaginarySphereSphere;
	
	/*! Imaginary Sphere Space Time Wedge */
	typedef MV<12,HYP_STA,VSR_PRECISION>  Hyp_Sta;
	typedef Hyp_Sta ImaginarySphereSpaceTimeWedge;
	
	/*! Imaginary Sphere Line */
	typedef MV<12,HYP_LIN,VSR_PRECISION>  Hyp_Lin;
	typedef Hyp_Lin ImaginarySphereLine;
	
	/*! Imaginary Sphere Flat Point */
	typedef MV<8,HYP_FLP,VSR_PRECISION>  Hyp_Flp;
	typedef Hyp_Flp ImaginarySphereFlatPoint;
	
	/*! Imaginary Sphere Dual Flat Point */
	typedef MV<8,HYP_DFP,VSR_PRECISION>  Hyp_Dfp;
	typedef Hyp_Dfp ImaginarySphereDualFlatPoint;
	
	/*! Imaginary Sphere Vector */
	typedef MV<6,HYP_VEC,VSR_PRECISION>  Hyp_Vec;
	typedef Hyp_Vec ImaginarySphereVector;
	
	/*! Imaginary Sphere Bivector */
	typedef MV<6,HYP_BIV,VSR_PRECISION>  Hyp_Biv;
	typedef Hyp_Biv ImaginarySphereBivector;
	
	/*! Pseudoscalar Space Time Wedge */
	typedef MV<9,PSS_STA,VSR_PRECISION>  Pss_Sta;
	typedef Pss_Sta PseudoscalarSpaceTimeWedge;
	
	/*! Point Point Pair */
	typedef MV<15,PNT_PAR,VSR_PRECISION>  Pnt_Par;
	typedef Pnt_Par PointPointPair;
	
	/*! Point Circle */
	typedef MV<15,PNT_CIR,VSR_PRECISION>  Pnt_Cir;
	typedef Pnt_Cir PointCircle;
	
	/*! Point Sphere */
	typedef MV<11,PNT_SPH,VSR_PRECISION>  Pnt_Sph;
	typedef Pnt_Sph PointSphere;
	
	/*! Point Line */
	typedef MV<14,PNT_LIN,VSR_PRECISION>  Pnt_Lin;
	typedef Pnt_Lin PointLine;
	
	/*! Point Flat Point */
	typedef MV<11,PNT_FLP,VSR_PRECISION>  Pnt_Flp;
	typedef Pnt_Flp PointFlatPoint;
	
	/*! Point Dual Flat Point */
	typedef MV<11,PNT_DFP,VSR_PRECISION>  Pnt_Dfp;
	typedef Pnt_Dfp PointDualFlatPoint;
	
	/*! Point Dual Line */
	typedef MV<14,PNT_DLL,VSR_PRECISION>  Pnt_Dll;
	typedef Pnt_Dll PointDualLine;
	
	/*! Point Vector */
	typedef MV<10,PNT_VEC,VSR_PRECISION>  Pnt_Vec;
	typedef Pnt_Vec PointVector;
	
	/*! Point Bivector */
	typedef MV<10,PNT_BIV,VSR_PRECISION>  Pnt_Biv;
	typedef Pnt_Biv PointBivector;
	
	/*! Point Affine Line */
	typedef MV<14,PNT_AFL,VSR_PRECISION>  Pnt_Afl;
	typedef Pnt_Afl PointAffineLine;
	
	/*! Point Affine Plane */
	typedef MV<11,PNT_AFP,VSR_PRECISION>  Pnt_Afp;
	typedef Pnt_Afp PointAffinePlane;
	
	/*! Point Dual Affine Plane */
	typedef MV<11,PNT_DAP,VSR_PRECISION>  Pnt_Dap;
	typedef Pnt_Dap PointDualAffinePlane;
	
	/*! Point Dual Affine Line */
	typedef MV<14,PNT_DAL,VSR_PRECISION>  Pnt_Dal;
	typedef Pnt_Dal PointDualAffineLine;
	
	/*! Point Minkowski Vector */
	typedef MV<10,PNT_MNV,VSR_PRECISION>  Pnt_Mnv;
	typedef Pnt_Mnv PointMinkowskiVector;
	
	/*! Point Pair Direction Bivector */
	typedef MV<12,PAR_DRB,VSR_PRECISION>  Par_Drb;
	typedef Par_Drb PointPairDirectionBivector;
	
	/*! Point Pair Tangent Bivector at Origin */
	typedef MV<12,PAR_TNB,VSR_PRECISION>  Par_Tnb;
	typedef Par_Tnb PointPairTangentBivectoratOrigin;
	
	/*! Point Pair Dual Flat Point */
	typedef MV<15,PAR_DFP,VSR_PRECISION>  Par_Dfp;
	typedef Par_Dfp PointPairDualFlatPoint;
	
	/*! Point Pair Bivector */
	typedef MV<15,PAR_BIV,VSR_PRECISION>  Par_Biv;
	typedef Par_Biv PointPairBivector;
	
	/*! Point Pair Affine Plane */
	typedef MV<15,PAR_AFP,VSR_PRECISION>  Par_Afp;
	typedef Par_Afp PointPairAffinePlane;
	
	/*! Point Pair Minkowski Vector */
	typedef MV<15,PAR_MNV,VSR_PRECISION>  Par_Mnv;
	typedef Par_Mnv PointPairMinkowskiVector;
	
	/*! Sphere Vector */
	typedef MV<10,SPH_VEC,VSR_PRECISION>  Sph_Vec;
	typedef Sph_Vec SphereVector;
	
	/*! Space Time Wedge Vector */
	typedef MV<12,STA_VEC,VSR_PRECISION>  Sta_Vec;
	typedef Sta_Vec SpaceTimeWedgeVector;
	
	/*! Space Time Wedge Bivector */
	typedef MV<12,STA_BIV,VSR_PRECISION>  Sta_Biv;
	typedef Sta_Biv SpaceTimeWedgeBivector;
	
	/*! Space Time Wedge Trivector */
	typedef MV<9,STA_TRI,VSR_PRECISION>  Sta_Tri;
	typedef Sta_Tri SpaceTimeWedgeTrivector;
	
	/*! Space Time Wedge Minkowski Vector */
	typedef MV<12,STA_MNV,VSR_PRECISION>  Sta_Mnv;
	typedef Sta_Mnv SpaceTimeWedgeMinkowskiVector;
	
	/*! Direction Vector Tangent Bivector at Origin */
	typedef MV<8,DRV_TNB,VSR_PRECISION>  Drv_Tnb;
	typedef Drv_Tnb DirectionVectorTangentBivectoratOrigin;
	
	/*! Direction Vector Line */
	typedef MV<4,DRV_LIN,VSR_PRECISION>  Drv_Lin;
	typedef Drv_Lin DirectionVectorLine;
	
	/*! Direction Vector Plane */
	typedef MV<4,DRV_PLN,VSR_PRECISION>  Drv_Pln;
	typedef Drv_Pln DirectionVectorPlane;
	
	/*! Direction Vector Affine Plane */
	typedef MV<11,DRV_AFP,VSR_PRECISION>  Drv_Afp;
	typedef Drv_Afp DirectionVectorAffinePlane;
	
	/*! Direction Vector Dual Affine Plane */
	typedef MV<11,DRV_DAP,VSR_PRECISION>  Drv_Dap;
	typedef Drv_Dap DirectionVectorDualAffinePlane;
	
	/*! Tangent Vector at Origin Flat Point */
	typedef MV<11,TNV_FLP,VSR_PRECISION>  Tnv_Flp;
	typedef Tnv_Flp TangentVectoratOriginFlatPoint;
	
	/*! Tangent Vector at Origin Dual Flat Point */
	typedef MV<11,TNV_DFP,VSR_PRECISION>  Tnv_Dfp;
	typedef Tnv_Dfp TangentVectoratOriginDualFlatPoint;
	
	/*! Tangent Vector at Origin Vector */
	typedef MV<4,TNV_VEC,VSR_PRECISION>  Tnv_Vec;
	typedef Tnv_Vec TangentVectoratOriginVector;
	
	/*! Tangent Vector at Origin Bivector */
	typedef MV<4,TNV_BIV,VSR_PRECISION>  Tnv_Biv;
	typedef Tnv_Biv TangentVectoratOriginBivector;
	
	/*! Line Plane */
	typedef MV<8,LIN_PLN,VSR_PRECISION>  Lin_Pln;
	typedef Lin_Pln LinePlane;
	
	/*! Line Flat Point */
	typedef MV<7,LIN_FLP,VSR_PRECISION>  Lin_Flp;
	typedef Lin_Flp LineFlatPoint;
	
	/*! Line Dual Flat Point */
	typedef MV<7,LIN_DFP,VSR_PRECISION>  Lin_Dfp;
	typedef Lin_Dfp LineDualFlatPoint;
	
	/*! Line Dual Line */
	typedef MV<8,LIN_DLL,VSR_PRECISION>  Lin_Dll;
	typedef Lin_Dll LineDualLine;
	
	/*! Line Dual Plane */
	typedef MV<8,LIN_DLP,VSR_PRECISION>  Lin_Dlp;
	typedef Lin_Dlp LineDualPlane;
	
	/*! Plane Plane */
	typedef MV<7,PLN_PLN,VSR_PRECISION>  Pln_Pln;
	typedef Pln_Pln PlanePlane;
	
	/*! Plane Flat Point */
	typedef MV<7,PLN_FLP,VSR_PRECISION>  Pln_Flp;
	typedef Pln_Flp PlaneFlatPoint;
	
	/*! Plane Dual Flat Point */
	typedef MV<7,PLN_DFP,VSR_PRECISION>  Pln_Dfp;
	typedef Pln_Dfp PlaneDualFlatPoint;
	
	/*! Plane Dual Plane */
	typedef MV<7,PLN_DLP,VSR_PRECISION>  Pln_Dlp;
	typedef Pln_Dlp PlaneDualPlane;
	
	/*! Plane Bivector */
	typedef MV<7,PLN_BIV,VSR_PRECISION>  Pln_Biv;
	typedef Pln_Biv PlaneBivector;
	
	/*! Plane Minkowski Vector */
	typedef MV<7,PLN_MNV,VSR_PRECISION>  Pln_Mnv;
	typedef Pln_Mnv PlaneMinkowskiVector;
	
	/*! Flat Point Affine Plane */
	typedef MV<14,FLP_AFP,VSR_PRECISION>  Flp_Afp;
	typedef Flp_Afp FlatPointAffinePlane;
	
	/*! Vector Bivector */
	typedef MV<4,VEC_BIV,VSR_PRECISION>  Vec_Biv;
	typedef Vec_Biv VectorBivector;
	
	/*! Vector Affine Point */
	typedef MV<7,VEC_AFF,VSR_PRECISION>  Vec_Aff;
	typedef Vec_Aff VectorAffinePoint;
	
	/*! Vector Affine Line */
	typedef MV<8,VEC_AFL,VSR_PRECISION>  Vec_Afl;
	typedef Vec_Afl VectorAffineLine;
	
	/*! Vector Affine Plane */
	typedef MV<7,VEC_AFP,VSR_PRECISION>  Vec_Afp;
	typedef Vec_Afp VectorAffinePlane;
	
	/*! Vector Dual Affine Plane */
	typedef MV<7,VEC_DAP,VSR_PRECISION>  Vec_Dap;
	typedef Vec_Dap VectorDualAffinePlane;
	
	/*! Vector Dual Affine Point */
	typedef MV<7,VEC_DAF,VSR_PRECISION>  Vec_Daf;
	typedef Vec_Daf VectorDualAffinePoint;
	
	/*! Vector Dual Affine Line */
	typedef MV<8,VEC_DAL,VSR_PRECISION>  Vec_Dal;
	typedef Vec_Dal VectorDualAffineLine;
	
	/*! Vector Minkowski Vector */
	typedef MV<4,VEC_MNV,VSR_PRECISION>  Vec_Mnv;
	typedef Vec_Mnv VectorMinkowskiVector;
	
	/*! Bivector Affine Point */
	typedef MV<7,BIV_AFF,VSR_PRECISION>  Biv_Aff;
	typedef Biv_Aff BivectorAffinePoint;
	
	/*! Bivector Affine Plane */
	typedef MV<7,BIV_AFP,VSR_PRECISION>  Biv_Afp;
	typedef Biv_Afp BivectorAffinePlane;
	
	/*! Bivector Dual Affine Plane */
	typedef MV<7,BIV_DAP,VSR_PRECISION>  Biv_Dap;
	typedef Biv_Dap BivectorDualAffinePlane;
	
	/*! Bivector Dual Affine Point */
	typedef MV<7,BIV_DAF,VSR_PRECISION>  Biv_Daf;
	typedef Biv_Daf BivectorDualAffinePoint;
	
	/*! Bivector Dual Affine Line */
	typedef MV<8,BIV_DAL,VSR_PRECISION>  Biv_Dal;
	typedef Biv_Dal BivectorDualAffineLine;
	
	/*! Bivector Minkowski Vector */
	typedef MV<4,BIV_MNV,VSR_PRECISION>  Biv_Mnv;
	typedef Biv_Mnv BivectorMinkowskiVector;
	
	/*! Minkowski Plane Point Sphere */
	typedef MV<11,MNK_PNT_SPH,VSR_PRECISION>  Mnk_Pnt_Sph;
	typedef Mnk_Pnt_Sph MinkowskiPlanePointSphere;
	
	/*! Minkowski Plane Point Line */
	typedef MV<14,MNK_PNT_LIN,VSR_PRECISION>  Mnk_Pnt_Lin;
	typedef Mnk_Pnt_Lin MinkowskiPlanePointLine;
	
	/*! Minkowski Plane Point Dual Line */
	typedef MV<14,MNK_PNT_DLL,VSR_PRECISION>  Mnk_Pnt_Dll;
	typedef Mnk_Pnt_Dll MinkowskiPlanePointDualLine;
	
	/*! Minkowski Plane Point Affine Line */
	typedef MV<14,MNK_PNT_AFL,VSR_PRECISION>  Mnk_Pnt_Afl;
	typedef Mnk_Pnt_Afl MinkowskiPlanePointAffineLine;
	
	/*! Minkowski Plane Point Dual Affine Line */
	typedef MV<14,MNK_PNT_DAL,VSR_PRECISION>  Mnk_Pnt_Dal;
	typedef Mnk_Pnt_Dal MinkowskiPlanePointDualAffineLine;
	
	/*! Minkowski Plane Space Time Wedge Bivector */
	typedef MV<12,MNK_STA_BIV,VSR_PRECISION>  Mnk_Sta_Biv;
	typedef Mnk_Sta_Biv MinkowskiPlaneSpaceTimeWedgeBivector;
	
	/*! Imaginary Sphere Direction Vector Tangent Bivector at Origin */
	typedef MV<8,HYP_DRV_TNB,VSR_PRECISION>  Hyp_Drv_Tnb;
	typedef Hyp_Drv_Tnb ImaginarySphereDirectionVectorTangentBivectoratOrigin;
	
	/*! Imaginary Sphere Vector Minkowski Vector */
	typedef MV<8,HYP_VEC_MNV,VSR_PRECISION>  Hyp_Vec_Mnv;
	typedef Hyp_Vec_Mnv ImaginarySphereVectorMinkowskiVector;
	
	/*! Pseudoscalar Minkowski Plane Point Sphere */
	typedef MV<11,PSS_MNK_PNT_SPH,VSR_PRECISION>  Pss_Mnk_Pnt_Sph;
	typedef Pss_Mnk_Pnt_Sph PseudoscalarMinkowskiPlanePointSphere;
	
	typedef Pnt Dls;
    
			
	} //vsr::
	#endif
	