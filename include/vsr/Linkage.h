//
//  Linkage.h
//  vsr
//
//  Created by Pablo Colapinto on 4/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//  
/*
 
Linkage Mechanisms
 
 */

#ifndef vsr_Linkage_h
#define vsr_Linkage_h

#include "Frame.h"

namespace vsr {
    
    struct Link; struct Joint; class Linkage;
    
    struct Constraint {
        enum Type{
          Angle, Distance, Collinear, Parallel  
        };
        
        
    };
    
    //KINETICS NODE
    struct KiNode : public Frame {
        KiNode() : Frame(), visited(false), idx(0), Linkage(NULL) {}
        Mot pose;                       ///< CURRENT STORED POSE
        int idx;                        ///< IDX IN LINKAGE
        bool visited;                   ///< FLAG FOR DAG
        Linkage * linkage;              ///< MOTHER LINKAGE
        void reset() { visited = false; }
    };
        
    struct Link : public KiNode {

        Joint * a; ///< Base
        Joint * b;
        //vector<Joint*> ends;  ///< Ends

//        Link& add( Joint& j ) {
//            j.
//            ends.push_back(&j); 
//            return *this; 
//        }
        
        Link& attach( Joint& _a, Joint& _b ) { 
            _a.fore(*this); // Add This Link to Joint A
            a = _a;
            
            _b.back(*this);
        }
//        Joint& operator [] (int i ) { return *ends[i]; }
                
        Mot operator () { 
            if (!visited){
                pose = mot() * a();
                visited = true;
            }
            return pose; 
        } 
    
    };
    
    struct Joint : public KiNode {
        
        vector<Link*> backward;     ///< Backward Links
        vector<Link*> forward;      ///< Forwards Links
        
        int num;

        Joint& fore(const Link& l) { forward.push_back(&l); return *this; }
        Joint& back( Link& l )  { backward.push_back(&l); return *this; }
        
        Link& operator [] (int i) { return *forward[i]; }  
        
        Mot operator () {
             if (!visited){
                for (int i = 0; i < backward.size(); ++i){
                    Mot m = backward[i]();
                }
                
                 pose = mot();
             }
            return pose;
        }

    };
    
//    struct ChainNode {
//        vector<Joint*> joints;
//        vector<Link*> links;
//    };

    
    class Linkage {
        
        vector<Frame> mFrame;        
        vector<Joint> mJoint;
        vector<Link>  mLink;
        
        public:

        Linkage& add(){}
        
        Joint& operator [] (int i ) { return mJoint[i]; }

        void fk(){
            mFrame[0].mot ( mJoint[i] );
            for (int i = 1; i < mFrame.size(); ++i){
                Mot m = mFrame[
                mFrame[i].mot ( m );
            }
        }
    };
    
}

#endif
