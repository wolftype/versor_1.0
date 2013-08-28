#ifndef PRODUCTS_ANYMET_H_INCLUDED
#define PRODUCTS_ANYMET_H_INCLUDED


#include <math.h>
#include "lists.h"
#include "instructions.h"  
#include "split_met.h"
#include "versions.h" 

namespace vsr{


template<class S, int idxA, int idxB>
struct SplitInstructions{  
	typedef Instruct< (S::HEAD::SIGN < 0), S::HEAD::BIT, idxA, idxB> I;
	typedef typename XCat< XList<I>, typename SplitInstructions< typename S::TAIL, idxA, idxB >::Type >::Type Type; 
};                                                                                                                     

template<int idxA, int idxB>  
struct SplitInstructions<XList<>, idxA, idxB> {  
	typedef XList<> Type;
};

template<TT A, class B, class Metric, int idxA, int idxB>  
struct SubCGP{
	
	typedef typename SplitProd< A, B::HEAD, Metric>::Type Split;	
	typedef typename SplitInstructions< Split, idxA, idxB >::Type XL;	 
	typedef typename XCat< XL, typename SubCGP<A, typename B::TAIL, Metric, idxA, idxB+1>::Type >::Type Type; 
};
template<TT A, class Metric, int idxA, int idxB>  
struct SubCGP<A, MV<>, Metric, idxA, idxB >{
	typedef XList<> Type;
};

template<class A, class B, class Metric, int idxA=0, int idxB=0>  
struct CGP{
	typedef typename XCat< typename SubCGP<A::HEAD,B, Metric, idxA,idxB>::Type, typename CGP<typename A::TAIL, B, Metric, idxA+1,idxB>::Type >::Type Type; 
};
template<class B, class Metric, int idxA, int idxB>  
struct CGP<MV<>,B, Metric, idxA,idxB> {
	typedef XList<> Type; 
};

template<TT A, class B, class Metric, int idxA, int idxB>  
struct SubCOP{        
	
	typedef typename SplitOProd< A, B::HEAD, Metric>::Type Split;
	
	typedef typename SplitInstructions< Split, idxA, idxB >::Type XL;
	 
	typedef typename XCat< XL, typename SubCOP<A, typename B::TAIL, Metric, idxA, idxB+1>::Type >::Type Type;
};
template<TT A, class Metric, int idxA, int idxB>  
struct SubCOP<A, MV<>, Metric, idxA, idxB >{
	typedef XList<> Type;
};

template<class A, class B, class Metric, int idxA=0, int idxB=0>  
struct COP{
	typedef typename XCat< typename SubCOP<A::HEAD,B, Metric, idxA,idxB>::Type, typename COP<typename A::TAIL, B, Metric, idxA+1,idxB>::Type >::Type Type; 
};
template<class B, class Metric,  int idxA, int idxB>  
struct COP<MV<>,B, Metric,idxA,idxB> {
	typedef XList<> Type; 
};
                               


template<TT A, class B, class Metric, int idxA, int idxB>  
struct SubCIP{ 
	typedef typename SplitIProd< A, B::HEAD, Metric>::Type Split;
	
	typedef typename SplitInstructions< Split, idxA, idxB >::Type XL;
	 
