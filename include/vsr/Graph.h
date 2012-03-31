//
//  Graph.h
//  vsr
//
//  Created by Pablo Colapinto on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_Graph_h
#define vsr_Graph_h

namespace vsr  {
    
    template <typename T>
    struct Child {
        T * parent;  
    };
    
    template<typename T>
    struct Node : public Child<T> {
        
        T val;
        HalfEdge<T> * edge;        
        bool visited;        
        Node(HalfEdge * e = NULL) : edge(e), visited(0) {}

    };

    template <typename T>
    struct HalfEdge : public Child<T> {

        Node<T> * node;
        Face<T> * face;
        HalfEdge<T> *opp, *next;
        
        HalfEdge(Face<T> * f = NULL) : face(f), opp(NULL), next(NULL), bPaired(false) {}

        bool bPaired; ///< pair found
        bool null()		{ return (opp) ? 1 : 0; }
    };
    
    template<typename T>
    struct Face : public Child<T> {
        
        HalfEdge * edge;        
        Face(HalfEdge * e = NULL ) : edge(e) {}

    };
    
    
    //INT IDX TYPES
    
    //int edgeIdx;         
    //Node(int ei = -1) : edgeIdx(ei), visited(0) {}
    //HalfEdge& edge() { return parent -> edge[edgeIdx]; }  

//    //HalfEdge
//    template <typename T>
//    struct HalfEdge : public Child<T> {
//        
//        
//        int prevIdx;			int nextIdx;			int oppIdx;
//        int faceIdx;			int nodeIdx;
//        
//        bool bPaired; ///< pair found
//        
//        HalfEdge(int face = -1) : faceIdx(face), prevIdx(-1), nextIdx(-1), oppIdx(-1), nodeIdx(-1), bPaired(false) {}
//        HalfEdge& prev() { return parent -> edge[prevIdx]; }
//        HalfEdge& next() { return parent -> edge[nextIdx]; }							
//        HalfEdge& opp() { 				
//            if (!null()) return parent -> edge[oppIdx]; 
//            else return *this;
//        }
//        Face& face()	{ return parent -> face[faceIdx]; }
//        Node& node()	{ return parent -> node[nodeIdx]; }
//        bool null()		{ return (oppIdx == -1 ) ? 1 : 0; }
//    };
//    
//    ///FACES
//    template<typename T>
//    struct Face : public Child<T> {
//        Face(int ei = -1) : edgeIdx(ei) {}
//        int edgeIdx;
//        HalfEdge& edge() { return parent -> edge[edgeIdx]; }
//        vector<int> indices() { 
//            vector<int> res;
//            int tmp = edgeIdx;
//            do{
//                res.push_back( parent->edge[tmp].nodeIdx );
//                tmp = parent -> edge[tmp].nextIdx;					
//            } while ( tmp != edgeIdx );
//            return res;
//        }
//    };
} //vsr::

#endif
