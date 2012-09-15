	#ifndef VSR_TYPEDEFS_H_INCLUDED
	#define VSR_TYPEDEFS_H_INCLUDED
	 
	#include "MV.h"
//    #include "vsr_templates.h"
	
	namespace vsr{
	
//    template<int N, int IDX, class T> class MV;
	/*! Rotor */
	typedef MV<4,ROT,float>  Rot;
	typedef Rot Rotor;
	
	/*! Motor */
	typedef MV<8,MOT,float>  Mot;
	typedef Mot Motor;
	
	/*! Dilator */
	typedef MV<2,DIL,float>  Dil;
	typedef Dil Dilator;
	
	/*! Transversor */
	typedef MV<4,TRV,float>  Trv;
	typedef Trv Transversor;
	
	/*! Motor Dilator */
	typedef MV<12,MTD,float>  Mtd;
	typedef Mtd MotorDilator;
	
	/*! Translator */
	typedef MV<4,TRS,float>  Trs;
	typedef Trs Translator;
	
	/*! Rotor Circle */
	typedef MV<16,RTC,float>  Rtc;
	typedef Rtc RotorCircle;
	
	/*! Motor Transversor */
	typedef MV<16,MTT,float>  Mtt;
	typedef Mtt MotorTransversor;
	
	/*! Rotor Transveror */
	typedef MV<8,RTT,float>  Rtt;
	typedef Rtt RotorTransveror;
	
	/*! Rotor Dilator */
	typedef MV<8,RTD,float>  Rtd;
	typedef Rtd RotorDilator;
	
	/*! Transversor Dilator */
	typedef MV<5,TVD,float>  Tvd;
	typedef Tvd TransversorDilator;
	
	/*! Translator Dilator */
	typedef MV<5,TSD,float>  Tsd;
	typedef Tsd TranslatorDilator;
	
	/*! Transversor Translator */
	typedef MV<14,TRT,float>  Trt;
	typedef Trt TransversorTranslator;
	
	/*! Rotor Transversor Dilator */
	typedef MV<12,RVD,float>  Rvd;
	typedef Rvd RotorTransversorDilator;
	
	/*! Transv Transv Transl */
	typedef MV<15,TST,float>  Tst;
	typedef Tst TransvTransvTransl;
	
	/*! Trans Transv Transl */
	typedef MV<15,TVT,float>  Tvt;
	typedef Tvt TransTransvTransl;
	
	/*! Booster */
	typedef MV<11,BST,float>  Bst;
	typedef Bst Booster;
	
	/*! Scalar */
	typedef MV<1,SCA,float>  Sca;
	typedef Sca Scalar;
	
	/*! Origin */
	typedef MV<1,ORI,float>  Ori;
	typedef Ori Origin;
	
	/*! Infinity */
	typedef MV<1,INF,float>  Inf;
	typedef Inf Infinity;
	
	/*! Minkowski Plane */
	typedef MV<1,MNK,float>  Mnk;
	typedef Mnk MinkowskiPlane;
	
	/*! Imaginary Sphere */
	typedef MV<2,HYP,float>  Hyp;
	typedef Hyp ImaginarySphere;
	
	/*! Pseudoscalar */
	typedef MV<1,PSS,float>  Pss;
	typedef Pss Pseudoscalar;
	
	/*! Point */
	typedef MV<5,PNT,float>  Pnt;
	typedef Pnt Point;
	
	/*! Point Pair */
	typedef MV<10,PAR,float>  Par;
	typedef Par PointPair;
	
	/*! Circle */
	typedef MV<10,CIR,float>  Cir;
	typedef Cir Circle;
	
	/*! Sphere */
	typedef MV<5,SPH,float>  Sph;
	typedef Sph Sphere;
	
	/*! Space Time Wedge */
	typedef MV<9,STA,float>  Sta;
	typedef Sta SpaceTimeWedge;
	
	/*! Direction Vector */
	typedef MV<3,DRV,float>  Drv;
	typedef Drv DirectionVector;
	
	/*! Direction Bivector */
	typedef MV<3,DRB,float>  Drb;
	typedef Drb DirectionBivector;
	
	/*! Direction Trivector */
	typedef MV<1,DRT,float>  Drt;
	typedef Drt DirectionTrivector;
	
	/*! Tangent Vector at Origin */
	typedef MV<3,TNV,float>  Tnv;
	typedef Tnv TangentVectoratOrigin;
	
	/*! Tangent Bivector at Origin */
	typedef MV<3,TNB,float>  Tnb;
	typedef Tnb TangentBivectoratOrigin;
	
	/*! Tangent Trivector at Origin */
	typedef MV<1,TNT,float>  Tnt;
	typedef Tnt TangentTrivectoratOrigin;
	
	/*! Line */
	typedef MV<6,LIN,float>  Lin;
	typedef Lin Line;
	
	/*! Plane */
	typedef MV<4,PLN,float>  Pln;
	typedef Pln Plane;
	
	/*! Flat Point */
	typedef MV<4,FLP,float>  Flp;
	typedef Flp FlatPoint;
	
	/*! Dual Flat Point */
	typedef MV<4,DFP,float>  Dfp;
	typedef Dfp DualFlatPoint;
	
	/*! Dual Line */
	typedef MV<6,DLL,float>  Dll;
	typedef Dll DualLine;
	
	/*! Dual Plane */
	typedef MV<4,DLP,float>  Dlp;
	typedef Dlp DualPlane;
	
	/*! Vector */
	typedef MV<3,VEC,float>  Vec;
	typedef Vec Vector;
	
	/*! Bivector */
	typedef MV<3,BIV,float>  Biv;
	typedef Biv Bivector;
	
	/*! Trivector */
	typedef MV<1,TRI,float>  Tri;
	typedef Tri Trivector;
	
	/*! Affine Point */
	typedef MV<4,AFF,float>  Aff;
	typedef Aff AffinePoint;
	
	/*! Affine Line */
	typedef MV<6,AFL,float>  Afl;
	typedef Afl AffineLine;
	
	/*! Affine Plane */
	typedef MV<4,AFP,float>  Afp;
	typedef Afp AffinePlane;
	
	/*! Dual Affine Plane */
	typedef MV<4,DAP,float>  Dap;
	typedef Dap DualAffinePlane;
	
	/*! Dual Affine Point */
	typedef MV<4,DAF,float>  Daf;
	typedef Daf DualAffinePoint;
	
	/*! Dual Affine Line */
	typedef MV<6,DAL,float>  Dal;
	typedef Dal DualAffineLine;
	
	/*! Minkowski Vector */
	typedef MV<3,MNV,float>  Mnv;
	typedef Mnv MinkowskiVector;
	
	/*! Origin Origin */
	typedef MV<0,ORI_ORI,float>  Ori_Ori;
	typedef Ori_Ori OriginOrigin;
	
	/*! Origin Point Pair */
	typedef MV<10,ORI_PAR,float>  Ori_Par;
	typedef Ori_Par OriginPointPair;
	
	/*! Origin Circle */
	typedef MV<10,ORI_CIR,float>  Ori_Cir;
	typedef Ori_Cir OriginCircle;
	
	/*! Origin Sphere */
	typedef MV<5,ORI_SPH,float>  Ori_Sph;
	typedef Ori_Sph OriginSphere;
	
	/*! Origin Space Time Wedge */
	typedef MV<9,ORI_STA,float>  Ori_Sta;
	typedef Ori_Sta OriginSpaceTimeWedge;
	
	/*! Origin Direction Vector */
	typedef MV<6,ORI_DRV,float>  Ori_Drv;
	typedef Ori_Drv OriginDirectionVector;
	
	/*! Origin Direction Bivector */
	typedef MV<6,ORI_DRB,float>  Ori_Drb;
	typedef Ori_Drb OriginDirectionBivector;
	
	/*! Origin Direction Trivector */
	typedef MV<2,ORI_DRT,float>  Ori_Drt;
	typedef Ori_Drt OriginDirectionTrivector;
	
	/*! Origin Line */
	typedef MV<9,ORI_LIN,float>  Ori_Lin;
	typedef Ori_Lin OriginLine;
	
	/*! Origin Flat Point */
	typedef MV<7,ORI_FLP,float>  Ori_Flp;
	typedef Ori_Flp OriginFlatPoint;
	
	/*! Origin Dual Flat Point */
	typedef MV<7,ORI_DFP,float>  Ori_Dfp;
	typedef Ori_Dfp OriginDualFlatPoint;
	
	/*! Infinity Point Pair */
	typedef MV<10,INF_PAR,float>  Inf_Par;
	typedef Inf_Par InfinityPointPair;
	
	/*! Infinity Circle */
	typedef MV<10,INF_CIR,float>  Inf_Cir;
	typedef Inf_Cir InfinityCircle;
	
	/*! Infinity Sphere */
	typedef MV<5,INF_SPH,float>  Inf_Sph;
	typedef Inf_Sph InfinitySphere;
	
	/*! Infinity Space Time Wedge */
	typedef MV<9,INF_STA,float>  Inf_Sta;
	typedef Inf_Sta InfinitySpaceTimeWedge;
	
	/*! Infinity Affine Plane */
	typedef MV<7,INF_AFP,float>  Inf_Afp;
	typedef Inf_Afp InfinityAffinePlane;
	
	/*! Infinity Dual Affine Plane */
	typedef MV<7,INF_DAP,float>  Inf_Dap;
	typedef Inf_Dap InfinityDualAffinePlane;
	
	/*! Infinity Dual Affine Line */
	typedef MV<9,INF_DAL,float>  Inf_Dal;
	typedef Inf_Dal InfinityDualAffineLine;
	
	/*! Minkowski Plane Point */
	typedef MV<5,MNK_PNT,float>  Mnk_Pnt;
	typedef Mnk_Pnt MinkowskiPlanePoint;
	
	/*! Minkowski Plane Point Pair */
	typedef MV<10,MNK_PAR,float>  Mnk_Par;
	typedef Mnk_Par MinkowskiPlanePointPair;
	
	/*! Minkowski Plane Circle */
	typedef MV<10,MNK_CIR,float>  Mnk_Cir;
	typedef Mnk_Cir MinkowskiPlaneCircle;
	
	/*! Minkowski Plane Sphere */
	typedef MV<5,MNK_SPH,float>  Mnk_Sph;
	typedef Mnk_Sph MinkowskiPlaneSphere;
	
	/*! Minkowski Plane Space Time Wedge */
	typedef MV<9,MNK_STA,float>  Mnk_Sta;
	typedef Mnk_Sta MinkowskiPlaneSpaceTimeWedge;
	
	/*! Minkowski Plane Line */
	typedef MV<6,MNK_LIN,float>  Mnk_Lin;
	typedef Mnk_Lin MinkowskiPlaneLine;
	
	/*! Minkowski Plane Plane */
	typedef MV<4,MNK_PLN,float>  Mnk_Pln;
	typedef Mnk_Pln MinkowskiPlanePlane;
	
	/*! Minkowski Plane Dual Flat Point */
	typedef MV<4,MNK_DFP,float>  Mnk_Dfp;
	typedef Mnk_Dfp MinkowskiPlaneDualFlatPoint;
	
	/*! Minkowski Plane Dual Line */
	typedef MV<6,MNK_DLL,float>  Mnk_Dll;
	typedef Mnk_Dll MinkowskiPlaneDualLine;
	
	/*! Minkowski Plane Dual Plane */
	typedef MV<4,MNK_DLP,float>  Mnk_Dlp;
	typedef Mnk_Dlp MinkowskiPlaneDualPlane;
	
	/*! Minkowski Plane Bivector */
	typedef MV<3,MNK_BIV,float>  Mnk_Biv;
	typedef Mnk_Biv MinkowskiPlaneBivector;
	
	/*! Minkowski Plane Affine Point */
	typedef MV<4,MNK_AFF,float>  Mnk_Aff;
	typedef Mnk_Aff MinkowskiPlaneAffinePoint;
	
	/*! Minkowski Plane Affine Line */
	typedef MV<6,MNK_AFL,float>  Mnk_Afl;
	typedef Mnk_Afl MinkowskiPlaneAffineLine;
	
	/*! Minkowski Plane Affine Plane */
	typedef MV<4,MNK_AFP,float>  Mnk_Afp;
	typedef Mnk_Afp MinkowskiPlaneAffinePlane;
	
	/*! Minkowski Plane Dual Affine Point */
	typedef MV<4,MNK_DAF,float>  Mnk_Daf;
	typedef Mnk_Daf MinkowskiPlaneDualAffinePoint;
	
	/*! Minkowski Plane Dual Affine Line */
	typedef MV<6,MNK_DAL,float>  Mnk_Dal;
	typedef Mnk_Dal MinkowskiPlaneDualAffineLine;
	
	/*! Imaginary Sphere Pseudoscalar */
	typedef MV<2,HYP_PSS,float>  Hyp_Pss;
	typedef Hyp_Pss ImaginarySpherePseudoscalar;
	
	/*! Imaginary Sphere Point */
	typedef MV<8,HYP_PNT,float>  Hyp_Pnt;
	typedef Hyp_Pnt ImaginarySpherePoint;
	
	/*! Imaginary Sphere Point Pair */
	typedef MV<14,HYP_PAR,float>  Hyp_Par;
	typedef Hyp_Par ImaginarySpherePointPair;
	
	/*! Imaginary Sphere Circle */
	typedef MV<14,HYP_CIR,float>  Hyp_Cir;
	typedef Hyp_Cir ImaginarySphereCircle;
	
	/*! Imaginary Sphere Sphere */
	typedef MV<8,HYP_SPH,float>  Hyp_Sph;
	typedef Hyp_Sph ImaginarySphereSphere;
	
	/*! Imaginary Sphere Space Time Wedge */
	typedef MV<12,HYP_STA,float>  Hyp_Sta;
	typedef Hyp_Sta ImaginarySphereSpaceTimeWedge;
	
	/*! Imaginary Sphere Line */
	typedef MV<12,HYP_LIN,float>  Hyp_Lin;
	typedef Hyp_Lin ImaginarySphereLine;
	
	/*! Imaginary Sphere Flat Point */
	typedef MV<8,HYP_FLP,float>  Hyp_Flp;
	typedef Hyp_Flp ImaginarySphereFlatPoint;
	
	/*! Imaginary Sphere Dual Flat Point */
	typedef MV<8,HYP_DFP,float>  Hyp_Dfp;
	typedef Hyp_Dfp ImaginarySphereDualFlatPoint;
	
	/*! Imaginary Sphere Vector */
	typedef MV<6,HYP_VEC,float>  Hyp_Vec;
	typedef Hyp_Vec ImaginarySphereVector;
	
	/*! Imaginary Sphere Bivector */
	typedef MV<6,HYP_BIV,float>  Hyp_Biv;
	typedef Hyp_Biv ImaginarySphereBivector;
	
	/*! Pseudoscalar Space Time Wedge */
	typedef MV<9,PSS_STA,float>  Pss_Sta;
	typedef Pss_Sta PseudoscalarSpaceTimeWedge;
	
	/*! Point Point Pair */
	typedef MV<15,PNT_PAR,float>  Pnt_Par;
	typedef Pnt_Par PointPointPair;
	
	/*! Point Circle */
	typedef MV<15,PNT_CIR,float>  Pnt_Cir;
	typedef Pnt_Cir PointCircle;
	
	/*! Point Sphere */
	typedef MV<11,PNT_SPH,float>  Pnt_Sph;
	typedef Pnt_Sph PointSphere;
	
	/*! Point Line */
	typedef MV<14,PNT_LIN,float>  Pnt_Lin;
	typedef Pnt_Lin PointLine;
	
	/*! Point Flat Point */
	typedef MV<11,PNT_FLP,float>  Pnt_Flp;
	typedef Pnt_Flp PointFlatPoint;
	
	/*! Point Dual Flat Point */
	typedef MV<11,PNT_DFP,float>  Pnt_Dfp;
	typedef Pnt_Dfp PointDualFlatPoint;
	
	/*! Point Dual Line */
	typedef MV<14,PNT_DLL,float>  Pnt_Dll;
	typedef Pnt_Dll PointDualLine;
	
	/*! Point Vector */
	typedef MV<10,PNT_VEC,float>  Pnt_Vec;
	typedef Pnt_Vec PointVector;
	
	/*! Point Bivector */
	typedef MV<10,PNT_BIV,float>  Pnt_Biv;
	typedef Pnt_Biv PointBivector;
	
	/*! Point Affine Line */
	typedef MV<14,PNT_AFL,float>  Pnt_Afl;
	typedef Pnt_Afl PointAffineLine;
	
	/*! Point Affine Plane */
	typedef MV<11,PNT_AFP,float>  Pnt_Afp;
	typedef Pnt_Afp PointAffinePlane;
	
	/*! Point Dual Affine Plane */
	typedef MV<11,PNT_DAP,float>  Pnt_Dap;
	typedef Pnt_Dap PointDualAffinePlane;
	
	/*! Point Dual Affine Line */
	typedef MV<14,PNT_DAL,float>  Pnt_Dal;
	typedef Pnt_Dal PointDualAffineLine;
	
	/*! Point Minkowski Vector */
	typedef MV<10,PNT_MNV,float>  Pnt_Mnv;
	typedef Pnt_Mnv PointMinkowskiVector;
	
	/*! Point Pair Direction Bivector */
	typedef MV<12,PAR_DRB,float>  Par_Drb;
	typedef Par_Drb PointPairDirectionBivector;
	
	/*! Point Pair Tangent Bivector at Origin */
	typedef MV<12,PAR_TNB,float>  Par_Tnb;
	typedef Par_Tnb PointPairTangentBivectoratOrigin;
	
	/*! Point Pair Dual Flat Point */
	typedef MV<15,PAR_DFP,float>  Par_Dfp;
	typedef Par_Dfp PointPairDualFlatPoint;
	
	/*! Point Pair Bivector */
	typedef MV<15,PAR_BIV,float>  Par_Biv;
	typedef Par_Biv PointPairBivector;
	
	/*! Point Pair Affine Plane */
	typedef MV<15,PAR_AFP,float>  Par_Afp;
	typedef Par_Afp PointPairAffinePlane;
	
	/*! Point Pair Minkowski Vector */
	typedef MV<15,PAR_MNV,float>  Par_Mnv;
	typedef Par_Mnv PointPairMinkowskiVector;
	
	/*! Sphere Vector */
	typedef MV<10,SPH_VEC,float>  Sph_Vec;
	typedef Sph_Vec SphereVector;
	
	/*! Space Time Wedge Vector */
	typedef MV<12,STA_VEC,float>  Sta_Vec;
	typedef Sta_Vec SpaceTimeWedgeVector;
	
	/*! Space Time Wedge Bivector */
	typedef MV<12,STA_BIV,float>  Sta_Biv;
	typedef Sta_Biv SpaceTimeWedgeBivector;
	
	/*! Space Time Wedge Trivector */
	typedef MV<9,STA_TRI,float>  Sta_Tri;
	typedef Sta_Tri SpaceTimeWedgeTrivector;
	
	/*! Space Time Wedge Minkowski Vector */
	typedef MV<12,STA_MNV,float>  Sta_Mnv;
	typedef Sta_Mnv SpaceTimeWedgeMinkowskiVector;
	
	/*! Direction Vector Tangent Bivector at Origin */
	typedef MV<8,DRV_TNB,float>  Drv_Tnb;
	typedef Drv_Tnb DirectionVectorTangentBivectoratOrigin;
	
	/*! Direction Vector Line */
	typedef MV<4,DRV_LIN,float>  Drv_Lin;
	typedef Drv_Lin DirectionVectorLine;
	
	/*! Direction Vector Plane */
	typedef MV<4,DRV_PLN,float>  Drv_Pln;
	typedef Drv_Pln DirectionVectorPlane;
	
	/*! Direction Vector Affine Plane */
	typedef MV<11,DRV_AFP,float>  Drv_Afp;
	typedef Drv_Afp DirectionVectorAffinePlane;
	
	/*! Direction Vector Dual Affine Plane */
	typedef MV<11,DRV_DAP,float>  Drv_Dap;
	typedef Drv_Dap DirectionVectorDualAffinePlane;
	
	/*! Tangent Vector at Origin Flat Point */
	typedef MV<11,TNV_FLP,float>  Tnv_Flp;
	typedef Tnv_Flp TangentVectoratOriginFlatPoint;
	
	/*! Tangent Vector at Origin Dual Flat Point */
	typedef MV<11,TNV_DFP,float>  Tnv_Dfp;
	typedef Tnv_Dfp TangentVectoratOriginDualFlatPoint;
	
	/*! Tangent Vector at Origin Vector */
	typedef MV<4,TNV_VEC,float>  Tnv_Vec;
	typedef Tnv_Vec TangentVectoratOriginVector;
	
	/*! Tangent Vector at Origin Bivector */
	typedef MV<4,TNV_BIV,float>  Tnv_Biv;
	typedef Tnv_Biv TangentVectoratOriginBivector;
	
	/*! Line Plane */
	typedef MV<8,LIN_PLN,float>  Lin_Pln;
	typedef Lin_Pln LinePlane;
	
	/*! Line Flat Point */
	typedef MV<7,LIN_FLP,float>  Lin_Flp;
	typedef Lin_Flp LineFlatPoint;
	
	/*! Line Dual Flat Point */
	typedef MV<7,LIN_DFP,float>  Lin_Dfp;
	typedef Lin_Dfp LineDualFlatPoint;
	
	/*! Line Dual Line */
	typedef MV<8,LIN_DLL,float>  Lin_Dll;
	typedef Lin_Dll LineDualLine;
	
	/*! Line Dual Plane */
	typedef MV<8,LIN_DLP,float>  Lin_Dlp;
	typedef Lin_Dlp LineDualPlane;
	
	/*! Plane Plane */
	typedef MV<7,PLN_PLN,float>  Pln_Pln;
	typedef Pln_Pln PlanePlane;
	
	/*! Plane Flat Point */
	typedef MV<7,PLN_FLP,float>  Pln_Flp;
	typedef Pln_Flp PlaneFlatPoint;
	
	/*! Plane Dual Flat Point */
	typedef MV<7,PLN_DFP,float>  Pln_Dfp;
	typedef Pln_Dfp PlaneDualFlatPoint;
	
	/*! Plane Dual Plane */
	typedef MV<7,PLN_DLP,float>  Pln_Dlp;
	typedef Pln_Dlp PlaneDualPlane;
	
	/*! Plane Bivector */
	typedef MV<7,PLN_BIV,float>  Pln_Biv;
	typedef Pln_Biv PlaneBivector;
	
	/*! Plane Minkowski Vector */
	typedef MV<7,PLN_MNV,float>  Pln_Mnv;
	typedef Pln_Mnv PlaneMinkowskiVector;
	
	/*! Flat Point Affine Plane */
	typedef MV<14,FLP_AFP,float>  Flp_Afp;
	typedef Flp_Afp FlatPointAffinePlane;
	
	/*! Vector Bivector */
	typedef MV<4,VEC_BIV,float>  Vec_Biv;
	typedef Vec_Biv VectorBivector;
	
	/*! Vector Affine Point */
	typedef MV<7,VEC_AFF,float>  Vec_Aff;
	typedef Vec_Aff VectorAffinePoint;
	
	/*! Vector Affine Line */
	typedef MV<8,VEC_AFL,float>  Vec_Afl;
	typedef Vec_Afl VectorAffineLine;
	
	/*! Vector Affine Plane */
	typedef MV<7,VEC_AFP,float>  Vec_Afp;
	typedef Vec_Afp VectorAffinePlane;
	
	/*! Vector Dual Affine Plane */
	typedef MV<7,VEC_DAP,float>  Vec_Dap;
	typedef Vec_Dap VectorDualAffinePlane;
	
	/*! Vector Dual Affine Point */
	typedef MV<7,VEC_DAF,float>  Vec_Daf;
	typedef Vec_Daf VectorDualAffinePoint;
	
	/*! Vector Dual Affine Line */
	typedef MV<8,VEC_DAL,float>  Vec_Dal;
	typedef Vec_Dal VectorDualAffineLine;
	
	/*! Vector Minkowski Vector */
	typedef MV<4,VEC_MNV,float>  Vec_Mnv;
	typedef Vec_Mnv VectorMinkowskiVector;
	
	/*! Bivector Affine Point */
	typedef MV<7,BIV_AFF,float>  Biv_Aff;
	typedef Biv_Aff BivectorAffinePoint;
	
	/*! Bivector Affine Plane */
	typedef MV<7,BIV_AFP,float>  Biv_Afp;
	typedef Biv_Afp BivectorAffinePlane;
	
	/*! Bivector Dual Affine Plane */
	typedef MV<7,BIV_DAP,float>  Biv_Dap;
	typedef Biv_Dap BivectorDualAffinePlane;
	
	/*! Bivector Dual Affine Point */
	typedef MV<7,BIV_DAF,float>  Biv_Daf;
	typedef Biv_Daf BivectorDualAffinePoint;
	
	/*! Bivector Dual Affine Line */
	typedef MV<8,BIV_DAL,float>  Biv_Dal;
	typedef Biv_Dal BivectorDualAffineLine;
	
	/*! Bivector Minkowski Vector */
	typedef MV<4,BIV_MNV,float>  Biv_Mnv;
	typedef Biv_Mnv BivectorMinkowskiVector;
	
	/*! Minkowski Plane Point Sphere */
	typedef MV<11,MNK_PNT_SPH,float>  Mnk_Pnt_Sph;
	typedef Mnk_Pnt_Sph MinkowskiPlanePointSphere;
	
	/*! Minkowski Plane Point Line */
	typedef MV<14,MNK_PNT_LIN,float>  Mnk_Pnt_Lin;
	typedef Mnk_Pnt_Lin MinkowskiPlanePointLine;
	
	/*! Minkowski Plane Point Dual Line */
	typedef MV<14,MNK_PNT_DLL,float>  Mnk_Pnt_Dll;
	typedef Mnk_Pnt_Dll MinkowskiPlanePointDualLine;
	
	/*! Minkowski Plane Point Affine Line */
	typedef MV<14,MNK_PNT_AFL,float>  Mnk_Pnt_Afl;
	typedef Mnk_Pnt_Afl MinkowskiPlanePointAffineLine;
	
	/*! Minkowski Plane Point Dual Affine Line */
	typedef MV<14,MNK_PNT_DAL,float>  Mnk_Pnt_Dal;
	typedef Mnk_Pnt_Dal MinkowskiPlanePointDualAffineLine;
	
	/*! Minkowski Plane Space Time Wedge Bivector */
	typedef MV<12,MNK_STA_BIV,float>  Mnk_Sta_Biv;
	typedef Mnk_Sta_Biv MinkowskiPlaneSpaceTimeWedgeBivector;
	
	/*! Imaginary Sphere Direction Vector Tangent Bivector at Origin */
	typedef MV<8,HYP_DRV_TNB,float>  Hyp_Drv_Tnb;
	typedef Hyp_Drv_Tnb ImaginarySphereDirectionVectorTangentBivectoratOrigin;
	
	/*! Imaginary Sphere Vector Minkowski Vector */
	typedef MV<8,HYP_VEC_MNV,float>  Hyp_Vec_Mnv;
	typedef Hyp_Vec_Mnv ImaginarySphereVectorMinkowskiVector;
	
	/*! Pseudoscalar Minkowski Plane Point Sphere */
	typedef MV<11,PSS_MNK_PNT_SPH,float>  Pss_Mnk_Pnt_Sph;
	typedef Pss_Mnk_Pnt_Sph PseudoscalarMinkowskiPlanePointSphere;
	
	typedef Pnt Dls;
    
	
	
			
	} //vsr::
	#endif
	