	typedef typename XCat< XL, typename SubCIP<A, typename B::TAIL, Metric, idxA, idxB+1>::Type >::Type Type;
};
template<TT A, class Metric, int idxA, int idxB>  
struct SubCIP<A, MV<>, Metric, idxA, idxB >{
	typedef XList<> Type;
};

template<class A, class B, class Metric, int idxA=0, int idxB=0>  
struct CIP{
	typedef typename XCat< typename SubCIP<A::HEAD,B, Metric, idxA,idxB>::Type, typename CIP<typename A::TAIL, B, Metric, idxA+1,idxB>::Type >::Type Type; 
};
template<class B, class Metric,  int idxA, int idxB>  
struct CIP<MV<>,B, Metric, idxA,idxB> {
	typedef XList<> Type; 
};
 
/////////////////////////////
// DIAGONAL METRIC USED   ///   
/////////////////////////////
///////////////////////////// 
                             
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////


template<TT A, class B, class Metric, int idxA, int idxB>  
struct SubMGP{
	static const bool BFlip = MSign< Metric, A & B::HEAD, signFlip(A , B::HEAD) ? -1 : 1 >::Val == -1;  
	typedef typename XCat< XList< Inst< BFlip, A, B::HEAD, idxA, idxB> >, typename SubMGP<A, typename B::TAIL, Metric, idxA, idxB+1>::Type >::Type Type; 
};
template<TT A, class Metric, int idxA, int idxB>  
struct SubMGP<A, MV<>, Metric, idxA, idxB >{
	typedef XList<> Type;
};

template<class A, class B, class Metric, int idxA=0, int idxB=0>  
struct MGP{
	typedef typename XCat< typename SubMGP<A::HEAD,B, Metric, idxA,idxB>::Type, typename MGP<typename A::TAIL, B, Metric, idxA+1,idxB>::Type >::Type Type; 
};
template<class B, class Metric, int idxA, int idxB>  
struct MGP<MV<>,B, Metric, idxA,idxB> {
	typedef XList<> Type; 
}; 

template<TT A, class B, class Metric, int idxA, int idxB>  
struct SubMOP{
	static const bool BFlip = MSign< Metric, A & B::HEAD, signFlip(A , B::HEAD) ? -1 : 1 >::Val == -1;    
	typedef Inst< BFlip, A, B::HEAD, idxA, idxB> INST;
	typedef typename Maybe< INST::OP, XList< INST >, XList<> >::Type ELEM;
	typedef typename XCat< ELEM, typename SubMOP<A, typename B::TAIL, Metric, idxA, idxB+1>::Type >::Type Type; 
};
template<TT A, class Metric, int idxA, int idxB>  
struct SubMOP<A, MV<>, Metric, idxA, idxB >{
	typedef XList<> Type;
};

template<class A, class B, class Metric, int idxA=0, int idxB=0>  
struct MOP{
	typedef typename XCat< typename SubMOP<A::HEAD,B, Metric, idxA,idxB>::Type, typename MOP<typename A::TAIL, B, Metric, idxA+1,idxB>::Type >::Type Type; 
};
template<class B, class Metric, int idxA, int idxB>  
struct MOP<MV<>,B, Metric,idxA,idxB> {
	typedef XList<> Type; 
};

template<TT A, class B,  class Metric, int idxA, int idxB>  
struct SubMIP{ 
	static const bool BFlip = MSign< Metric, A & B::HEAD, signFlip(A , B::HEAD) ? -1 : 1 >::Val == -1; 
	typedef Inst< BFlip, A, B::HEAD, idxA, idxB> INST;
	typedef typename Maybe< INST::IP, XList< INST >, XList<> >::Type ELEM;
	typedef typename XCat< ELEM, typename SubMIP<A, typename B::TAIL, Metric, idxA, idxB+1>::Type >::Type Type; 
};
template<TT A, class Metric, int idxA, int idxB>  
struct SubMIP<A, MV<>, Metric, idxA, idxB >{
	typedef XList<> Type;
};

template<class A, class B, class Metric, int idxA=0, int idxB=0>  
struct MIP{
	typedef typename XCat< typename SubMIP<A::HEAD,B, Metric, idxA,idxB>::Type, typename MIP<typename A::TAIL, B, Metric, idxA+1,idxB>::Type >::Type Type; 
};
template<class B, class Metric,  int idxA, int idxB>  
struct MIP<MV<>,B, Metric, idxA,idxB> {
	typedef XList<> Type; 
};
                                                                           
/////////////////////////////
///////////////////////////// 
                             
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
//EUCLIDEAN 
//(METRIC IS ASSUMED TO BE Only Positive , e.g R4, R5, R6, etc) 
/////////////////////////////
///////////////////////////// 
                             
template<TT A, class B, int idxA, int idxB>  
struct SubEGP{
	//static const int Met = MSign< MV<1,1,1,1,-1>, A::BIT & B::HEAD::BIT, signFlip(A::BIT , B::HEAD::BIT) ? -1 : 1 >::Val;  
	typedef typename XCat< XList< Inst<signFlip( A, B::HEAD ), A, B::HEAD, idxA, idxB> >, typename SubEGP<A, typename B::TAIL, idxA, idxB+1>::Type >::Type Type; 
};
template<TT A, int idxA, int idxB>  
struct SubEGP<A, MV<>, idxA, idxB >{
	typedef XList<> Type;
};

template<class A, class B, int idxA=0, int idxB=0>  
struct EGP{
	typedef typename XCat< typename SubEGP<A::HEAD,B, idxA,idxB>::Type, typename EGP<typename A::TAIL, B, idxA+1,idxB>::Type >::Type Type; 
};
template<class B, int idxA, int idxB>  
struct EGP<MV<>,B, idxA,idxB> {
	typedef XList<> Type; 
}; 
template<TT A, class B, int idxA, int idxB>  
struct SubEOP{ 
	typedef Inst<signFlip( A, B::HEAD ), A, B::HEAD, idxA, idxB> INST;
	typedef typename Maybe< INST::OP, XList< INST >, XList<> >::Type ELEM;
	typedef typename XCat< ELEM, typename SubEOP<A, typename B::TAIL, idxA, idxB+1>::Type >::Type Type; 
};
template<TT A, int idxA, int idxB>  
struct SubEOP<A, MV<>, idxA, idxB >{
	typedef XList<> Type;
};

template<class A, class B, int idxA=0, int idxB=0>  
struct EOP{
	typedef typename XCat< typename SubEOP<A::HEAD,B, idxA,idxB>::Type, typename EOP<typename A::TAIL, B, idxA+1,idxB>::Type >::Type Type; 
};
template<class B, int idxA, int idxB>  
struct EOP<MV<>,B, idxA,idxB> {
	typedef XList<> Type; 
};

template<TT A, class B, int idxA, int idxB>  
struct SubEIP{ 
	typedef Inst<signFlip( A, B::HEAD ), A, B::HEAD, idxA, idxB> INST;
	typedef typename Maybe< INST::IP, XList< INST >, XList<> >::Type ELEM;
	typedef typename XCat< ELEM, typename SubEIP<A, typename B::TAIL, idxA, idxB+1>::Type >::Type Type; 
};
template<TT A, int idxA, int idxB>  
struct SubEIP<A, MV<>, idxA, idxB >{
	typedef XList<> Type;
};

template<class A, class B, int idxA=0, int idxB=0>  
struct EIP{
	typedef typename XCat< typename SubEIP<A::HEAD,B, idxA,idxB>::Type, typename EIP<typename A::TAIL, B, idxA+1,idxB>::Type >::Type Type; 
};
template<class B, int idxA, int idxB>  
struct EIP<MV<>,B, idxA,idxB> {
	typedef XList<> Type; 
};

///////////////////////////////////////////////////////      
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////  

template<class A, class B, class Metric, bool SplitIt>
struct Prod{
	
