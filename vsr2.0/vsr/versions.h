#ifndef VERSIONS_H_INCLUDED
#define VERSIONS_H_INCLUDED

#include "lists.h"
// #include "instructions.h"  

namespace vsr{                
	  

template<class A, int IDX=0>
struct Reverse{
	typedef typename XCat< XList< InstFlip< reverse(A::HEAD), IDX> > , typename Reverse<typename A::TAIL, IDX+1>::Type >::Type Type; 
};
template<int IDX>
struct Reverse< MV<>, IDX >{
	typedef XList<> Type;  
};

template<class A, int IDX=0>
struct Conjugate{
	typedef typename XCat< XList< InstFlip< conjugate(A::HEAD), IDX> > , typename Conjugate<typename A::TAIL, IDX+1>::Type >::Type Type; 
};
template<int IDX>
struct Conjugate< MV<>, IDX >{
	typedef XList<> Type;  
};

template<class A, int IDX=0>
struct Involute{
	typedef typename XCat< XList< InstFlip< involute(A::HEAD), IDX> > , typename Involute<typename A::TAIL, IDX+1>::Type >::Type Type; 
};
template<int IDX>
struct Involute< MV<>, IDX >{
	typedef XList<> Type;  
};


constexpr int find(int n, const MV<>, int idx){
	return -1;
}
template<class A>
constexpr int find(int n, const A& a, int idx = 0){
	return A::HEAD == n ? idx : find(n, typename A::TAIL(), idx +1);
}        

//CAST B TO A
template<class A, class B>
struct Cast{
	typedef typename XCat< XList< InstCast< find( A::HEAD, B() ) > > , typename Cast< typename A::TAIL, B >::Type >::Type Type;  
};  
template<class B>
struct Cast< MV<>, B >{
	typedef XList<> Type;  
};     




template<TT X, TT...XS> template<class A> 
A MV<X,XS...>::cast() const{
 return Cast<  A, MV<X,XS...> >::Type::template Cast<A>( *this );
} 

template<TT X, TT...XS> template<int IDX> 
VT MV<X,XS...>::get() const{
 return val[ find(IDX, *this) ];
}
template<TT X, TT...XS> template<int IDX> 
VT& MV<X,XS...>::get() {
 return val[ find(IDX, *this) ];
}

template<TT X, TT...XS> 
MV<X,XS...> MV<X,XS...>::conjugation() const{
	return Conjugate<MV<X,XS...>>::Type::template Make(*this);
}
template<TT X, TT...XS> 
MV<X,XS...> MV<X,XS...>::involution() const{
	return Involute<MV<X,XS...>>::Type::template Make(*this);
} 

template< TT X, TT ...XS>
MV<X,XS...> MV<X,XS...>::operator ~() const{
	return Reverse< MV<X,XS...> >::Type::template Make(*this) ;
}

} //vsr::   

#endif