	typedef	typename MGP<A,B,Metric>::Type InstList;  
	
	typedef typename RMV<InstList>::Type Type; 
	
	typedef typename Index< InstList, Type>::Type DO;
	
	constexpr Type gp(const A& a, const B& b) const{
		return DO::template Make<Type>(a, b);
	}
};

template<class A, class B, class Metric>
struct Prod<A,B,Metric,true>{
 	
	typedef	typename CGP<A,B,Metric>::Type InstList;  
	
	typedef typename RMV<InstList>::Type Type; 
	
	typedef typename Index< InstList, Type>::Type DO;
	
	constexpr Type gp(const A& a, const B& b) const{
		return DO::template Make<Type>(a, b);
	}   
};

template<class A, class B, class Metric, bool SplitIt>
struct OProd{
	
	typedef	typename MOP<A,B,Metric>::Type InstList;  
	
	typedef typename RMV<InstList>::Type Type; 
	
	typedef typename Index< InstList, Type>::Type DO;
	
	constexpr Type op(const A& a, const B& b) const{
		return DO::template Make<Type>(a, b);
	}
};

template<class A, class B, class Metric>
struct OProd<A,B,Metric,true>{
 	
	typedef	typename COP<A,B,Metric>::Type InstList;  
	
	typedef typename RMV<InstList>::Type Type; 
	
	typedef typename Index< InstList, Type>::Type DO;
	
	constexpr Type op(const A& a, const B& b) const{
		return DO::template Make<Type>(a, b);
	}   
};

template<class A, class B, class Metric, bool SplitIt>
struct IProd{
	
	typedef	typename MIP<A,B,Metric>::Type InstList;  
	
	typedef typename RMV<InstList>::Type Type; 
	
	typedef typename Index< InstList, Type>::Type DO;
	
	constexpr Type ip(const A& a, const B& b) const{
		return DO::template Make<Type>(a, b);
	}
};

template<class A, class B, class Metric>
struct IProd<A,B,Metric,true>{
 	
	typedef	typename CIP<A,B,Metric>::Type InstList;  
	
	typedef typename RMV<InstList>::Type Type; 
	
	typedef typename Index< InstList, Type>::Type DO;
	
	constexpr Type ip(const A& a, const B& b) const{
		return DO::template Make<Type>(a, b);
	}   
}; 



template<class A, class B>
struct EProd{
 	
	typedef	typename EGP<A,B>::Type InstList;  
	
	typedef typename RMV<InstList>::Type Type; 
	
	typedef typename Index< InstList, Type>::Type DO;
	
	constexpr Type gp(const A& a, const B& b) const{
		return DO::template Make<Type>(a, b);
	}   
};

template<class A, class B>
struct EOProd{

	typedef typename EOP<A,B>::Type  InstList;	 
	typedef typename RMV<InstList>::Type Type; 
	
	typedef typename Index< InstList, Type>::Type DO;
	
	constexpr Type op(const A& a, const B& b) const{
		return DO::template Make<Type>(a, b);
	}
}; 
template<class A, class B>
struct EIProd{

	typedef typename EIP<A,B>::Type  InstList;	 
	typedef typename RMV<InstList>::Type Type; 
	
	typedef typename Index< InstList, Type>::Type DO;
	
	constexpr Type ip(const A& a, const B& b) const{
		return DO::template Make<Type>(a, b);
	}
};


   
// template<TT DIM>
// struct CGA{
// 	    
// 	typedef MV<0> Sca; 
// 	
// 	typedef typename Blade1<DIM>::VEC Vec;
// 	// typedef typename OProd< Vec,Vec, DIM >::Type Biv;
// 	// typedef typename OProd< Biv,Vec, DIM >::Type Tri; 	
// 
// };  


//EUCLIDEAN
template<class A, class B>
CA egp(const A& a, const B& b) RETURNS(
	( EProd<A,B>().gp(a, b) )
)
template<class A, class B>
CA eop(const A& a, const B& b) RETURNS(
	( EOProd<A,B>().op(a, b) )
)
template<class A, class B>
CA eip(const A& a, const B& b) RETURNS(
	( EIProd<A,B>().ip(a, b) )
)

//NON-EUCLIDEAN
template<class A, class B, class M>
CA mgp(const A& a, const B& b, const M&) RETURNS(
	( Prod<A,B,M,false>().gp(a, b) )
)    
template<class A, class B, class M>
CA mop(const A& a, const B& b, const M&) RETURNS(
	( OProd<A,B,M,false>().op(a, b) )
)
template<class A, class B, class M>
CA mip(const A& a, const B& b, const M&) RETURNS(
	( IProd<A,B,M,false>().ip(a, b) )
)

//CONFORMAL
template<class A, class B, class M>
CA cgp(const A& a, const B& b, const M&) RETURNS(
	( Prod<A,B,M,true>().gp(a, b) )
)  
template<class A, class B, class M>
CA cop(const A& a, const B& b, const M&) RETURNS(
	( OProd<A,B,M,true>().op(a, b) )
)
template<class A, class B, class M>
CA cip(const A& a, const B& b, const M&) RETURNS(
	( IProd<A,B,M,true>().ip(a, b) )
)
                     
///OPERATORS REQUIRE THE FOLLOWING MACROS HAVE BEEN DEFINED (SO METRIC CAN BE DETERMINED) 
#ifdef __EUC__
template<TT ... XS, TT ... YS>
auto operator * (const MV<XS...>& a, const MV<YS...>& b) RETURNS(
	( egp( a, b) )
)  
template<TT ... XS, TT ... YS>
auto operator ^ (const MV<XS...>& a, const MV<YS...>& b) RETURNS(
	( eop( a, b ) )
)
template<TT ... XS, TT ... YS>
auto operator <= (const MV<XS...>& a, const MV<YS...>& b) RETURNS(
	( eip( a, b ) )
)
                
template<class A, class B>
typename EProd<A,B>::DO inst(const A&, const B&) {
	return typename EProd<A,B>::DO();
}

#endif  

#ifdef __MET__
template<TT ... XS, TT ... YS>
auto operator * (const MV<XS...>& a, const MV<YS...>& b) RETURNS(
	( mgp( a, b, GLOBAL_METRIC ) )
) 
template<TT ... XS, TT ... YS>
auto operator ^ (const MV<XS...>& a, const MV<YS...>& b) RETURNS(
	( mop( a, b, GLOBAL_METRIC ) )
)
template<TT ... XS, TT ... YS>
auto operator <= (const MV<XS...>& a, const MV<YS...>& b) RETURNS(
	( mip( a, b, GLOBAL_METRIC ) )
)
template<class A, class B>
auto inst(const A&, const B&) RETURNS(
	( typename Prod<A,B,decltype(GLOBAL_METRIC),false>::DO() )
)
#endif  

#ifdef __CON__                         
template<TT ... XS, TT ... YS>
auto operator * (const MV<XS...>& a, const MV<YS...>& b) RETURNS(
	( cgp( a, b, GLOBAL_METRIC ) )
)
template<TT ... XS, TT ... YS>
auto operator ^ (const MV<XS...>& a, const MV<YS...>& b) RETURNS(
	( cop( a, b, GLOBAL_METRIC ) )
)
template<TT ... XS, TT ... YS>
auto operator <= (const MV<XS...>& a, const MV<YS...>& b) RETURNS(
	( cip( a, b, GLOBAL_METRIC ) )
) 
template<class A, class B>
auto inst(const A&, const B&) RETURNS(
   	( typename Prod<A,B, decltype(GLOBAL_METRIC),true>::DO() )  
)   
#endif


template<TT DIM>
struct EGA{    
	typedef MV<0> Sca;
	typedef typename Blade1<DIM>::VEC Vec;
	typedef typename EOProd<Vec,Vec>::Type Biv;
	typedef typename EOProd<Biv,Vec>::Type Tri; 	
	typedef typename EProd<Vec,Vec>::Type Rot; 
};

template<TT DIM>
struct CGA{            
	typedef typename RMetric<DIM-1,1>::Type M;
	typedef MV<0> Sca;
	typedef typename Blade1<DIM>::VEC Pnt;
	typedef typename OProd<Pnt,Pnt, M, true>::Type Par;
	typedef typename OProd<Par,Pnt, M, true>::Type Cir; 	
	typedef typename OProd<Par,Par, M, true>::Type Sph;  
	typedef typename Prod<Pnt,Pnt,M, true>::Type Bst; 
};


typedef EGA<3>::Vec Vec; 
typedef EGA<3>::Biv Biv; 
typedef EGA<3>::Tri Tri; 
typedef EGA<3>::Rot Rot;
 
} //vsr::

#endif